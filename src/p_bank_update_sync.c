#include <pokeagb/pokeagb.h>
#include "battle_data/pkmn_bank.h"
#include "battle_data/pkmn_bank_stats.h"

extern void ailment_decode(u8 bank, u8 ailment);
extern u8 ailment_encode(u8 bank);
extern u8 get_ability(struct Pokemon* p);
extern void status_graphical_update(u8 bank, enum Effect status);


void update_pbank(u8 bank, struct update_flags* flags)
{
    // base stats
    u16 species = pokemon_getattr(p_bank[bank]->this_pkmn, REQUEST_SPECIES, NULL);
    p_bank[bank]->b_data.species = species;
    p_bank[bank]->b_data.gender = pokemon_get_gender(p_bank[bank]->this_pkmn);
    p_bank[bank]->b_data.current_hp = pokemon_getattr(p_bank[bank]->this_pkmn, REQUEST_CURRENT_HP, NULL);;
    p_bank[bank]->b_data.total_hp = pokemon_getattr(p_bank[bank]->this_pkmn, REQUEST_TOTAL_HP, NULL);;
    p_bank[bank]->b_data.ability = get_ability(p_bank[bank]->this_pkmn);
    p_bank[bank]->b_data.item = pokemon_getattr(p_bank[bank]->this_pkmn, REQUEST_HELD_ITEM, NULL);
    p_bank[bank]->b_data.level = pokemon_getattr(p_bank[bank]->this_pkmn, REQUEST_LEVEL, NULL);
    p_bank[bank]->b_data.poke_ball = 0;
    p_bank[bank]->b_data.type[0] = pokemon_base_stats[species].type[0];
    p_bank[bank]->b_data.type[1] = pokemon_base_stats[species].type[1];
    p_bank[bank]->b_data.type[1] = (p_bank[bank]->b_data.type[1]) ? p_bank[bank]->b_data.type[1] : TYPE_NONE;
    p_bank[bank]->b_data.type[2] = TYPE_NONE;

    ailment_decode(bank, pokemon_getattr(p_bank[bank]->this_pkmn, REQUEST_STATUS_AILMENT, NULL));

    if (!flags->pass_stats) {
        p_bank[bank]->b_data.attack = 0;
        p_bank[bank]->b_data.defense = 0;
        p_bank[bank]->b_data.speed = 0;
        p_bank[bank]->b_data.sp_atk = 0;
        p_bank[bank]->b_data.sp_def = 0;
        p_bank[bank]->b_data.accuracy = 0;
        p_bank[bank]->b_data.evasion = 0;
        p_bank[bank]->b_data.crit_mod = 0;
    }

    // user actions should always be cleared
    p_bank[bank]->b_data.is_running = 0;
    p_bank[bank]->b_data.using_item = 0;
    p_bank[bank]->b_data.is_switching = 0;
    p_bank[bank]->b_data.skip_move_select = 0;
    p_bank[bank]->b_data.first_turn = 1;

    if (!flags->pass_atk_history) {
        p_bank[bank]->b_data.my_target = 0xFF;
        p_bank[bank]->b_data.last_move = 0;
        p_bank[bank]->b_data.current_move = 0;
        p_bank[bank]->b_data.last_damage = 0;
        p_bank[bank]->b_data.last_attacked_by = 0xFF;
        p_bank[bank]->b_data.last_used_item = 0;
        p_bank[bank]->b_data.ate_berry = 0;
    }

    if (!flags->pass_status) {
        p_bank[bank]->b_data.status = 0;
        p_bank[bank]->b_data.confusion_turns = 0;
        p_bank[bank]->b_data.status_turns = 0;
        p_bank[bank]->b_data.substitute_health = 0;
        p_bank[bank]->b_data.v_status = 0;
        p_bank[bank]->b_data.is_taunted = 0;
        p_bank[bank]->b_data.is_charmed = 0;
        p_bank[bank]->b_data.is_grounded = 0;
    } else {
        status_graphical_update(bank, p_bank[bank]->b_data.status);
    }

    if (!flags->pass_disables) {
        p_bank[bank]->b_data.disabled_moves[0] = 0;
        p_bank[bank]->b_data.disabled_moves[1] = 0;
        p_bank[bank]->b_data.disabled_moves[2] = 0;
        p_bank[bank]->b_data.disabled_moves[3] = 0;
        p_bank[bank]->b_data.disable_used_on_slot = 0xFF; // valid slot means used
    }

    p_bank[bank]->b_data.illusion = 0;
    p_bank[bank]->b_data.fainted = 0;
}


void sync_battler_struct(u8 bank)
{
    u16 c_hp = p_bank[bank]->b_data.current_hp;
    u8 ailment = ailment_encode(bank);
    pokemon_setattr(p_bank[bank]->this_pkmn, REQUEST_CURRENT_HP, &c_hp);
    pokemon_setattr(p_bank[bank]->this_pkmn, REQUEST_STATUS_AILMENT, &ailment);
}
