#include <pokeagb/pokeagb.h>
#include "moves.h"
#include "../items/items.h"


pchar Pound_desc[] = _("No additional effect.");
pchar Karate_Chop_desc[] = _("High critical hit ratio.");
pchar Double_Slap_desc[] = _("Hits 2-5 times in one turn.");
pchar Comet_Punch_desc[] = _("Hits 2-5 times in one turn.");
pchar Mega_Punch_desc[] = _("No additional effect.");
pchar Pay_Day_desc[] = _("Scatters coins.");
pchar Fire_Punch_desc[] = _("10% chance to burn the target.");
pchar Ice_Punch_desc[] = _("10% chance to freeze the target.");
pchar Thunder_Punch_desc[] = _("10% chance to paralyze the target.");
pchar Scratch_desc[] = _("No additional effect.");
pchar Vice_Grip_desc[] = _("No additional effect.");
pchar Guillotine_desc[] = _("OHKOs the target. Fails if user is a lower level.");
pchar Razor_Wind_desc[] = _("Charges then hits foe(s) turn 2. High crit ratio.");
pchar Swords_Dance_desc[] = _("Raises the user‘s Attack by 2.");
pchar Cut_desc[] = _("No additional effect.");
pchar Gust_desc[] = _("Power doubles during Fly Bounce and Sky Drop.");
pchar Wing_Attack_desc[] = _("No additional effect.");
pchar Whirlwind_desc[] = _("Forces the target to switch to a random ally.");
pchar Fly_desc[] = _("Flies up on first turn then strikes the next turn.");
pchar Bind_desc[] = _("Traps and damages the target for 4-5 turns.");
pchar Slam_desc[] = _("No additional effect.");
pchar Vine_Whip_desc[] = _("No additional effect.");
pchar Stomp_desc[] = _("30% chance to flinch the target.");
pchar Double_Kick_desc[] = _("Hits 2 times in one turn.");
pchar Mega_Kick_desc[] = _("No additional effect.");
pchar Jump_Kick_desc[] = _("User is hurt by 50% of its max HP if it misses.");
pchar Rolling_Kick_desc[] = _("30% chance to flinch the target.");
pchar Sand_Attack_desc[] = _("Lowers the target‘s accuracy by 1.");
pchar Headbutt_desc[] = _("30% chance to flinch the target.");
pchar Horn_Attack_desc[] = _("No additional effect.");
pchar Fury_Attack_desc[] = _("Hits 2-5 times in one turn.");
pchar Horn_Drill_desc[] = _("OHKOs the target. Fails if user is a lower level.");
pchar Tackle_desc[] = _("No additional effect.");
pchar Body_Slam_desc[] = _("30% chance to paralyze the target.");
pchar Wrap_desc[] = _("Traps and damages the target for 4-5 turns.");
pchar Take_Down_desc[] = _("Has 1/4 recoil.");
pchar Thrash_desc[] = _("Lasts 2-3 turns. Confuses the user afterwards.");
pchar Double_Edge_desc[] = _("Has 33% recoil.");
pchar Tail_Whip_desc[] = _("Lowers the foe(s) Defense by 1.");
pchar Poison_Sting_desc[] = _("30% chance to poison the target.");
pchar Twineedle_desc[] = _("Hits 2 times. Each hit has 20% chance to poison.");
pchar Pin_Missile_desc[] = _("Hits 2-5 times in one turn.");
pchar Leer_desc[] = _("Lowers the foe(s) Defense by 1.");
pchar Bite_desc[] = _("30% chance to flinch the target.");
pchar Growl_desc[] = _("Lowers the foe(s) Attack by 1.");
pchar Roar_desc[] = _("Forces the target to switch to a random ally.");
pchar Sing_desc[] = _("Puts the target to sleep.");
pchar Supersonic_desc[] = _("Confuses the target.");
pchar Sonic_Boom_desc[] = _("Always does 20 HP of damage.");
pchar Disable_desc[] = _("For 4 turns disables the target‘s last move used.");
pchar Acid_desc[] = _("10% chance to lower the foe(s) Sp. Def by 1.");
pchar Ember_desc[] = _("10% chance to burn the target.");
pchar Flamethrower_desc[] = _("10% chance to burn the target.");
pchar Mist_desc[] = _("For 5 turns protects user‘s party from stat drops.");
pchar Water_Gun_desc[] = _("No additional effect.");
pchar Hydro_Pump_desc[] = _("No additional effect.");
pchar Surf_desc[] = _("Hits adjacent Pokemon. Power doubles on Dive.");
pchar Ice_Beam_desc[] = _("10% chance to freeze the target.");
pchar Blizzard_desc[] = _("10% chance to freeze the foe(s).");
pchar Psybeam_desc[] = _("10% chance to confuse the target.");
pchar Bubble_Beam_desc[] = _("10% chance to lower the target‘s Speed by 1.");
pchar Aurora_Beam_desc[] = _("10% chance to lower the foe‘s Attack by 1.");
pchar Hyper_Beam_desc[] = _("User cannot move next turn.");
pchar Peck_desc[] = _("No additional effect.");
pchar Drill_Peck_desc[] = _("No additional effect.");
pchar Submission_desc[] = _("Has 1/4 recoil.");
pchar Low_Kick_desc[] = _("More power the heavier the target.");
pchar Counter_desc[] = _("If hit by physical attack returns double damage.");
pchar Seismic_Toss_desc[] = _("Does damage equal to the user‘s level.");
pchar Strength_desc[] = _("No additional effect.");
pchar Absorb_desc[] = _("User recovers 50% of the damage dealt.");
pchar Mega_Drain_desc[] = _("User recovers 50% of the damage dealt.");
pchar Leech_Seed_desc[] = _("1/8 of target‘s HP is restored to user every turn.");
pchar Growth_desc[] = _("Raises user‘s Attack and SpAtk by 1, or 2 in Sun.");
pchar Razor_Leaf_desc[] = _("High critical hit ratio. Hits adjacent foes.");
pchar Solar_Beam_desc[] = _("Charges turn 1. Hits turn 2. No charge in sunlight.");
pchar Poison_Powder_desc[] = _("Poisons the target.");
pchar Stun_Spore_desc[] = _("Paralyzes the target.");
pchar Sleep_Powder_desc[] = _("Puts the target to sleep.");
pchar Petal_Dance_desc[] = _("Lasts 2-3 turns. Confuses the user afterwards.");
pchar String_Shot_desc[] = _("Lowers the foe(s) Speed by 2.");
pchar Dragon_Rage_desc[] = _("Always does 40 HP of damage.");
pchar Fire_Spin_desc[] = _("Traps and damages the target for 4-5 turns.");
pchar Thunder_Shock_desc[] = _("10% chance to paralyze the target.");
pchar Thunderbolt_desc[] = _("10% chance to paralyze the target.");
pchar Thunder_Wave_desc[] = _("Paralyzes the target.");
pchar Thunder_desc[] = _("30% chance to paralyze target. Can‘t miss in rain.");
pchar Rock_Throw_desc[] = _("No additional effect.");
pchar Earthquake_desc[] = _("Hits adjacent Pokemon. Power doubles on Dig.");
pchar Fissure_desc[] = _("OHKOs the target. Fails if user is a lower level.");
pchar Dig_desc[] = _("Digs underground turn 1 strikes turn 2.");
pchar Toxic_desc[] = _("Badly poisons the target.");
pchar Confusion_desc[] = _("10% chance to confuse the target.");
pchar Psychic_desc[] = _("10% chance to lower the target‘s Sp. Def by 1.");
pchar Hypnosis_desc[] = _("Puts the target to sleep.");
pchar Meditate_desc[] = _("Raises the user‘s Attack by 1.");
pchar Agility_desc[] = _("Raises the user‘s Speed by 2.");
pchar Quick_Attack_desc[] = _("Usually goes first.");
pchar Rage_desc[] = _("Raises the user‘s Attack by 1 if hit during use.");
pchar Teleport_desc[] = _("Flee from wild Pokemon battles.");
pchar Night_Shade_desc[] = _("Does damage equal to the user‘s level.");
pchar Mimic_desc[] = _("The last move the target used replaces this one.");
pchar Screech_desc[] = _("Lowers the target‘s Defense by 2.");
pchar Double_Team_desc[] = _("Raises the user‘s evasiveness by 1.");
pchar Recover_desc[] = _("Heals the user by 50% of its max HP.");
pchar Harden_desc[] = _("Raises the user‘s Defense by 1.");
pchar Minimize_desc[] = _("Raises the user‘s evasiveness by 2.");
pchar Smokescreen_desc[] = _("Lowers the target‘s accuracy by 1.");
pchar Confuse_Ray_desc[] = _("Confuses the target.");
pchar Withdraw_desc[] = _("Raises the user‘s Defense by 1.");
pchar Defense_Curl_desc[] = _("Raises the user‘s Defense by 1.");
pchar Barrier_desc[] = _("Raises the user‘s Defense by 2.");
pchar Light_Screen_desc[] = _("For 5 turns special damage to allies is halved.");
pchar Haze_desc[] = _("Eliminates all stat changes.");
pchar Reflect_desc[] = _("For 5 turns physical damage to allies is halved.");
pchar Focus_Energy_desc[] = _("Raises the user‘s critical hit ratio by 2.");
pchar Bide_desc[] = _("Waits 2 turns- deals double the damage taken.");
pchar Metronome_desc[] = _("Picks a random move.");
pchar Mirror_Move_desc[] = _("User uses the target‘s last used move against it.");
pchar Self_Destruct_desc[] = _("Hits adjacent Pokemon. The user faints.");
pchar Egg_Bomb_desc[] = _("No additional effect.");
pchar Lick_desc[] = _("30% chance to paralyze the target.");
pchar Smog_desc[] = _("40% chance to poison the target.");
pchar Sludge_desc[] = _("30% chance to poison the target.");
pchar Bone_Club_desc[] = _("10% chance to flinch the target.");
pchar Fire_Blast_desc[] = _("10% chance to burn the target.");
pchar Waterfall_desc[] = _("20% chance to flinch the target.");
pchar Clamp_desc[] = _("Traps and damages the target for 4-5 turns.");
pchar Swift_desc[] = _("This move does not check accuracy. Hits foes.");
pchar Skull_Bash_desc[] = _("Raises user‘s Defense by 1 on turn 1. Hits turn 2.");
pchar Spike_Cannon_desc[] = _("Hits 2-5 times in one turn.");
pchar Constrict_desc[] = _("10% chance to lower the target‘s Speed by 1.");
pchar Amnesia_desc[] = _("Raises the user‘s Sp. Def by 2.");
pchar Kinesis_desc[] = _("Lowers the target‘s accuracy by 1.");
pchar Soft_Boiled_desc[] = _("Heals the user by 50% of its max HP.");
pchar High_Jump_Kick_desc[] = _("User is hurt by 50% of its max HP if it misses.");
pchar Glare_desc[] = _("Paralyzes the target.");
pchar Dream_Eater_desc[] = _("User gains 1/2 HP inflicted. Sleeping target only.");
pchar Poison_Gas_desc[] = _("Poisons the foe(s).");
pchar Barrage_desc[] = _("Hits 2-5 times in one turn.");
pchar Leech_Life_desc[] = _("User recovers 50% of the damage dealt.");
pchar Lovely_Kiss_desc[] = _("Puts the target to sleep.");
pchar Sky_Attack_desc[] = _("Charges then hits turn 2. 30% flinch. High crit.");
pchar Transform_desc[] = _("Copies target‘s stats moves types and Ability.");
pchar Bubble_desc[] = _("10% chance to lower the foe(s) Speed by 1.");
pchar Dizzy_Punch_desc[] = _("20% chance to confuse the target.");
pchar Spore_desc[] = _("Puts the target to sleep.");
pchar Flash_desc[] = _("Lowers the target‘s accuracy by 1.");
pchar Psywave_desc[] = _("Random damage equal to 0.5x-1.5x user‘s level.");
pchar Splash_desc[] = _("Does nothing (but we still love it).");
pchar Acid_Armor_desc[] = _("Raises the user‘s Defense by 2.");
pchar Crabhammer_desc[] = _("High critical hit ratio.");
pchar Explosion_desc[] = _("Hits adjacent Pokemon. The user faints.");
pchar Fury_Swipes_desc[] = _("Hits 2-5 times in one turn.");
pchar Bonemerang_desc[] = _("Hits 2 times in one turn.");
pchar Rest_desc[] = _("User sleeps 2 turns and restores HP and status.");
pchar Rock_Slide_desc[] = _("30% chance to flinch the foe(s).");
pchar Hyper_Fang_desc[] = _("10% chance to flinch the target.");
pchar Sharpen_desc[] = _("Raises the user‘s Attack by 1.");
pchar Conversion_desc[] = _("Changes user‘s type to match its first move.");
pchar Tri_Attack_desc[] = _("20% chance to paralyze or burn or freeze target.");
pchar Super_Fang_desc[] = _("Does damage equal to 1/2 target‘s current HP.");
pchar Slash_desc[] = _("High critical hit ratio.");
pchar Substitute_desc[] = _("User takes 1/4 its max HP to put in a Substitute.");
pchar Struggle_desc[] = _("User loses 25% of its max HP as recoil.");
pchar Sketch_desc[] = _("Permanently copies the last move target used.");
pchar Triple_Kick_desc[] = _("Hits 3 times. Each hit can miss but power rises.");
pchar Thief_desc[] = _("If the user has no item it steals the target‘s.");
pchar Spider_Web_desc[] = _("The target cannot switch out.");
pchar Mind_Reader_desc[] = _("User‘s next move will not miss the target.");
pchar Nightmare_desc[] = _("A sleeping target is hurt by 1/4 max HP per turn.");
pchar Flame_Wheel_desc[] = _("10% chance to burn the target. Thaws user.");
pchar Snore_desc[] = _("User must be asleep. 30% chance to flinch target.");
pchar Curse_desc[] = _("Curses if Ghost else +1 Atk +1 Def -1 Spe.");
pchar Flail_desc[] = _("More power the less HP the user has left.");
pchar Conversion_2_desc[] = _("Changes user‘s type to resist target‘s last move.");
pchar Aeroblast_desc[] = _("High critical hit ratio.");
pchar Cotton_Spore_desc[] = _("Lowers the target‘s Speed by 2.");
pchar Reversal_desc[] = _("More power the less HP the user has left.");
pchar Spite_desc[] = _("Lowers the PP of the target‘s last move by 4.");
pchar Powder_Snow_desc[] = _("10% chance to freeze the foe(s).");
pchar Protect_desc[] = _("Prevents moves from affecting the user this turn.");
pchar Mach_Punch_desc[] = _("Usually goes first.");
pchar Scary_Face_desc[] = _("Lowers the target‘s Speed by 2.");
pchar Feint_Attack_desc[] = _("This move does not check accuracy.");
pchar Sweet_Kiss_desc[] = _("Confuses the target.");
pchar Belly_Drum_desc[] = _("User loses 50% max HP. Maximizes Attack.");
pchar Sludge_Bomb_desc[] = _("30% chance to poison the target.");
pchar Mud_Slap_desc[] = _("100% chance to lower the target‘s accuracy by 1.");
pchar Octazooka_desc[] = _("50% chance to lower the target‘s accuracy by 1.");
pchar Spikes_desc[] = _("Hurts grounded foes on switch-in. Max 3 layers.");
pchar Zap_Cannon_desc[] = _("100% chance to paralyze the target.");
pchar Foresight_desc[] = _("Fighting Normal hit Ghost. Evasiveness ignored.");
pchar Destiny_Bond_desc[] = _("If an opponent knocks out the user it also faints.");
pchar Perish_Song_desc[] = _("All active Pokemon will faint in 3 turns.");
pchar Icy_Wind_desc[] = _("100% chance to lower the foe(s) Speed by 1.");
pchar Detect_desc[] = _("Prevents moves from affecting the user this turn.");
pchar Bone_Rush_desc[] = _("Hits 2-5 times in one turn.");
pchar Lock_On_desc[] = _("User‘s next move will not miss the target.");
pchar Outrage_desc[] = _("Lasts 2-3 turns. Confuses the user afterwards.");
pchar Sandstorm_desc[] = _("For 5 turns a sandstorm rages.");
pchar Giga_Drain_desc[] = _("User recovers 50% of the damage dealt.");
pchar Endure_desc[] = _("The user survives the next hit with at least 1 HP.");
pchar Charm_desc[] = _("Lowers the target‘s Attack by 2.");
pchar Rollout_desc[] = _("Power doubles with each hit. Repeats for 5 turns.");
pchar False_Swipe_desc[] = _("Always leaves the target with at least 1 HP.");
pchar Swagger_desc[] = _("Raises the target‘s Attack by 2 and confuses it.");
pchar Milk_Drink_desc[] = _("Heals the user by 50% of its max HP.");
pchar Spark_desc[] = _("30% chance to paralyze the target.");
pchar Fury_Cutter_desc[] = _("Power doubles with each hit up to 160.");
pchar Steel_Wing_desc[] = _("10% chance to raise the user‘s Defense by 1.");
pchar Mean_Look_desc[] = _("The target cannot switch out.");
pchar Attract_desc[] = _("A target of the opposite gender gets infatuated.");
pchar Sleep_Talk_desc[] = _("User must be asleep. Uses another known move.");
pchar Heal_Bell_desc[] = _("Cures the user‘s party of all status conditions.");
pchar Return_desc[] = _("Max 102 power at maximum Happiness.");
pchar Present_desc[] = _("40 80 120 power or heals target by 1/4 max HP.");
pchar Frustration_desc[] = _("Max 102 power at minimum Happiness.");
pchar Safeguard_desc[] = _("For 5 turns protects user‘s party from status.");
pchar Pain_Split_desc[] = _("Shares HP of user and target equally.");
pchar Sacred_Fire_desc[] = _("50% chance to burn the target. Thaws user.");
pchar Magnitude_desc[] = _("Hits adjacent Pokemon. Power varies- 2x on Dig.");
pchar Dynamic_Punch_desc[] = _("100% chance to confuse the target.");
pchar Megahorn_desc[] = _("No additional effect.");
pchar Dragon_Breath_desc[] = _("30% chance to paralyze the target.");
pchar Baton_Pass_desc[] = _("User switches passing stat changes and more.");
pchar Encore_desc[] = _("The target repeats its last move for 3 turns.");
pchar Pursuit_desc[] = _("Power doubles if a foe is switching out.");
pchar Rapid_Spin_desc[] = _("Frees user from hazards/partial trap/Leech Seed.");
pchar Sweet_Scent_desc[] = _("Lowers the foe(s) evasion by 2.");
pchar Iron_Tail_desc[] = _("30% chance to lower the target‘s Defense by 1.");
pchar Metal_Claw_desc[] = _("10% chance to raise the user‘s Attack by 1.");
pchar Vital_Throw_desc[] = _("This move does not check accuracy. Goes last.");
pchar Morning_Sun_desc[] = _("Heals the user by a weather-dependent amount.");
pchar Synthesis_desc[] = _("Heals the user by a weather-dependent amount.");
pchar Moonlight_desc[] = _("Heals the user by a weather-dependent amount.");
pchar Hidden_Power_desc[] = _("Varies in type based on the user‘s IVs.");
pchar Cross_Chop_desc[] = _("High critical hit ratio.");
pchar Twister_desc[] = _("20% chance to flinch the foe(s).");
pchar Rain_Dance_desc[] = _("For 5 turns heavy rain powers Water moves.");
pchar Sunny_Day_desc[] = _("For 5 turns intense sunlight powers Fire moves.");
pchar Crunch_desc[] = _("20% chance to lower the target‘s Defense by 1.");
pchar Mirror_Coat_desc[] = _("If hit by special attack returns double damage.");
pchar Psych_Up_desc[] = _("Copies the target‘s current stat stages.");
pchar Extreme_Speed_desc[] = _("Nearly always goes first.");
pchar Ancient_Power_desc[] = _("10% chance to raise all stats by 1 (not acc/eva).");
pchar Shadow_Ball_desc[] = _("20% chance to lower the target‘s Sp. Def by 1.");
pchar Future_Sight_desc[] = _("Hits two turns after being used.");
pchar Rock_Smash_desc[] = _("50% chance to lower the target‘s Defense by 1.");
pchar Whirlpool_desc[] = _("Traps and damages the target for 4-5 turns.");
pchar Beat_Up_desc[] = _("All healthy allies aid in damaging the target.");
pchar Fake_Out_desc[] = _("Hits first. First turn out only. 100% flinch chance.");
pchar Uproar_desc[] = _("Lasts 3 turns. Active Pokemon cannot fall asleep.");
pchar Stockpile_desc[] = _("Raises user‘s Defense Sp. Def by 1. Max 3 uses.");
pchar Spit_Up_desc[] = _("More power with more uses of Stockpile.");
pchar Swallow_desc[] = _("Heals the user based on uses of Stockpile.");
pchar Heat_Wave_desc[] = _("10% chance to burn the foe(s).");
pchar Hail_desc[] = _("For 5 turns hail crashes down.");
pchar Torment_desc[] = _("Target can‘t select the same move twice in a row.");
pchar Flatter_desc[] = _("Raises the target‘s Sp. Atk by 1 and confuses it.");
pchar Will_O_Wisp_desc[] = _("Burns the target.");
pchar Memento_desc[] = _("Lowers target‘s Attack Sp. Atk by 2. User faints.");
pchar Facade_desc[] = _("Power doubles if user is burn/poison/paralyzed.");
pchar Focus_Punch_desc[] = _("Fails if the user takes damage before it hits.");
pchar Smelling_Salts_desc[] = _("Power doubles if target is paralyzed and cures it.");
pchar Follow_Me_desc[] = _("The foes‘ moves target the user on the turn used.");
pchar Nature_Power_desc[] = _("Attack depends on terrain (default Tri Attack).");
pchar Charge_desc[] = _("Boosts next Electric move and user‘s Sp. Def by 1.");
pchar Taunt_desc[] = _("For 3 turns the target can‘t use status moves.");
pchar Helping_Hand_desc[] = _("One adjacent ally‘s move power is 1.5x this turn.");
pchar Trick_desc[] = _("User switches its held item with the target‘s.");
pchar Role_Play_desc[] = _("User replaces its Ability with the target‘s.");
pchar Wish_desc[] = _("Next turn 50% of the user‘s max HP is restored.");
pchar Assist_desc[] = _("Uses a random move known by a team member.");
pchar Ingrain_desc[] = _("User recovers 1/16 max HP per turn. Traps user.");
pchar Superpower_desc[] = _("Lowers the user‘s Attack and Defense by 1.");
pchar Magic_Coat_desc[] = _("Bounces back certain non-damaging moves.");
pchar Recycle_desc[] = _("Restores the item the user last used.");
pchar Revenge_desc[] = _("Power doubles if user is damaged by the target.");
pchar Brick_Break_desc[] = _("Destroys screens unless the target is immune.");
pchar Yawn_desc[] = _("Puts the target to sleep after 1 turn.");
pchar Knock_Off_desc[] = _("1.5x damage if foe holds an item. Removes item.");
pchar Endeavor_desc[] = _("Lowers the target‘s HP to the user‘s HP.");
pchar Eruption_desc[] = _("Less power as user‘s HP decreases. Hits foe(s).");
pchar Skill_Swap_desc[] = _("The user and the target trade Abilities.");
pchar Imprison_desc[] = _("No foe can use any move known by the user.");
pchar Refresh_desc[] = _("User cures its burn poison or paralysis.");
pchar Grudge_desc[] = _("If the user faints the attack used loses all its PP.");
pchar Snatch_desc[] = _("User steals certain support moves to use itself.");
pchar Secret_Power_desc[] = _("Effect varies with terrain, 30% paralysis chance");
pchar Dive_desc[] = _("Dives underwater turn 1 strikes turn 2.");
pchar Arm_Thrust_desc[] = _("Hits 2-5 times in one turn.");
pchar Camouflage_desc[] = _("Changes user‘s type by terrain (default Normal).");
pchar Tail_Glow_desc[] = _("Raises the user‘s Sp. Atk by 3.");
pchar Luster_Purge_desc[] = _("50% chance to lower the target‘s Sp. Def by 1.");
pchar Mist_Ball_desc[] = _("50% chance to lower the target‘s Sp. Atk by 1.");
pchar Feather_Dance_desc[] = _("Lowers the target‘s Attack by 2.");
pchar Teeter_Dance_desc[] = _("Confuses adjacent Pokemon.");
pchar Blaze_Kick_desc[] = _("High critical hit ratio. 10% chance to burn.");
pchar Mud_Sport_desc[] = _("For 5 turns Electric-type attacks have 1/3 power.");
pchar Ice_Ball_desc[] = _("Power doubles with each hit. Repeats for 5 turns.");
pchar Needle_Arm_desc[] = _("30% chance to flinch the target.");
pchar Slack_Off_desc[] = _("Heals the user by 50% of its max HP.");
pchar Hyper_Voice_desc[] = _("No additional effect. Hits adjacent foes.");
pchar Poison_Fang_desc[] = _("50% chance to badly poison the target.");
pchar Crush_Claw_desc[] = _("50% chance to lower the target‘s Defense by 1.");
pchar Blast_Burn_desc[] = _("User cannot move next turn.");
pchar Hydro_Cannon_desc[] = _("User cannot move next turn.");
pchar Meteor_Mash_desc[] = _("20% chance to raise the user‘s Attack by 1.");
pchar Astonish_desc[] = _("30% chance to flinch the target.");
pchar Weather_Ball_desc[] = _("Power doubles and type varies in each weather.");
pchar Aromatherapy_desc[] = _("Cures the user‘s party of all status conditions.");
pchar Fake_Tears_desc[] = _("Lowers the target‘s Sp. Def by 2.");
pchar Air_Cutter_desc[] = _("High critical hit ratio. Hits adjacent foes.");
pchar Overheat_desc[] = _("Lowers the user‘s Sp. Atk by 2.");
pchar Odor_Sleuth_desc[] = _("Fighting Normal hit Ghost. Evasiveness ignored.");
pchar Rock_Tomb_desc[] = _("100% chance to lower the target‘s Speed by 1.");
pchar Silver_Wind_desc[] = _("10% chance to raise all stats by 1 (not acc/eva).");
pchar Metal_Sound_desc[] = _("Lowers the target‘s Sp. Def by 2.");
pchar Grass_Whistle_desc[] = _("Puts the target to sleep.");
pchar Tickle_desc[] = _("Lowers the target‘s Attack and Defense by 1.");
pchar Cosmic_Power_desc[] = _("Raises the user‘s Defense and Sp. Def by 1.");
pchar Water_Spout_desc[] = _("Less power as user‘s HP decreases. Hits foe(s).");
pchar Signal_Beam_desc[] = _("10% chance to confuse the target.");
pchar Shadow_Punch_desc[] = _("This move does not check accuracy.");
pchar Extrasensory_desc[] = _("10% chance to flinch the target.");
pchar Sky_Uppercut_desc[] = _("Can hit Pokemon using Bounce Fly or Sky Drop.");
pchar Sand_Tomb_desc[] = _("Traps and damages the target for 4-5 turns.");
pchar Sheer_Cold_desc[] = _("OHKOs non-Ice targets. Fails if user‘s lower level.");
pchar Muddy_Water_desc[] = _("30% chance to lower the foe(s) accuracy by 1.");
pchar Bullet_Seed_desc[] = _("Hits 2-5 times in one turn.");
pchar Aerial_Ace_desc[] = _("This move does not check accuracy.");
pchar Icicle_Spear_desc[] = _("Hits 2-5 times in one turn.");
pchar Iron_Defense_desc[] = _("Raises the user‘s Defense by 2.");
pchar Block_desc[] = _("The target cannot switch out.");
pchar Howl_desc[] = _("Raises the user‘s Attack by 1.");
pchar Dragon_Claw_desc[] = _("No additional effect.");
pchar Frenzy_Plant_desc[] = _("User cannot move next turn.");
pchar Bulk_Up_desc[] = _("Raises the user‘s Attack and Defense by 1.");
pchar Bounce_desc[] = _("Bounces turn 1. Hits turn 2. 30% paralyze.");
pchar Mud_Shot_desc[] = _("100% chance to lower the target‘s Speed by 1.");
pchar Poison_Tail_desc[] = _("High critical hit ratio. 10% chance to poison.");
pchar Covet_desc[] = _("If the user has no item it steals the target‘s.");
pchar Volt_Tackle_desc[] = _("Has 33% recoil. 10% chance to paralyze target.");
pchar Magical_Leaf_desc[] = _("This move does not check accuracy.");
pchar Water_Sport_desc[] = _("For 5 turns Fire-type attacks have 1/3 power.");
pchar Calm_Mind_desc[] = _("Raises the user‘s Sp. Atk and Sp. Def by 1.");
pchar Leaf_Blade_desc[] = _("High critical hit ratio.");
pchar Dragon_Dance_desc[] = _("Raises the user‘s Attack and Speed by 1.");
pchar Rock_Blast_desc[] = _("Hits 2-5 times in one turn.");
pchar Shock_Wave_desc[] = _("This move does not check accuracy.");
pchar Water_Pulse_desc[] = _("20% chance to confuse the target.");
pchar Doom_Desire_desc[] = _("Hits two turns after being used.");
pchar Psycho_Boost_desc[] = _("Lowers the user‘s Sp. Atk by 2.");
pchar Roost_desc[] = _("Heals 50% HP. Flying-type removed ‘til turn ends.");
pchar Gravity_desc[] = _("For 5 turns negates all Ground immunities.");
pchar Miracle_Eye_desc[] = _("Psychic hits Dark. Evasiveness ignored.");
pchar Wake_Up_Slap_desc[] = _("Power doubles if target is asleep and wakes it.");
pchar Hammer_Arm_desc[] = _("Lowers the user‘s Speed by 1.");
pchar Gyro_Ball_desc[] = _("More power the slower the user than the target.");
pchar Healing_Wish_desc[] = _("User faints. Replacement is fully healed.");
pchar Brine_desc[] = _("Power doubles if the target‘s HP is 50% or less.");
pchar Natural_Gift_desc[] = _("Power and type depends on the user‘s Berry.");
pchar Feint_desc[] = _("Nullifies Detect Protect and Quick/Wide Guard.");
pchar Pluck_desc[] = _("User steals and eats the target‘s Berry.");
pchar Tailwind_desc[] = _("For 4 turns allies‘ Speed is doubled.");
pchar Acupressure_desc[] = _("Raises a random stat of the user or an ally by 2.");
pchar Metal_Burst_desc[] = _("If hit by an attack returns 1.5x damage.");
pchar U_turn_desc[] = _("User switches out after damaging the target.");
pchar Close_Combat_desc[] = _("Lowers the user‘s Defense and Sp. Def by 1.");
pchar Payback_desc[] = _("Power doubles if the user moves after the target.");
pchar Assurance_desc[] = _("Power doubles if target was damaged this turn.");
pchar Embargo_desc[] = _("For 5 turns the target can‘t use any items.");
pchar Fling_desc[] = _("Flings the user‘s item at the target. Power varies.");
pchar Psycho_Shift_desc[] = _("Transfers the user‘s status ailment to the target.");
pchar Trump_Card_desc[] = _("More power the fewer PP this move has left.");
pchar Heal_Block_desc[] = _("For 5 turns the foe(s) is prevented from healing.");
pchar Wring_Out_desc[] = _("More power the more HP the target has left.");
pchar Power_Trick_desc[] = _("Switches user‘s Attack and Defense stats.");
pchar Gastro_Acid_desc[] = _("Nullifies the target‘s Ability.");
pchar Lucky_Chant_desc[] = _("For 5 turns shields user‘s party from critical hits.");
pchar Me_First_desc[] = _("Copies a foe at 1.5x power. User must be faster.");
pchar Copycat_desc[] = _("Uses the last move used in the battle.");
pchar Power_Swap_desc[] = _("Swaps Attack and Sp. Atk stat stages with target.");
pchar Guard_Swap_desc[] = _("Swaps Defense and Sp. Def changes with target.");
pchar Punishment_desc[] = _("60 power +20 for each of the target‘s stat boosts.");
pchar Last_Resort_desc[] = _("Fails unless each known move has been used.");
pchar Worry_Seed_desc[] = _("The target‘s Ability becomes Insomnia.");
pchar Sucker_Punch_desc[] = _("Usually goes first. Fails if target is not attacking.");
pchar Toxic_Spikes_desc[] = _("Poisons grounded foes on switch-in. Max 2 layers.");
pchar Heart_Swap_desc[] = _("Swaps all stat changes with target.");
pchar Aqua_Ring_desc[] = _("User recovers 1/16 max HP per turn.");
pchar Magnet_Rise_desc[] = _("For 5 turns the user is immune to Ground moves.");
pchar Flare_Blitz_desc[] = _("Has 33% recoil. 10% chance to burn. Thaws user.");
pchar Force_Palm_desc[] = _("30% chance to paralyze the target.");
pchar Aura_Sphere_desc[] = _("This move does not check accuracy.");
pchar Rock_Polish_desc[] = _("Raises the user‘s Speed by 2.");
pchar Poison_Jab_desc[] = _("30% chance to poison the target.");
pchar Dark_Pulse_desc[] = _("20% chance to flinch the target.");
pchar Night_Slash_desc[] = _("High critical hit ratio.");
pchar Aqua_Tail_desc[] = _("No additional effect.");
pchar Seed_Bomb_desc[] = _("No additional effect.");
pchar Air_Slash_desc[] = _("30% chance to flinch the target.");
pchar X_Scissor_desc[] = _("No additional effect.");
pchar Bug_Buzz_desc[] = _("10% chance to lower the target‘s Sp. Def. by 1.");
pchar Dragon_Pulse_desc[] = _("No additional effect.");
pchar Dragon_Rush_desc[] = _("20% chance to flinch the target.");
pchar Power_Gem_desc[] = _("No additional effect.");
pchar Drain_Punch_desc[] = _("User recovers 50% of the damage dealt.");
pchar Vacuum_Wave_desc[] = _("Usually goes first.");
pchar Focus_Blast_desc[] = _("10% chance to lower the target‘s Sp. Def by 1.");
pchar Energy_Ball_desc[] = _("10% chance to lower the target‘s Sp. Def. by 1.");
pchar Brave_Bird_desc[] = _("Has 33% recoil.");
pchar Earth_Power_desc[] = _("10% chance to lower the target‘s Sp. Def. by 1.");
pchar Switcheroo_desc[] = _("User switches its held item with the target‘s.");
pchar Giga_Impact_desc[] = _("User cannot move next turn.");
pchar Nasty_Plot_desc[] = _("Raises the user‘s Sp. Atk by 2.");
pchar Bullet_Punch_desc[] = _("Usually goes first.");
pchar Avalanche_desc[] = _("Power doubles if user is damaged by the target.");
pchar Ice_Shard_desc[] = _("Usually goes first.");
pchar Shadow_Claw_desc[] = _("High critical hit ratio.");
pchar Thunder_Fang_desc[] = _("10% chance to paralyze. 10% chance to flinch.");
pchar Ice_Fang_desc[] = _("10% chance to freeze. 10% chance to flinch.");
pchar Fire_Fang_desc[] = _("10% chance to burn. 10% chance to flinch.");
pchar Shadow_Sneak_desc[] = _("Usually goes first.");
pchar Mud_Bomb_desc[] = _("30% chance to lower the target‘s accuracy by 1.");
pchar Psycho_Cut_desc[] = _("High critical hit ratio.");
pchar Zen_Headbutt_desc[] = _("20% chance to flinch the target.");
pchar Mirror_Shot_desc[] = _("30% chance to lower the target‘s accuracy by 1.");
pchar Flash_Cannon_desc[] = _("10% chance to lower the target‘s Sp. Def by 1.");
pchar Rock_Climb_desc[] = _("20% chance to confuse the target.");
pchar Defog_desc[] = _("-1 evasion- clears user and target side‘s hazards.");
pchar Trick_Room_desc[] = _("For 5 turns slower Pokemon move first.");
pchar Draco_Meteor_desc[] = _("Lowers the user‘s Sp. Atk by 2.");
pchar Discharge_desc[] = _("30% chance to paralyze adjacent Pokemon.");
pchar Lava_Plume_desc[] = _("30% chance to burn adjacent Pokemon.");
pchar Leaf_Storm_desc[] = _("Lowers the user‘s Sp. Atk by 2.");
pchar Power_Whip_desc[] = _("No additional effect.");
pchar Rock_Wrecker_desc[] = _("User cannot move next turn.");
pchar Cross_Poison_desc[] = _("High critical hit ratio. 10% chance to poison.");
pchar Gunk_Shot_desc[] = _("30% chance to poison the target.");
pchar Iron_Head_desc[] = _("30% chance to flinch the target.");
pchar Magnet_Bomb_desc[] = _("This move does not check accuracy.");
pchar Stone_Edge_desc[] = _("High critical hit ratio.");
pchar Captivate_desc[] = _("Lowers the foe(s) Sp. Atk by 2 if opposite gender.");
pchar Stealth_Rock_desc[] = _("Hurts foes on switch-in. Factors Rock weakness.");
pchar Grass_Knot_desc[] = _("More power the heavier the target.");
pchar Chatter_desc[] = _("100% chance to confuse the target.");
pchar Judgment_desc[] = _("Type varies based on the held Plate.");
pchar Bug_Bite_desc[] = _("User steals and eats the target‘s Berry.");
pchar Charge_Beam_desc[] = _("70% chance to raise the user‘s Sp. Atk by 1.");
pchar Wood_Hammer_desc[] = _("Has 33% recoil.");
pchar Aqua_Jet_desc[] = _("Usually goes first.");
pchar Attack_Order_desc[] = _("High critical hit ratio.");
pchar Defend_Order_desc[] = _("Raises the user‘s Defense and Sp. Def by 1.");
pchar Heal_Order_desc[] = _("Heals the user by 50% of its max HP.");
pchar Head_Smash_desc[] = _("Has 1/2 recoil.");
pchar Double_Hit_desc[] = _("Hits 2 times in one turn.");
pchar Roar_of_Time_desc[] = _("User cannot move next turn.");
pchar Spacial_Rend_desc[] = _("High critical hit ratio.");
pchar Lunar_Dance_desc[] = _("User faints. Replacement is fully healed with PP.");
pchar Crush_Grip_desc[] = _("More power the more HP the target has left.");
pchar Magma_Storm_desc[] = _("Traps and damages the target for 4-5 turns.");
pchar Dark_Void_desc[] = _("Puts the foe(s) to sleep.");
pchar Seed_Flare_desc[] = _("40% chance to lower the target‘s Sp. Def by 2.");
pchar Ominous_Wind_desc[] = _("10% chance to raise all stats by 1 (not acc/eva).");
pchar Shadow_Force_desc[] = _("Disappears turn 1. Hits turn 2. Breaks protection.");
pchar Hone_Claws_desc[] = _("Raises the user‘s Attack and accuracy by 1.");
pchar Wide_Guard_desc[] = _("Protects allies from multi-target moves this turn.");
pchar Guard_Split_desc[] = _("Averages Defense and Sp. Def stats with target.");
pchar Power_Split_desc[] = _("Averages Attack and Sp. Atk stats with target.");
pchar Wonder_Room_desc[] = _("For 5 turns all Defense and Sp. Def stats switch.");
pchar Psyshock_desc[] = _("Damages target based on Defense not Sp. Def.");
pchar Venoshock_desc[] = _("Power doubles if the target is poisoned.");
pchar Autotomize_desc[] = _("Raises the user‘s Speed by 2- user loses 100 kg.");
pchar Rage_Powder_desc[] = _("The foes‘ moves target the user on the turn used.");
pchar Telekinesis_desc[] = _("For 3 turns target floats but moves can‘t miss it.");
pchar Magic_Room_desc[] = _("For 5 turns all held items have no effect.");
pchar Smack_Down_desc[] = _("Removes the target‘s Ground immunity.");
pchar Storm_Throw_desc[] = _("Always results in a critical hit.");
pchar Flame_Burst_desc[] = _("Damages Pokemon next to the target as well.");
pchar Sludge_Wave_desc[] = _("10% chance to poison adjacent Pokemon.");
pchar Quiver_Dance_desc[] = _("Raises the user‘s Sp. Atk Sp. Def Speed by 1.");
pchar Heavy_Slam_desc[] = _("More power the heavier the user than the target.");
pchar Synchronoise_desc[] = _("Hits adjacent Pokemon sharing the user‘s type.");
pchar Electro_Ball_desc[] = _("More power the faster the user is than the target.");
pchar Soak_desc[] = _("Changes the target‘s type to Water.");
pchar Flame_Charge_desc[] = _("100% chance to raise the user‘s Speed by 1.");
pchar Coil_desc[] = _("Raises user‘s Attack Defense and accuracy by 1.");
pchar Low_Sweep_desc[] = _("100% chance to lower the target‘s Speed by 1.");
pchar Acid_Spray_desc[] = _("100% chance to lower the target‘s Sp. Def by 2.");
pchar Foul_Play_desc[] = _("Uses target‘s Attack stat in damage calculation.");
pchar Simple_Beam_desc[] = _("The target‘s Ability becomes Simple.");
pchar Entrainment_desc[] = _("The target‘s Ability changes to match the user‘s.");
pchar After_You_desc[] = _("The target makes its move right after the user.");
pchar Round_desc[] = _("Power doubles if others used Round this turn.");
pchar Echoed_Voice_desc[] = _("Power increases when used on consecutive turns.");
pchar Chip_Away_desc[] = _("Ignores the target‘s stat stage changes.");
pchar Clear_Smog_desc[] = _("Eliminates the target‘s stat changes.");
pchar Stored_Power_desc[] = _(" + 20 power for each of the user‘s stat boosts.");
pchar Quick_Guard_desc[] = _("Protects allies from priority attacks this turn.");
pchar Ally_Switch_desc[] = _("The user swaps positions with its ally.");
pchar Scald_desc[] = _("30% chance to burn the target. Thaws target.");
pchar Shell_Smash_desc[] = _("Lowers Def SpD by 1- raises Atk SpA Spe by 2.");
pchar Heal_Pulse_desc[] = _("Heals the target by 50% of its max HP.");
pchar Hex_desc[] = _("Power doubles if the target has a status ailment.");
pchar Sky_Drop_desc[] = _("User and foe fly up turn 1. Damages on turn 2.");
pchar Shift_Gear_desc[] = _("Raises the user‘s Speed by 2 and Attack by 1.");
pchar Circle_Throw_desc[] = _("Forces the target to switch to a random ally.");
pchar Incinerate_desc[] = _("Destroys the foe(s) Berry/Gem.");
pchar Quash_desc[] = _("Forces the target to move last this turn.");
pchar Acrobatics_desc[] = _("Power doubles if the user has no held item.");
pchar Reflect_Type_desc[] = _("User becomes the same type as the target.");
pchar Retaliate_desc[] = _("Power doubles if an ally fainted last turn.");
pchar Final_Gambit_desc[] = _("Does damage equal to the user‘s HP. User faints.");
pchar Bestow_desc[] = _("User passes its held item to the target.");
pchar Inferno_desc[] = _("100% chance to burn the target.");
pchar Water_Pledge_desc[] = _("Use with Grass or Fire Pledge for added effect.");
pchar Fire_Pledge_desc[] = _("Use with Grass or Water Pledge for added effect.");
pchar Grass_Pledge_desc[] = _("Use with Fire or Water Pledge for added effect.");
pchar Volt_Switch_desc[] = _("User switches out after damaging the target.");
pchar Struggle_Bug_desc[] = _("100% chance to lower the foe(s) Sp. Atk by 1.");
pchar Bulldoze_desc[] = _("100% chance to lower adjacent Pkmn Speed by 1.");
pchar Frost_Breath_desc[] = _("Always results in a critical hit.");
pchar Dragon_Tail_desc[] = _("Forces the target to switch to a random ally.");
pchar Work_Up_desc[] = _("Raises the user‘s Attack and Sp. Atk by 1.");
pchar Electroweb_desc[] = _("100% chance to lower the foe(s) Speed by 1.");
pchar Wild_Charge_desc[] = _("Has 1/4 recoil.");
pchar Drill_Run_desc[] = _("High critical hit ratio.");
pchar Dual_Chop_desc[] = _("Hits 2 times in one turn.");
pchar Heart_Stamp_desc[] = _("30% chance to flinch the target.");
pchar Horn_Leech_desc[] = _("User recovers 50% of the damage dealt.");
pchar Sacred_Sword_desc[] = _("Ignores the target‘s stat stage changes.");
pchar Razor_Shell_desc[] = _("50% chance to lower the target‘s Defense by 1.");
pchar Heat_Crash_desc[] = _("More power the heavier the user than the target.");
pchar Leaf_Tornado_desc[] = _("50% chance to lower the target‘s accuracy by 1.");
pchar Steamroller_desc[] = _("30% chance to flinch the target.");
pchar Cotton_Guard_desc[] = _("Raises the user‘s Defense by 3.");
pchar Night_Daze_desc[] = _("40% chance to lower the target‘s accuracy by 1.");
pchar Psystrike_desc[] = _("Damages target based on Defense not Sp. Def.");
pchar Tail_Slap_desc[] = _("Hits 2-5 times in one turn.");
pchar Hurricane_desc[] = _("30% chance to confuse target. Can‘t miss in rain.");
pchar Head_Charge_desc[] = _("Has 1/4 recoil.");
pchar Gear_Grind_desc[] = _("Hits 2 times in one turn.");
pchar Searing_Shot_desc[] = _("30% chance to burn adjacent Pokemon.");
pchar Techno_Blast_desc[] = _("Type varies based on the held Drive.");
pchar Relic_Song_desc[] = _("10% chance to sleep foe(s). Meloetta transforms.");
pchar Secret_Sword_desc[] = _("Damages target based on Defense not Sp. Def.");
pchar Glaciate_desc[] = _("100% chance to lower the foe(s) Speed by 1.");
pchar Bolt_Strike_desc[] = _("20% chance to paralyze the target.");
pchar Blue_Flare_desc[] = _("20% chance to burn the target.");
pchar Fiery_Dance_desc[] = _("50% chance to raise the user‘s Sp. Atk by 1.");
pchar Freeze_Shock_desc[] = _("Charges turn 1. Hits turn 2. 30% paralyze.");
pchar Ice_Burn_desc[] = _("Charges turn 1. Hits turn 2. 30% burn.");
pchar Snarl_desc[] = _("100% chance to lower the foe(s) Sp. Atk by 1.");
pchar Icicle_Crash_desc[] = _("30% chance to flinch the target.");
pchar V_create_desc[] = _("Lowers the user‘s Defense Sp. Def Speed by 1.");
pchar Fusion_Flare_desc[] = _("Power doubles if used after Fusion Bolt.");
pchar Fusion_Bolt_desc[] = _("Power doubles if used after Fusion Flare.");
pchar Flying_Press_desc[] = _("Combines Flying in its type effectiveness.");
pchar Mat_Block_desc[] = _("Protects allies from attacks. First turn out only.");
pchar Belch_desc[] = _("Cannot be selected until the user eats a Berry.");
pchar Rototiller_desc[] = _("Raises Atk Sp. Atk of grounded Grass types by 1.");
pchar Sticky_Web_desc[] = _("Lowers Speed of grounded foes by 1 on switch-in.");
pchar Fell_Stinger_desc[] = _("Raises user‘s Attack by 3 if this KOes the target.");
pchar Phantom_Force_desc[] = _("Disappears turn 1. Hits turn 2. Breaks protection.");
pchar Trick_or_Treat_desc[] = _("Adds Ghost to the target‘s type(s).");
pchar Noble_Roar_desc[] = _("Lowers the target‘s Attack and Sp. Atk by 1.");
pchar Ion_Deluge_desc[] = _("Normal moves become Electric type this turn.");
pchar Parabolic_Charge_desc[] = _("User recovers 50% of the damage dealt.");
pchar Forests_Curse_desc[] = _("Adds Grass to the target‘s type(s).");
pchar Petal_Blizzard_desc[] = _("No additional effect. Hits adjacent Pokemon.");
pchar Freeze_Dry_desc[] = _("10% chance to freeze. Super effective on Water.");
pchar Disarming_Voice_desc[] = _("This move does not check accuracy. Hits foes.");
pchar Parting_Shot_desc[] = _("Lowers target‘s Atk Sp. Atk by 1. User switches.");
pchar Topsy_Turvy_desc[] = _("Inverts the target‘s stat stages.");
pchar Draining_Kiss_desc[] = _("User recovers 75% of the damage dealt.");
pchar Crafty_Shield_desc[] = _("Protects allies from Status moves this turn.");
pchar Flower_Shield_desc[] = _("Raises Defense by 1 of all active Grass types.");
pchar Grassy_Terrain_desc[] = _("5 turns. Grounded: +Grass power+1/16 max HP.");
pchar Misty_Terrain_desc[] = _("5 turns. Can‘t status-Dragon power vs grounded.");
pchar Electrify_desc[] = _("Changes the target‘s move to Electric this turn.");
pchar Play_Rough_desc[] = _("10% chance to lower the target‘s Attack by 1.");
pchar Fairy_Wind_desc[] = _("No additional effect.");
pchar Moonblast_desc[] = _("30% chance to lower the target‘s Sp. Atk by 1.");
pchar Boomburst_desc[] = _("No additional effect. Hits adjacent Pokemon.");
pchar Fairy_Lock_desc[] = _("Prevents all Pokemon from switching next turn.");
pchar Kings_Shield_desc[] = _("Protects from attacks. Contact: lowers Atk by 2.");
pchar Play_Nice_desc[] = _("Lowers the target‘s Attack by 1.");
pchar Confide_desc[] = _("Lowers the target‘s Sp. Atk by 1.");
pchar Diamond_Storm_desc[] = _("50% chance to raise user‘s Def by 2 for each hit.");
pchar Steam_Eruption_desc[] = _("30% chance to burn the target.");
pchar Hyperspace_Hole_desc[] = _("Breaks the target‘s protection for this turn.");
pchar Water_Shuriken_desc[] = _("Hits 2-5 times in one turn.");
pchar Mystical_Fire_desc[] = _("100% chance to lower the target‘s Sp. Atk by 1.");
pchar Spiky_Shield_desc[] = _("Protects from moves. Contact: loses 1/8 max HP.");
pchar Aromatic_Mist_desc[] = _("Raises an ally‘s Sp. Def by 1.");
pchar Eerie_Impulse_desc[] = _("Lowers the target‘s Sp. Atk by 2.");
pchar Venom_Drench_desc[] = _("Lowers Atk Sp. Atk Speed of poisoned foes by 1.");
pchar Powder_desc[] = _("If using a Fire move target loses 1/4 max HP.");
pchar Geomancy_desc[] = _("Charges then raises SpA SpD Spe by 2 turn 2.");
pchar Magnetic_Flux_desc[] = _("Raises Def Sp. Def of allies with Plus/Minus by 1.");
pchar Happy_Hour_desc[] = _("No competitive use.");
pchar Electric_Terrain_desc[] = _("5 turns. Grounded: +Electric power can‘t sleep.");
pchar Dazzling_Gleam_desc[] = _("No additional effect. Hits adjacent foes.");
pchar Celebrate_desc[] = _("No competitive use. Or any use.");
pchar Baby_Doll_Eyes_desc[] = _("Lowers the target‘s Attack by 1.");
pchar Nuzzle_desc[] = _("100% chance to paralyze the target.");
pchar Hold_Back_desc[] = _("Always leaves the target with at least 1 HP.");
pchar Infestation_desc[] = _("Traps and damages the target for 4-5 turns.");
pchar Power_Up_Punch_desc[] = _("100% chance to raise the user‘s Attack by 1.");
pchar Oblivion_Wing_desc[] = _("User recovers 75% of the damage dealt.");
pchar Thousand_Arrows_desc[] = _("Grounds adjacent foes. First hit neutral on Flying.");
pchar Thousand_Waves_desc[] = _("Hits adjacent foes. Prevents them from switching.");
pchar Hold_Hands_desc[] = _("No competitive use. Or any use.");
pchar Lands_Wrath_desc[] = _("No additional effect. Hits adjacent foes.");
pchar Light_of_Ruin_desc[] = _("Has 1/2 recoil.");
pchar Origin_Pulse_desc[] = _("No additional effect. Hits adjacent foes.");
pchar Precipice_Blades_desc[] = _("No additional effect. Hits adjacent Pokemon.");
pchar Dragon_Ascent_desc[] = _("Lowers the user‘s Defense and Sp. Def by 1.");
pchar Hyperspace_Fury_desc[] = _("Hoopa-U: Lowers user‘s Def by 1- breaks protection.");
pchar Shore_Up_desc[] = _("Heals the user by a weather-dependent amount.");
pchar First_Impression_desc[] = _("Hits first. First turn out only.");
pchar Baneful_Bunker_desc[] = _("Protects from moves. Contact: poison.");
pchar Spirit_Shackle_desc[] = _("Prevents the target from switching out.");
pchar Darkest_Lariat_desc[] = _("Ignores the target‘s stat stage changes.");
pchar Sparkling_Aria_desc[] = _("The target is cured of its burn.");
pchar Ice_Hammer_desc[] = _("Lowers the user‘s Speed by 1.");
pchar Floral_Healing_desc[] = _("Heals the target by 50% of its max HP.");
pchar High_Horsepower_desc[] = _("No additional effect.");
pchar Strength_Sap_desc[] = _("User heals HP=target‘s Atk stat. Lowers Atk by 1.");
pchar Solar_Blade_desc[] = _("Charges turn 1. Hits turn 2. No charge in sunlight.");
pchar Leafage_desc[] = _("No additional effect.");
pchar Spotlight_desc[] = _("Moves redirect to the target on the turn used.");
pchar Toxic_Thread_desc[] = _("Lowers the target‘s Speed by 1 and poisons it.");
pchar Laser_Focus_desc[] = _("Next turn the user‘s attack will be a critical hit.");
pchar Gear_Up_desc[] = _("Raises Atk Sp. Atk of allies with Plus/Minus by 1.");
pchar Throat_Chop_desc[] = _("For 2 turns the target cannot use sound moves.");
pchar Pollen_Puff_desc[] = _("If the target is an ally heals 50% of its max HP.");
pchar Anchor_Shot_desc[] = _("Prevents the target from switching out.");
pchar Psychic_Terrain_desc[] = _("5 turns. Grounded: +Psychic power priority-safe.");
pchar Lunge_desc[] = _("100% chance to lower the target‘s Attack by 1.");
pchar Fire_Lash_desc[] = _("100% chance to lower the target‘s Defense by 1.");
pchar Power_Trip_desc[] = _(" + 20 power for each of the user‘s stat boosts.");
pchar Burn_Up_desc[] = _("User‘s Fire-type is removed until it switches out.");
pchar Speed_Swap_desc[] = _("Swaps Speed stat with target.");
pchar Smart_Strike_desc[] = _("This move does not check accuracy.");
pchar Purify_desc[] = _("Cures target‘s status- heals user 1/2 maxHP if so.");
pchar Revelation_Dance_desc[] = _("Type varies based on the user‘s primary type.");
pchar Core_Enforcer_desc[] = _("Nullifies the foe(s) Ability if the target moves first.");
pchar Trop_Kick_desc[] = _("100% chance to lower the target‘s Attack by 1.");
pchar Instruct_desc[] = _("The target immediately uses its last used move.");
pchar Beak_Blast_desc[] = _("Burns on contact with the user before it moves.");
pchar Clanging_Scales_desc[] = _("Lowers the user‘s Defense by 1.");
pchar Dragon_Hammer_desc[] = _("No additional effect.");
pchar Brutal_Swing_desc[] = _("No additional effect. Hits adjacent Pokemon.");
pchar Aurora_Veil_desc[] = _("For 5 turns damage to allies is halved. Hail only.");
pchar Shell_Trap_desc[] = _("User must take physical damage before moving.");
pchar Fleur_Cannon_desc[] = _("Lowers the user‘s Sp. Atk by 2.");
pchar Psychic_Fangs_desc[] = _("Destroys screens unless the target is immune.");
pchar Stomping_Tantrum_desc[] = _("Power doubles if the user‘s last move failed.");
pchar Shadow_Bone_desc[] = _("20% chance to lower the target‘s Defense by 1.");
pchar Accelerock_desc[] = _("Usually goes first.");
pchar Liquidation_desc[] = _("20% chance to lower the target‘s Defense by 1.");
pchar Prismatic_Laser_desc[] = _("User cannot move next turn.");
pchar Spectral_Thief_desc[] = _("Steals target‘s boosts before dealing damage.");
pchar Sunsteel_Strike_desc[] = _("Ignores the Abilities of other Pokemon.");
pchar Moongeist_Beam_desc[] = _("Ignores the Abilities of other Pokemon.");
pchar Tearful_Look_desc[] = _("Lowers the target‘s Attack and Sp. Atk by 1.");
pchar Zing_Zap_desc[] = _("30% chance to flinch the target.");
pchar Natures_Madness_desc[] = _("Does damage equal to 1/2 target‘s current HP.");
pchar Multi_Attack_desc[] = _("Type varies based on the held Memory.");
pchar Plasma_Fists_desc[] = _("Does damage.");

extern struct move_procs basic_proc;

struct move_data moves[] = {
    {
    /* Move NULL */
    .name = _("-"),
    .description = (pchar*)Pound_desc,
    .type = MTYPE_EGG,
    .procs = &basic_proc,
    },

    {
    /* Pound */
    .name = _("Pound"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Pound_desc,
    .pp = 35,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Karate Chop*/
    .name = _("Karate Chop"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*)Karate_Chop_desc,
    .pp = 25,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Double Slap*/
    .name = _("Double Slap"),
    .accuracy = 85,
    .base_power = 15,
    .description = (pchar*)Double_Slap_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .multi_hit = {2, 5},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Comet Punch*/
    .name = _("Comet Punch"),
    .accuracy = 85,
    .base_power = 18,
    .description = (pchar*)Comet_Punch_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .multi_hit = {2, 5},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_PUNCH,
    .procs = &basic_proc,
    },

    {
    /*Mega Punch*/
    .name = _("Mega Punch"),
    .accuracy = 85,
    .base_power = 80,
    .description = (pchar*)Mega_Punch_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_PUNCH,
    .procs = &basic_proc,
    },

    {
    /*Pay Day*/
    .name = _("Pay Day"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Pay_Day_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_damage_move = payday_ondmg,
    },

    {
    /*Fire Punch*/
    .name = _("Fire Punch"),
    .accuracy = 100,
    .base_power = 75,
    .description = (pchar*)Fire_Punch_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_PUNCH,
    .procs = &basic_proc,
    },

    {
    /*Ice Punch*/
    .name = _("Ice Punch"),
    .accuracy = 100,
    .base_power = 75,
    .description = (pchar*)Ice_Punch_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_PUNCH,
    .procs = &basic_proc,
    },

    {
    /*Thunder Punch*/
    .name = _("Thunder Punch"),
    .accuracy = 100,
    .base_power = 75,
    .description = (pchar*)Thunder_Punch_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_PUNCH,
    .procs = &basic_proc,
    },

    {
    /*Scratch*/
    .name = _("Scratch"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Scratch_desc,
    .pp = 35,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Vice Grip*/
    .name = _("Vice Grip"),
    .accuracy = 100,
    .base_power = 55,
    .description = (pchar*)Vice_Grip_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Guillotine*/
    .name = _("Guillotine"),
    .accuracy = 30,
    .description = (pchar*)Guillotine_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_OHKO,
    .procs = &basic_proc,
    .on_tryhit_move = ohko_tryhit_move,
    },

    {
    /*Razor Wind*/
    .name = _("Razor Wind"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Razor_Wind_desc,
    .pp = 10,
    .crit_ratio = 1,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_HITS_ALL,
    .procs = &basic_proc,
    .before_move = razor_wind_before_move,
    },

    {
    /*Swords Dance*/
    .name = _("Swords Dance"),
    .accuracy = 101,
    .description = (pchar*)Swords_Dance_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_DANCE,
    .procs = &user_raise_atk_2,
    },

    {
    /*Cut*/
    .name = _("Cut"),
    .accuracy = 95,
    .base_power = 50,
    .description = (pchar*)Cut_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Gust*/
    .name = _("Gust"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Gust_desc,
    .pp = 35,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_modify_move = gust_on_modify,
    },

    {
    /*Wing Attack*/
    .name = _("Wing Attack"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Wing_Attack_desc,
    .pp = 35,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Whirlwind*/
    .name = _("Whirlwind"),
    .accuracy = 101,
    .description = (pchar*)Whirlwind_desc,
    .pp = 20,
    .priority = -6,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_MIRROR | FLAG_REFLECTABLE | FLAG_TARGET | FLAG_AUTHENTIC,
    .procs = &basic_proc,
    .on_tryhit_move = whirlwind_on_tryhit_move,
    .on_effect_cb = whirlwind_on_effect_cb,
    },

    {
    /*Fly*/
    .name = _("Fly"),
    .accuracy = 95,
    .base_power = 90,
    .description = (pchar*)Fly_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_CHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_GRAVITY,
    .procs = &basic_proc,
    .before_move = fly_before_move,
    },

    {
    /*Bind*/
    .name = _("Bind"),
    .accuracy = 85,
    .base_power = 15,
    .description = (pchar*)Bind_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_effect_cb = bind_on_effect_cb,
    },

    {
    /*Slam*/
    .name = _("Slam"),
    .accuracy = 75,
    .base_power = 80,
    .description = (pchar*)Slam_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Vine Whip*/
    .name = _("Vine Whip"),
    .accuracy = 100,
    .base_power = 45,
    .description = (pchar*)Vine_Whip_desc,
    .pp = 25,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Stomp*/
    .name = _("Stomp"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Stomp_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    .on_modify_move = stomp_on_modify_move,
    },

    {
    /*Double Kick*/
    .name = _("Double Kick"),
    .accuracy = 100,
    .base_power = 30,
    .description = (pchar*)Double_Kick_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .multi_hit = {2, 2},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Mega Kick*/
    .name = _("Mega Kick"),
    .accuracy = 75,
    .base_power = 120,
    .description = (pchar*)Mega_Kick_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Jump Kick*/
    .name = _("Jump Kick"),
    .accuracy = 55,
    .base_power = 100,
    .description = (pchar*)Jump_Kick_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_GRAVITY | FLAG_TARGET,
    .procs = &basic_proc,
    .on_move_fail = jump_kick_on_move_fail,
    },

    {
    /*Rolling Kick*/
    .name = _("Rolling Kick"),
    .accuracy = 85,
    .base_power = 60,
    .description = (pchar*)Rolling_Kick_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    /*Sand Attack*/
    .name = _("Sand Attack"),
    .accuracy = 100,
    .description = (pchar*)Sand_Attack_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_acc_1,
    },

    {
    /*Headbutt*/
    .name = _("Headbutt"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Headbutt_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    /*Horn Attack*/
    .name = _("Horn Attack"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Horn_Attack_desc,
    .pp = 25,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fury Attack*/
    .name = _("Fury Attack"),
    .accuracy = 85,
    .base_power = 15,
    .description = (pchar*)Fury_Attack_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .multi_hit = {2, 5},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Horn Drill*/
    .name = _("Horn Drill"),
    .accuracy = 30,
    .description = (pchar*)Horn_Drill_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_OHKO,
    .procs = &basic_proc,
    .on_tryhit_move = ohko_tryhit_move,
    },

    {
    /*Tackle*/
    .name = _("Tackle"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Tackle_desc,
    .pp = 35,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Body Slam*/
    .name = _("Body Slam"),
    .accuracy = 100,
    .base_power = 85,
    .description = (pchar*)Body_Slam_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_modify_move = bodyslam_on_modify_move,
    },

    {
    /*Wrap*/
    .name = _("Wrap"),
    .accuracy = 90,
    .base_power = 15,
    .description = (pchar*)Wrap_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_effect_cb = bind_on_effect_cb,
    },

    {
    /*Take Down*/
    .name = _("Take Down"),
    .accuracy = 85,
    .base_power = 90,
    .description = (pchar*)Take_Down_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .recoil = 25,
    },

    {
    /*Thrash*/
    .name = _("Thrash"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Thrash_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_tryhit_move = thrash_on_tryhit_move,
    .on_move_fail = thrash_on_move_fail,
    .on_after_move = thrash_on_after_move,
    },

    /* Double edge*/
    {
    .name = _("Double-Edge"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Double_Edge_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .recoil = 25,
    },

    {
    /*Tail Whip*/
    .name = _("Tail Whip"),
    .accuracy = 100,
    .description = (pchar*)Tail_Whip_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET |  FLAG_HITS_ALL,
    .procs = &target_lower_def_1,
    },

    {
    /*Poison Sting*/
    .name = _("Poison Sting"),
    .accuracy = 100,
    .base_power = 15,
    .description = (pchar*)Poison_Sting_desc,
    .pp = 35,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &poison_30_procs,
    },

    {
    /*Twineedle*/
    .name = _("Twineedle"),
    .accuracy = 100,
    .base_power = 25,
    .description = (pchar*)Twineedle_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .multi_hit = {2, 2},
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &poison_20_procs,
    },

    {
    /*Pin Missile*/
    .name = _("Pin Missile"),
    .accuracy = 95,
    .base_power = 25,
    .description = (pchar*)Pin_Missile_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .multi_hit = {2, 5},
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Leer*/
    .name = _("Leer"),
    .accuracy = 100,
    .description = (pchar*)Leer_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_def_1,
    },

    {
    /*Bite*/
    .name = _("Bite"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Bite_desc,
    .pp = 25,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_BITE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    /*Growl*/
    .name = _("Growl"),
    .accuracy = 100,
    .description = (pchar*)Growl_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_SOUND | FLAG_AUTHENTIC | FLAG_TARGET,
    .procs = &target_lower_atk_1,
    },

    {
    /*Roar*/
    .name = _("Roar"),
    .accuracy = 101,
    .description = (pchar*)Roar_desc,
    .pp = 20,
    .priority = -6,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_TARGET,
    .procs = &basic_proc,
    .on_tryhit_move = whirlwind_on_tryhit_move,
    .on_effect_cb = whirlwind_on_effect_cb,
    },

    {
    /*Sing*/
    .name = _("Sing"),
    .accuracy = 55,
    .description = (pchar*)Sing_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_SOUND | FLAG_AUTHENTIC | FLAG_PROTECT | FLAG_TARGET,
    .procs = &sing_procs,
    },

    {
    /*Supersonic*/
    .name = _("Supersonic"),
    .accuracy = 55,
    .description = (pchar*)Supersonic_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &supersonic_procs,
    },

    {
    /*Sonic Boom*/
    .name = _("Sonic Boom"),
    .accuracy = 90,
    .description = (pchar*)Sonic_Boom_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_modify_move = sonic_boom_on_modify_move,
    },

    {
    /*Disable*/
    .name = _("Disable"),
    .accuracy = 100,
    .description = (pchar*)Disable_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_effect_cb = disable_on_effect_cb,
    },

    {
    /*Acid*/
    .name = _("Acid"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Acid_desc,
    .pp = 30,
    .category = MOVE_SPECIAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_spDef_1,
    },

    {
    /*Ember*/
    .name = _("Ember"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Ember_desc,
    .pp = 25,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &burn_10_procs,
    },

    {
    /*Flamethrower*/
    .name = _("Flamethrower"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Flamethrower_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &burn_10_procs,
	},

	{
	/*Mist*/
	.name = _("Mist"),
	.accuracy = 101,
    .description = (pchar*)Mist_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Water Gun*/
    .name = _("Water Gun"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Water_Gun_desc,
    .pp = 25,
    .category = MOVE_SPECIAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Hydro Pump*/
    .name = _("Hydro Pump"),
    .accuracy = 80,
    .base_power = 110,
    .description = (pchar*)Hydro_Pump_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Surf*/
    .name = _("Surf"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Surf_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_HITS_ALL,
    .procs = &basic_proc,
    },

    {
    /*Ice Beam*/
    .name = _("Ice Beam"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Ice_Beam_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &freeze_10_procs,
    },

    {
    /*Blizzard*/
    .name = _("Blizzard"),
    .accuracy = 70,
    .base_power = 110,
    .description = (pchar*)Blizzard_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &freeze_10_procs,
    },

    {
    /*Psybeam*/
    .name = _("Psybeam"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Psybeam_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &confuse_10_procs,
    },

    {
    /*Bubble Beam*/
    .name = _("Bubble Beam"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Bubble_Beam_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &bubble_beam_procs,
    },

    {
    /*Aurora Beam*/
    .name = _("Aurora Beam"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Aurora_Beam_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &aurora_beam_procs,
    },

    {
    /*Hyper Beam*/
    .name = _("Hyper Beam"),
    .accuracy = 90,
    .base_power = 150,
    .description = (pchar*)Hyper_Beam_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_RECHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Peck*/
    .name = _("Peck"),
    .accuracy = 100,
    .base_power = 35,
    .description = (pchar*)Peck_desc,
    .pp = 35,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Drill Peck*/
    .name = _("Drill Peck"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Drill_Peck_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Submission*/
    .name = _("Submission"),
    .accuracy = 80,
    .base_power = 80,
    .description = (pchar*)Submission_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
	.recoil = 25,
    },

    {
    /*Low Kick*/
    .name = _("Low Kick"),
    .accuracy = 100,
    .description = (pchar*)Low_Kick_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Counter*/
    .name = _("Counter"),
    .accuracy = 100,
    .description = (pchar*)Counter_desc,
    .pp = 20,
    .priority = -5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Seismic Toss*/
    .name = _("Seismic Toss"),
    .accuracy = 100,
    .description = (pchar*)Seismic_Toss_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Strength*/
    .name = _("Strength"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Strength_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Absorb*/
    .name = _("Absorb"),
    .accuracy = 100,
    .base_power = 20,
    .description = (pchar*)Absorb_desc,
    .pp = 25,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_HEAL | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .drain = 50,
    .procs = &basic_proc,
    },

    {
    /*Mega drain*/
    .name = _("Mega drain"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Mega_Drain_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_HEAL | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .drain = 50,
    .procs = &basic_proc,
    },

    {
    /*Leech Seed*/
    .name = _("Leech Seed"),
    .accuracy = 90,
    .description = (pchar*)Leech_Seed_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Growth*/
    .name = _("Growth"),
    .accuracy = 101,
    .description = (pchar*)Growth_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_ONSELF,
    .procs = &basic_proc,
    },

    {
    /*Razor Leaf*/
    .name = _("Razor Leaf"),
    .accuracy = 95,
    .base_power = 55,
    .description = (pchar*)Razor_Leaf_desc,
    .pp = 25,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Solar Beam*/
    .name = _("Solar Beam"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Solar_Beam_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .before_move = solarbeam_before_move,
    },

    {
    /*Poison Powder*/
    .name = _("Poison Powder"),
    .accuracy = 75,
    .description = (pchar*)Poison_Powder_desc,
    .pp = 35,
    .category = MOVE_STATUS,
    .type = MTYPE_POISON,
    .m_flags = FLAG_POWDER | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &poison_100_procs,
    },

    {
    /*Stun Spore*/
    .name = _("Stun Spore"),
    .accuracy = 75,
    .description = (pchar*)Stun_Spore_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_POWDER | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &paralyze_100_procs,
    },

    {
    /*Sleep Powder*/
    .name = _("Sleep Powder"),
    .accuracy = 75,
    .description = (pchar*)Sleep_Powder_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_POWDER | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &sing_procs,
    },

    {
    /*Petal Dance*/
    .name = _("Petal Dance"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Petal_Dance_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_DANCE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*String Shot*/
    .name = _("String Shot"),
    .accuracy = 95,
    .description = (pchar*)String_Shot_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_BUG,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_HITS_ALL,
    .procs = &target_lower_spd_2,
    },

    {
    /*Dragon Rage*/
    .name = _("Dragon Rage"),
    .accuracy = 100,
    .description = (pchar*)Dragon_Rage_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fire Spin*/
    .name = _("Fire Spin"),
    .accuracy = 85,
    .base_power = 35,
    .description = (pchar*)Fire_Spin_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Thunder Shock*/
    .name = _("Thunder Shock"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Thunder_Shock_desc,
    .pp = 30,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &paralyze_10_procs,
    },

    {
    /*Thunderbolt*/
    .name = _("Thunderbolt"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Thunderbolt_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &paralyze_10_procs,
    },

    {
    /*Thunder Wave*/
    .name = _("Thunder Wave"),
    .accuracy = 90,
    .description = (pchar*)Thunder_Wave_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &paralyze_100_procs,
    },

    {
    /*Thunder*/
    .name = _("Thunder"),
    .accuracy = 70,
    .base_power = 110,
    .description = (pchar*)Thunder_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &paralyze_30_procs,
    },

    {
    /*Rock Throw*/
    .name = _("Rock Throw"),
    .accuracy = 90,
    .base_power = 50,
    .description = (pchar*)Rock_Throw_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Earthquake*/
    .name = _("Earthquake"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Earthquake_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fissure*/
    .name = _("Fissure"),
    .accuracy = 30,
    .description = (pchar*)Fissure_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_OHKO | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_tryhit_move = ohko_tryhit_move,
    },

    {
    /*Dig*/
    .name = _("Dig"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Dig_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_CHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Toxic*/
    .name = _("Toxic"),
    .accuracy = 90,
    .description = (pchar*)Toxic_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_POISON,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &toxic_procs,
    },

    {
    /*Confusion*/
    .name = _("Confusion"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*)Confusion_desc,
    .pp = 25,
    .category = MOVE_SPECIAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &confuse_10_procs,
    },

    {
    /*Psychic*/
    .name = _("Psychic"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Psychic_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &psychic_procs,
    },

    {
    /*Hypnosis*/
    .name = _("Hypnosis"),
    .accuracy = 60,
    .description = (pchar*)Hypnosis_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_PROTECT | FLAG_MIRROR | FLAG_REFLECTABLE | FLAG_TARGET,
    .procs = &sing_procs,
    },

    {
    /*Meditate*/
    .name = _("Meditate"),
    .accuracy = 101,
    .description = (pchar*)Meditate_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH,
    .procs = &user_raise_atk_1,
    },

    {
    /*Agility*/
    .name = _("Agility"),
    .accuracy = 101,
    .description = (pchar*)Agility_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH,
    .procs = &user_raise_spd_2,
    },

    {
    /*Quick Attack*/
    .name = _("Quick Attack"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Quick_Attack_desc,
    .pp = 30,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Rage*/
    .name = _("Rage"),
    .accuracy = 100,
    .base_power = 20,
    .description = (pchar*)Rage_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Teleport*/
    .name = _("Teleport"),
    .accuracy = 101,
    .description = (pchar*)Teleport_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Night Shade*/
    .name = _("Night Shade"),
    .accuracy = 100,
    .description = (pchar*)Night_Shade_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Mimic*/
    .name = _("Mimic"),
    .accuracy = 101,
    .description = (pchar*)Mimic_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Screech*/
    .name = _("Screech"),
    .accuracy = 85,
    .description = (pchar*)Screech_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_def_2,
    },

    {
    /*Double Team*/
    .name = _("Double Team"),
    .accuracy = 101,
    .description = (pchar*)Double_Team_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_ONSELF,
    .procs = &user_raise_evn_1,
    },

    {
    /*Recover*/
    .name = _("Recover"),
    .accuracy = 101,
    .description = (pchar*)Recover_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
	.heal = 50,
    .m_flags = FLAG_SNATCH | FLAG_HEAL | FLAG_ONSELF,
    .procs = &basic_proc,
    },

    {
    /*Harden*/
    .name = _("Harden"),
    .accuracy = 101,
    .description = (pchar*)Harden_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_ONSELF,
    .procs = &user_raise_def_1,
    },

    {
    /*Minimize*/
    .name = _("Minimize"),
    .accuracy = 101,
    .description = (pchar*)Minimize_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_ONSELF,
    .procs = &user_raise_def_1,
    .on_effect_cb = minimize_on_effect_cb,
    },

    {
    /*Smokescreen*/
    .name = _("Smokescreen"),
    .accuracy = 100,
    .description = (pchar*)Smokescreen_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_acc_1,
    },

    {
    /*Confuse Ray*/
    .name = _("Confuse Ray"),
    .accuracy = 100,
    .description = (pchar*)Confuse_Ray_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &confuse_100_procs,
    },

    {
    /*Withdraw*/
    .name = _("Withdraw"),
    .accuracy = 101,
    .description = (pchar*)Withdraw_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_WATER,
    .m_flags = FLAG_SNATCH | FLAG_ONSELF,
    .procs = &user_raise_def_1,
    },

    {
    /*Defense Curl*/
    .name = _("Defense Curl"),
    .accuracy = 101,
    .description = (pchar*)Defense_Curl_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_ONSELF,
    .procs = &user_raise_def_1,
    },

    {
    /*Barrier*/
    .name = _("Barrier"),
    .accuracy = 101,
    .description = (pchar*)Barrier_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH | FLAG_ONSELF,
    .procs = &user_raise_def_2,
    },

    {
    /*Light Screen*/
    .name = _("Light Screen"),
    .accuracy = 101,
    .description = (pchar*)Light_Screen_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Haze*/
    .name = _("Haze"),
    .accuracy = 101,
    .description = (pchar*)Haze_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_ICE,
    .m_flags = FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    /*Reflect*/
    .name = _("Reflect"),
    .accuracy = 101,
    .description = (pchar*)Reflect_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Focus Energy*/
    .name = _("Focus Energy"),
    .accuracy = 101,
    .description = (pchar*)Focus_Energy_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Bide*/
    .name = _("Bide"),
    .accuracy = 101,
    .description = (pchar*)Bide_desc,
    .pp = 10,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Metronome*/
    .name = _("Metronome"),
    .accuracy = 101,
    .description = (pchar*)Metronome_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_modify_move = metronome_on_modify_move,
    },

    {
    /*Mirror Move*/
    .name = _("Mirror Move"),
    .accuracy = 101,
    .description = (pchar*)Mirror_Move_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_modify_move = mirror_move_on_modify_move,
    },

    /*Self-Destruct*/
    {
    .name = _("Self-Destruct"),
    .accuracy = 100,
    .base_power = 200,
    .description = (pchar*)Self_Destruct_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Egg Bomb*/
    .name = _("Egg Bomb"),
    .accuracy = 75,
    .base_power = 100,
    .description = (pchar*)Egg_Bomb_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Lick*/
    .name = _("Lick"),
    .accuracy = 100,
    .base_power = 30,
    .description = (pchar*)Lick_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &paralyze_30_procs,
    },

    {
    /*Smog*/
    .name = _("Smog"),
    .accuracy = 70,
    .base_power = 30,
    .description = (pchar*)Smog_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &poison_40_procs,
    },

    {
    /*Sludge*/
    .name = _("Sludge"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Sludge_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &poison_30_procs,
    },

    {
    /*Bone Club*/
    .name = _("Bone Club"),
    .accuracy = 85,
    .base_power = 65,
    .description = (pchar*)Bone_Club_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 10,
    },

    {
    /*Fire Blast*/
    .name = _("Fire Blast"),
    .accuracy = 85,
    .base_power = 110,
    .description = (pchar*)Fire_Blast_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &burn_10_procs,
    },

    {
    /*Waterfall*/
    .name = _("Waterfall"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Waterfall_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 20,
    },

    {
    /*Clamp*/
    .name = _("Clamp"),
    .accuracy = 85,
    .base_power = 35,
    .description = (pchar*)Clamp_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Swift*/
    .name = _("Swift"),
    .accuracy = 101,
    .base_power = 60,
    .description = (pchar*)Swift_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Skull Bash*/
    .name = _("Skull Bash"),
    .accuracy = 100,
    .base_power = 130,
    .description = (pchar*)Skull_Bash_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_CHARGE | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Spike Cannon*/
    .name = _("Spike Cannon"),
    .accuracy = 100,
    .base_power = 20,
    .description = (pchar*)Spike_Cannon_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .multi_hit = {2, 5},
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Constrict*/
    .name = _("Constrict"),
    .accuracy = 100,
    .base_power = 10,
    .description = (pchar*)Constrict_desc,
    .pp = 35,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Amnesia*/
    .name = _("Amnesia"),
    .accuracy = 101,
    .description = (pchar*)Amnesia_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH,
    .procs = &user_raise_spDef_2,
    },

    {
    /*Kinesis*/
    .name = _("Kinesis"),
    .accuracy = 80,
    .description = (pchar*)Kinesis_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_acc_1,
    },

    /*Soft-Boiled*/
    {
    .name = _("Soft-Boiled"),
    .accuracy = 101,
    .description = (pchar*)Soft_Boiled_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_HEAL,
	.heal = 50,
    .procs = &basic_proc,
    },

    {
    /*High Jump Kick*/
    .name = _("High Jump Kick"),
    .accuracy = 90,
    .base_power = 130,
    .description = (pchar*)High_Jump_Kick_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_GRAVITY | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_move_fail = jump_kick_on_move_fail,
    },

    {
    /*Glare*/
    .name = _("Glare"),
    .accuracy = 100,
    .description = (pchar*)Glare_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &paralyze_100_procs,
    },

    {
    /*Dream Eater*/
    .name = _("Dream Eater"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Dream_Eater_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_HEAL | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Poison Gas*/
    .name = _("Poison Gas"),
    .accuracy = 90,
    .description = (pchar*)Poison_Gas_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_POISON,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &poison_100_procs,
    },

    {
    /*Barrage*/
    .name = _("Barrage"),
    .accuracy = 85,
    .base_power = 15,
    .description = (pchar*)Barrage_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .multi_hit = {2, 5},
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Leech Life*/
    .name = _("Leech Life"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Leech_Life_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_HEAL | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .drain = 50,
    .procs = &basic_proc,
    },

    {
    /*Lovely Kiss*/
    .name = _("Lovely Kiss"),
    .accuracy = 75,
    .description = (pchar*)Lovely_Kiss_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &sing_procs,
    },

    {
    /*Sky Attack*/
    .name = _("Sky Attack"),
    .accuracy = 90,
    .base_power = 140,
    .description = (pchar*)Sky_Attack_desc,
    .pp = 5,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CHARGE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .before_move = sky_attack_before_move,
    .flinch_chance = 30,
    },

    {
    /*Transform*/
    .name = _("Transform"),
    .accuracy = 101,
    .description = (pchar*)Transform_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Bubble*/
    .name = _("Bubble"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Bubble_desc,
    .pp = 30,
    .category = MOVE_SPECIAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &bubble_beam_procs,
    },

    {
    /*Dizzy Punch*/
    .name = _("Dizzy Punch"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Dizzy_Punch_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_PUNCH | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &confuse_20_procs,
    },

    {
    /*Spore*/
    .name = _("Spore"),
    .accuracy = 100,
    .description = (pchar*)Spore_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_POWDER | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &sing_procs,
    },

    {
    /*Flash*/
    .name = _("Flash"),
    .accuracy = 100,
    .description = (pchar*)Flash_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_acc_1,
    },

    {
    /*Psywave*/
    .name = _("Psywave"),
    .accuracy = 100,
    .description = (pchar*)Psywave_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
	.on_modify_move = psywave_on_modify_move,
    },

    {
    /*Splash*/
    .name = _("Splash"),
    .accuracy = 101,
    .description = (pchar*)Splash_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Acid Armor*/
    .name = _("Acid Armor"),
    .accuracy = 101,
    .description = (pchar*)Acid_Armor_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_POISON,
    .m_flags = FLAG_SNATCH,
    .procs = &user_raise_def_2,
    },

    {
    /*Crabhammer*/
    .name = _("Crabhammer"),
    .accuracy = 90,
    .base_power = 100,
    .description = (pchar*)Crabhammer_desc,
    .pp = 10,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Explosion*/
    .name = _("Explosion"),
    .accuracy = 100,
    .base_power = 250,
    .description = (pchar*)Explosion_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fury Swipes*/
    .name = _("Fury Swipes"),
    .accuracy = 80,
    .base_power = 18,
    .description = (pchar*)Fury_Swipes_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .multi_hit = {2, 5},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Bonemerang*/
    .name = _("Bonemerang"),
    .accuracy = 90,
    .base_power = 50,
    .description = (pchar*)Bonemerang_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .multi_hit = {2, 5},
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Rest*/
    .name = _("Rest"),
    .accuracy = 101,
    .description = (pchar*)Rest_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH | FLAG_HEAL | FLAG_ONSELF,
    .procs = &basic_proc,
    .on_tryhit_move = rest_on_tryhit_move,
    },

    {
    /*Rock Slide*/
    .name = _("Rock Slide"),
    .accuracy = 90,
    .base_power = 75,
    .description = (pchar*)Rock_Slide_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    /*Hyper Fang*/
    .name = _("Hyper Fang"),
    .accuracy = 90,
    .base_power = 80,
    .description = (pchar*)Hyper_Fang_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_BITE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 10,
    },

    {
    /*Sharpen*/
    .name = _("Sharpen"),
    .accuracy = 101,
    .description = (pchar*)Sharpen_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &user_raise_atk_1,
    },

    {
    /*Conversion*/
    .name = _("Conversion"),
    .accuracy = 101,
    .description = (pchar*)Conversion_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_ONSELF,
    .procs = &basic_proc,
    .on_effect_cb = conversion_on_effect,
    },

    {
    /*Tri Attack*/
    .name = _("Tri Attack"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Tri_Attack_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Super Fang*/
    .name = _("Super Fang"),
    .accuracy = 90,
    .description = (pchar*)Super_Fang_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Slash*/
    .name = _("Slash"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Slash_desc,
    .pp = 20,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Substitute*/
    .name = _("Substitute"),
    .accuracy = 101,
    .description = (pchar*)Substitute_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Struggle*/
    .name = _("Struggle"),
    .accuracy = 101,
    .base_power = 50,
    .description = (pchar*)Struggle_desc,
    .pp = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,

    .recoil_struggle = true,
    },

    {
    /*Sketch*/
    .name = _("Sketch"),
    .accuracy = 101,
    .description = (pchar*)Sketch_desc,
    .pp = 1,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Triple Kick*/
    .name = _("Triple Kick"),
    .accuracy = 90,
    .base_power = 10,
    .description = (pchar*)Triple_Kick_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .multi_hit = {3, 3},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Thief*/
    .name = _("Thief"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Thief_desc,
    .pp = 25,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Spider Web*/
    .name = _("Spider Web"),
    .accuracy = 101,
    .description = (pchar*)Spider_Web_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_BUG,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Mind Reader*/
    .name = _("Mind Reader"),
    .accuracy = 101,
    .description = (pchar*)Mind_Reader_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Nightmare*/
    .name = _("Nightmare"),
    .accuracy = 100,
    .description = (pchar*)Nightmare_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Flame Wheel*/
    .name = _("Flame Wheel"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Flame_Wheel_desc,
    .pp = 25,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_DEFROST | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Snore*/
    .name = _("Snore"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*)Snore_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    /*Curse*/
    .name = _("Curse"),
    .accuracy = 101,
    .description = (pchar*)Curse_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    /*Flail*/
    .name = _("Flail"),
    .accuracy = 100,
    .description = (pchar*)Flail_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("Conversion 2"),
    .accuracy = 101,
    .description = (pchar*)Conversion_2_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC | FLAG_ONSELF,
    .procs = &basic_proc,
    .on_effect_cb = conversion_two_on_effect,
    },

    {
    /*Aeroblast*/
    .name = _("Aeroblast"),
    .accuracy = 95,
    .base_power = 100,
    .description = (pchar*)Aeroblast_desc,
    .pp = 5,
    .crit_ratio = 1,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Cotton Spore*/
    .name = _("Cotton Spore"),
    .accuracy = 100,
    .description = (pchar*)Cotton_Spore_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_POWDER | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_spd_2,
    },

    {
    /*Reversal*/
    .name = _("Reversal"),
    .accuracy = 100,
    .description = (pchar*)Reversal_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Spite*/
    .name = _("Spite"),
    .accuracy = 100,
    .description = (pchar*)Spite_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Powder Snow*/
    .name = _("Powder Snow"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Powder_Snow_desc,
    .pp = 25,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Protect*/
    .name = _("Protect"),
    .accuracy = 101,
    .description = (pchar*)Protect_desc,
    .pp = 10,
    .priority = 4,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Mach Punch*/
    .name = _("Mach Punch"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Mach_Punch_desc,
    .pp = 30,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_PUNCH | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Scary Face*/
    .name = _("Scary Face"),
    .accuracy = 100,
    .description = (pchar*)Scary_Face_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_spd_2,
    },

    {
    /*Feint Attack*/
    .name = _("Feint Attack"),
    .accuracy = 101,
    .base_power = 60,
    .description = (pchar*)Feint_Attack_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sweet Kiss*/
    .name = _("Sweet Kiss"),
    .accuracy = 75,
    .description = (pchar*)Sweet_Kiss_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Belly Drum*/
    .name = _("Belly Drum"),
    .accuracy = 101,
    .description = (pchar*)Belly_Drum_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Sludge Bomb*/
    .name = _("Sludge Bomb"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Sludge_Bomb_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("Mud-Slap"),
    .accuracy = 100,
    .base_power = 20,
    .description = (pchar*)Mud_Slap_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Octazooka*/
    .name = _("Octazooka"),
    .accuracy = 85,
    .base_power = 65,
    .description = (pchar*)Octazooka_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Spikes*/
    .name = _("Spikes"),
    .accuracy = 101,
    .description = (pchar*)Spikes_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_REFLECTABLE,
    .procs = &basic_proc,
    },

    {
    /*Zap Cannon*/
    .name = _("Zap Cannon"),
    .accuracy = 50,
    .base_power = 120,
    .description = (pchar*)Zap_Cannon_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Foresight*/
    .name = _("Foresight"),
    .accuracy = 101,
    .description = (pchar*)Foresight_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Destiny Bond*/
    .name = _("Destiny Bond"),
    .accuracy = 101,
    .description = (pchar*)Destiny_Bond_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    /*Perish Song*/
    .name = _("Perish Song"),
    .accuracy = 101,
    .description = (pchar*)Perish_Song_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_HITS_ALL | FLAG_ONSELF,
    .procs = &basic_proc,
    },

    {
    /*Icy Wind*/
    .name = _("Icy Wind"),
    .accuracy = 95,
    .base_power = 55,
    .description = (pchar*)Icy_Wind_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Detect*/
    .name = _("Detect"),
    .accuracy = 101,
    .description = (pchar*)Detect_desc,
    .pp = 5,
    .priority = 4,
    .category = MOVE_STATUS,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Bone Rush*/
    .name = _("Bone Rush"),
    .accuracy = 90,
    .base_power = 25,
    .description = (pchar*)Bone_Rush_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .multi_hit = {2, 5},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("Lock-On"),
    .accuracy = 101,
    .description = (pchar*)Lock_On_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Outrage*/
    .name = _("Outrage"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Outrage_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sandstorm*/
    .name = _("Sandstorm"),
    .accuracy = 101,
    .description = (pchar*)Sandstorm_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Giga drain*/
    .name = _("Giga drain"),
    .accuracy = 100,
    .base_power = 75,
    .description = (pchar*)Giga_Drain_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_HEAL | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Endure*/
    .name = _("Endure"),
    .accuracy = 101,
    .description = (pchar*)Endure_desc,
    .pp = 10,
    .priority = 4,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Charm*/
    .name = _("Charm"),
    .accuracy = 100,
    .description = (pchar*)Charm_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_atk_2,
    },

    {
    /*Rollout*/
    .name = _("Rollout"),
    .accuracy = 90,
    .base_power = 30,
    .description = (pchar*)Rollout_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .before_move = rollout_on_before_move,
    .on_move_fail = rollout_on_move_fail,
    .on_base_power_move = rollout_on_base_power_move,
    },

    {
    /*False Swipe*/
    .name = _("False Swipe"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)False_Swipe_desc,
    .pp = 40,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Swagger*/
    .name = _("Swagger"),
    .accuracy = 85,
    .description = (pchar*)Swagger_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Milk Drink*/
    .name = _("Milk Drink"),
    .accuracy = 101,
    .description = (pchar*)Milk_Drink_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_HEAL,
    .procs = &basic_proc,
    },

    {
    /*Spark*/
    .name = _("Spark"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Spark_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fury Cutter*/
    .name = _("Fury Cutter"),
    .accuracy = 95,
    .base_power = 40,
    .description = (pchar*)Fury_Cutter_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Steel Wing*/
    .name = _("Steel Wing"),
    .accuracy = 90,
    .base_power = 70,
    .description = (pchar*)Steel_Wing_desc,
    .pp = 25,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Mean Look*/
    .name = _("Mean Look"),
    .accuracy = 101,
    .description = (pchar*)Mean_Look_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Attract*/
    .name = _("Attract"),
    .accuracy = 100,
    .description = (pchar*)Attract_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sleep Talk*/
    .name = _("Sleep Talk"),
    .accuracy = 101,
    .description = (pchar*)Sleep_Talk_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .before_move = sleep_talk_before_move,
    .on_modify_move = sleep_talk_on_modify_move,
    },

    {
    /*Heal Bell*/
    .name = _("Heal Bell"),
    .accuracy = 101,
    .description = (pchar*)Heal_Bell_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_AUTHENTIC | FLAG_SOUND,
    .procs = &basic_proc,
    },

    {
    /*Return*/
    .name = _("Return"),
    .accuracy = 100,
    .description = (pchar*)Return_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Present*/
    .name = _("Present"),
    .accuracy = 90,
    .description = (pchar*)Present_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Frustration*/
    .name = _("Frustration"),
    .accuracy = 100,
    .description = (pchar*)Frustration_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Safeguard*/
    .name = _("Safeguard"),
    .accuracy = 101,
    .description = (pchar*)Safeguard_desc,
    .pp = 25,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Pain Split*/
    .name = _("Pain Split"),
    .accuracy = 101,
    .description = (pchar*)Pain_Split_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sacred Fire*/
    .name = _("Sacred Fire"),
    .accuracy = 95,
    .base_power = 100,
    .description = (pchar*)Sacred_Fire_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_DEFROST | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Magnitude*/
    .name = _("Magnitude"),
    .accuracy = 100,
    .description = (pchar*)Magnitude_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dynamic Punch*/
    .name = _("Dynamic Punch"),
    .accuracy = 50,
    .base_power = 100,
    .description = (pchar*)Dynamic_Punch_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_PUNCH | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Megahorn*/
    .name = _("Megahorn"),
    .accuracy = 85,
    .base_power = 120,
    .description = (pchar*)Megahorn_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dragon Breath*/
    .name = _("Dragon Breath"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Dragon_Breath_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Baton Pass*/
    .name = _("Baton Pass"),
    .accuracy = 101,
    .description = (pchar*)Baton_Pass_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Encore*/
    .name = _("Encore"),
    .accuracy = 100,
    .description = (pchar*)Encore_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Pursuit*/
    .name = _("Pursuit"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Pursuit_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Rapid Spin*/
    .name = _("Rapid Spin"),
    .accuracy = 100,
    .base_power = 20,
    .description = (pchar*)Rapid_Spin_desc,
    .pp = 40,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sweet Scent*/
    .name = _("Sweet Scent"),
    .accuracy = 100,
    .description = (pchar*)Sweet_Scent_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Iron Tail*/
    .name = _("Iron Tail"),
    .accuracy = 75,
    .base_power = 100,
    .description = (pchar*)Iron_Tail_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Metal Claw*/
    .name = _("Metal Claw"),
    .accuracy = 95,
    .base_power = 50,
    .description = (pchar*)Metal_Claw_desc,
    .pp = 35,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Vital Throw*/
    .name = _("Vital Throw"),
    .accuracy = 101,
    .base_power = 70,
    .description = (pchar*)Vital_Throw_desc,
    10,
    -1,
    1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Morning Sun*/
    .name = _("Morning Sun"),
    .accuracy = 101,
    .description = (pchar*)Morning_Sun_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_HEAL,
    .procs = &basic_proc,
    },

    {
    /*Synthesis*/
    .name = _("Synthesis"),
    .accuracy = 101,
    .description = (pchar*)Synthesis_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_SNATCH | FLAG_HEAL,
    .procs = &basic_proc,
    },

    {
    /*Moonlight*/
    .name = _("Moonlight"),
    .accuracy = 101,
    .description = (pchar*)Moonlight_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_SNATCH | FLAG_HEAL,
    .procs = &basic_proc,
    },

    {
    /*Hidden Power*/
    .name = _("Hidden Power"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Hidden_Power_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Cross Chop*/
    .name = _("Cross Chop"),
    .accuracy = 80,
    .base_power = 100,
    .description = (pchar*)Cross_Chop_desc,
    .pp = 5,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Twister*/
    .name = _("Twister"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Twister_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Rain Dance*/
    .name = _("Rain Dance"),
    .accuracy = 101,
    .description = (pchar*)Rain_Dance_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sunny Day*/
    .name = _("Sunny Day"),
    .accuracy = 101,
    .description = (pchar*)Sunny_Day_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Crunch*/
    .name = _("Crunch"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Crunch_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_BITE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Mirror Coat*/
    .name = _("Mirror Coat"),
    .accuracy = 100,
    .description = (pchar*)Mirror_Coat_desc,
    .pp = 20,
    .priority = -4,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Psych Up*/
    .name = _("Psych Up"),
    .accuracy = 101,
    .description = (pchar*)Psych_Up_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    /*Extreme Speed*/
    .name = _("Extreme Speed"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Extreme_Speed_desc,
    .pp = 5,
    .priority = 2,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Ancient Power*/
    .name = _("Ancient Power"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Ancient_Power_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT,
    .procs = &basic_proc,
    },

    {
    /*Shadow Ball*/
    .name = _("Shadow Ball"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Shadow_Ball_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &shadow_ball_procs,
    },

    {
    /*Future Sight*/
    .name = _("Future Sight"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Future_Sight_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Rock Smash*/
    .name = _("Rock Smash"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Rock_Smash_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Whirlpool*/
    .name = _("Whirlpool"),
    .accuracy = 85,
    .base_power = 35,
    .description = (pchar*)Whirlpool_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Beat Up*/
    .name = _("Beat Up"),
    .accuracy = 100,
    .description = (pchar*)Beat_Up_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .multi_hit = {6, 6},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fake Out*/
    .name = _("Fake Out"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Fake_Out_desc,
    .pp = 10,
    .priority = 3,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Uproar*/
    .name = _("Uproar"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Uproar_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Stockpile*/
    .name = _("Stockpile"),
    .accuracy = 101,
    .description = (pchar*)Stockpile_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Spit Up*/
    .name = _("Spit Up"),
    .accuracy = 100,
    .description = (pchar*)Spit_Up_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Swallow*/
    .name = _("Swallow"),
    .accuracy = 101,
    .description = (pchar*)Swallow_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_HEAL,
    .procs = &basic_proc,
    },

    {
    /*Heat Wave*/
    .name = _("Heat Wave"),
    .accuracy = 90,
    .base_power = 95,
    .description = (pchar*)Heat_Wave_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Hail*/
    .name = _("Hail"),
    .accuracy = 101,
    .description = (pchar*)Hail_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Torment*/
    .name = _("Torment"),
    .accuracy = 100,
    .description = (pchar*)Torment_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_AUTHENTIC | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Flatter*/
    .name = _("Flatter"),
    .accuracy = 100,
    .description = (pchar*)Flatter_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("Will-O-Wisp"),
    .accuracy = 85,
    .description = (pchar*)Will_O_Wisp_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Memento*/
    .name = _("Memento"),
    .accuracy = 100,
    .description = (pchar*)Memento_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Facade*/
    .name = _("Facade"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Facade_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Focus Punch*/
    .name = _("Focus Punch"),
    .accuracy = 100,
    .base_power = 150,
    .description = (pchar*)Focus_Punch_desc,
    .pp = 20,
    .priority = -3,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_PUNCH | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Smelling Salts*/
    .name = _("Smelling Salts"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Smelling_Salts_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Follow Me*/
    .name = _("Follow Me"),
    .accuracy = 101,
    .description = (pchar*)Follow_Me_desc,
    .pp = 20,
    .priority = 2,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Nature Power*/
    .name = _("Nature Power"),
    .accuracy = 101,
    .description = (pchar*)Nature_Power_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Charge*/
    .name = _("Charge"),
    .accuracy = 101,
    .description = (pchar*)Charge_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Taunt*/
    .name = _("Taunt"),
    .accuracy = 100,
    .description = (pchar*)Taunt_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_AUTHENTIC | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Helping Hand*/
    .name = _("Helping Hand"),
    .accuracy = 101,
    .description = (pchar*)Helping_Hand_desc,
    .pp = 20,
    .priority = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    /*Trick*/
    .name = _("Trick"),
    .accuracy = 100,
    .description = (pchar*)Trick_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Role Play*/
    .name = _("Role Play"),
    .accuracy = 101,
    .description = (pchar*)Role_Play_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    /*Wish*/
    .name = _("Wish"),
    .accuracy = 101,
    .description = (pchar*)Wish_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Assist*/
    .name = _("Assist"),
    .accuracy = 101,
    .description = (pchar*)Assist_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_modify_move = assist_on_modify_move,
    },

    {
    /*Ingrain*/
    .name = _("Ingrain"),
    .accuracy = 101,
    .description = (pchar*)Ingrain_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Superpower*/
    .name = _("Superpower"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Superpower_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Magic Coat*/
    .name = _("Magic Coat"),
    .accuracy = 101,
    .description = (pchar*)Magic_Coat_desc,
    .pp = 15,
    .priority = 4,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_tryhit_move = magic_coat_on_tryhit,
    },

    {
    /*Recycle*/
    .name = _("Recycle"),
    .accuracy = 101,
    .description = (pchar*)Recycle_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Revenge*/
    .name = _("Revenge"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Revenge_desc,
    10,
    -4,
    1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Brick Break*/
    .name = _("Brick Break"),
    .accuracy = 100,
    .base_power = 75,
    .description = (pchar*)Brick_Break_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Yawn*/
    .name = _("Yawn"),
    .accuracy = 101,
    .description = (pchar*)Yawn_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Knock Off*/
    .name = _("Knock Off"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Knock_Off_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Endeavor*/
    .name = _("Endeavor"),
    .accuracy = 100,
    .description = (pchar*)Endeavor_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Eruption*/
    .name = _("Eruption"),
    .accuracy = 100,
    .base_power = 150,
    .description = (pchar*)Eruption_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Skill Swap*/
    .name = _("Skill Swap"),
    .accuracy = 101,
    .description = (pchar*)Skill_Swap_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Imprison*/
    .name = _("Imprison"),
    .accuracy = 101,
    .description = (pchar*)Imprison_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH |  FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    /*Refresh*/
    .name = _("Refresh"),
    .accuracy = 101,
    .description = (pchar*)Refresh_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Grudge*/
    .name = _("Grudge"),
    .accuracy = 101,
    .description = (pchar*)Grudge_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    /*Snatch*/
    .name = _("Snatch"),
    .accuracy = 101,
    .description = (pchar*)Snatch_desc,
    .pp = 10,
    .priority = 4,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_AUTHENTIC,
    .procs = &basic_proc,
    .on_effect_cb = snatch_on_effect,
    },

    {
    /*Secret Power*/
    .name = _("Secret Power"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Secret_Power_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dive*/
    .name = _("Dive"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Dive_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CHARGE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Arm Thrust*/
    .name = _("Arm Thrust"),
    .accuracy = 100,
    .base_power = 15,
    .description = (pchar*)Arm_Thrust_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .multi_hit = {2, 5},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Camouflage*/
    .name = _("Camouflage"),
    .accuracy = 101,
    .description = (pchar*)Camouflage_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Tail Glow*/
    .name = _("Tail Glow"),
    .accuracy = 101,
    .description = (pchar*)Tail_Glow_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_BUG,
    .m_flags = FLAG_SNATCH,
    .procs = &user_raise_spAtk_2,
    },

    {
    /*Luster Purge*/
    .name = _("Luster Purge"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Luster_Purge_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Mist Ball*/
    .name = _("Mist Ball"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Mist_Ball_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Feather Dance*/
    .name = _("Feather Dance"),
    .accuracy = 100,
    .description = (pchar*)Feather_Dance_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_DANCE | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_atk_2,
    },

    {
    /*Teeter Dance*/
    .name = _("Teeter Dance"),
    .accuracy = 100,
    .description = (pchar*)Teeter_Dance_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_DANCE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Blaze Kick*/
    .name = _("Blaze Kick"),
    .accuracy = 90,
    .base_power = 85,
    .description = (pchar*)Blaze_Kick_desc,
    .pp = 10,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Mud Sport*/
    .name = _("Mud Sport"),
    .accuracy = 101,
    .description = (pchar*)Mud_Sport_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Ice Ball*/
    .name = _("Ice Ball"),
    .accuracy = 90,
    .base_power = 30,
    .description = (pchar*)Ice_Ball_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_BULLET | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .before_move = rollout_on_before_move,
    .on_move_fail = rollout_on_move_fail,
    .on_base_power_move = rollout_on_base_power_move,
    },

    {
    /*Needle Arm*/
    .name = _("Needle Arm"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Needle_Arm_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    /*Slack Off*/
    .name = _("Slack Off"),
    .accuracy = 101,
    .description = (pchar*)Slack_Off_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_HEAL,
    .procs = &basic_proc,
    },

    {
    /*Hyper Voice*/
    .name = _("Hyper Voice"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Hyper_Voice_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Poison Fang*/
    .name = _("Poison Fang"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*)Poison_Fang_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_BITE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Crush Claw*/
    .name = _("Crush Claw"),
    .accuracy = 95,
    .base_power = 75,
    .description = (pchar*)Crush_Claw_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Blast Burn*/
    .name = _("Blast Burn"),
    .accuracy = 90,
    .base_power = 150,
    .description = (pchar*)Blast_Burn_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_RECHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Hydro Cannon*/
    .name = _("Hydro Cannon"),
    .accuracy = 90,
    .base_power = 150,
    .description = (pchar*)Hydro_Cannon_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_RECHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Meteor Mash*/
    .name = _("Meteor Mash"),
    .accuracy = 90,
    .base_power = 90,
    .description = (pchar*)Meteor_Mash_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_PUNCH | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Astonish*/
    .name = _("Astonish"),
    .accuracy = 100,
    .base_power = 30,
    .description = (pchar*)Astonish_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    /*Weather Ball*/
    .name = _("Weather Ball"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*)Weather_Ball_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Aromatherapy*/
    .name = _("Aromatherapy"),
    .accuracy = 101,
    .description = (pchar*)Aromatherapy_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Fake Tears*/
    .name = _("Fake Tears"),
    .accuracy = 100,
    .description = (pchar*)Fake_Tears_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_spDef_2,
    },

    {
    /*Air Cutter*/
    .name = _("Air Cutter"),
    .accuracy = 95,
    .base_power = 60,
    .description = (pchar*)Air_Cutter_desc,
    .pp = 25,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Overheat*/
    .name = _("Overheat"),
    .accuracy = 90,
    .base_power = 130,
    .description = (pchar*)Overheat_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Odor Sleuth*/
    .name = _("Odor Sleuth"),
    .accuracy = 101,
    .description = (pchar*)Odor_Sleuth_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Rock Tomb*/
    .name = _("Rock Tomb"),
    .accuracy = 95,
    .base_power = 60,
    .description = (pchar*)Rock_Tomb_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Silver Wind*/
    .name = _("Silver Wind"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Silver_Wind_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Metal Sound*/
    .name = _("Metal Sound"),
    .accuracy = 85,
    .description = (pchar*)Metal_Sound_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_spDef_2,
    },

    {
    /*Grass Whistle*/
    .name = _("Grass Whistle"),
    .accuracy = 55,
    .description = (pchar*)Grass_Whistle_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Tickle*/
    .name = _("Tickle"),
    .accuracy = 100,
    .description = (pchar*)Tickle_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Cosmic Power*/
    .name = _("Cosmic Power"),
    .accuracy = 101,
    .description = (pchar*)Cosmic_Power_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Water Spout*/
    .name = _("Water Spout"),
    .accuracy = 100,
    .base_power = 150,
    .description = (pchar*)Water_Spout_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Signal Beam*/
    .name = _("Signal Beam"),
    .accuracy = 100,
    .base_power = 75,
    .description = (pchar*)Signal_Beam_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Shadow Punch*/
    .name = _("Shadow Punch"),
    .accuracy = 101,
    .base_power = 60,
    .description = (pchar*)Shadow_Punch_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_PUNCH | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Extrasensory*/
    .name = _("Extrasensory"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Extrasensory_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 10,
    },

    {
    /*Sky Uppercut*/
    .name = _("Sky Uppercut"),
    .accuracy = 90,
    .base_power = 85,
    .description = (pchar*)Sky_Uppercut_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_PUNCH | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sand Tomb*/
    .name = _("Sand Tomb"),
    .accuracy = 85,
    .base_power = 35,
    .description = (pchar*)Sand_Tomb_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sheer Cold*/
    .name = _("Sheer Cold"),
    .accuracy = 30,
    .description = (pchar*)Sheer_Cold_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_OHKO,
    .procs = &basic_proc,
    .on_tryhit_move = ohko_tryhit_move,
    },

    {
    /*Muddy Water*/
    .name = _("Muddy Water"),
    .accuracy = 85,
    .base_power = 90,
    .description = (pchar*)Muddy_Water_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Bullet Seed*/
    .name = _("Bullet Seed"),
    .accuracy = 100,
    .base_power = 25,
    .description = (pchar*)Bullet_Seed_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .multi_hit = {2, 5},
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Aerial Ace*/
    .name = _("Aerial Ace"),
    .accuracy = 101,
    .base_power = 60,
    .description = (pchar*)Aerial_Ace_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Icicle Spear*/
    .name = _("Icicle Spear"),
    .accuracy = 100,
    .base_power = 25,
    .description = (pchar*)Icicle_Spear_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .multi_hit = {2, 5},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Iron Defense*/
    .name = _("Iron Defense"),
    .accuracy = 101,
    .description = (pchar*)Iron_Defense_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_SNATCH,
    .procs = &user_raise_def_2,
    },

    {
    /*Block*/
    .name = _("Block"),
    .accuracy = 101,
    .description = (pchar*)Block_desc,
    .pp = 5,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR,
    .procs = &basic_proc,
    },

    {
    /*Howl*/
    .name = _("Howl"),
    .accuracy = 101,
    .description = (pchar*)Howl_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH | FLAG_ONSELF,
    .procs = &user_raise_atk_1,
    },

    {
    /*Dragon Claw*/
    .name = _("Dragon Claw"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Dragon_Claw_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Frenzy Plant*/
    .name = _("Frenzy Plant"),
    .accuracy = 90,
    .base_power = 150,
    .description = (pchar*)Frenzy_Plant_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_RECHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Bulk Up*/
    .name = _("Bulk Up"),
    .accuracy = 101,
    .description = (pchar*)Bulk_Up_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Bounce*/
    .name = _("Bounce"),
    .accuracy = 85,
    .base_power = 85,
    .description = (pchar*)Bounce_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CHARGE | FLAG_GRAVITY | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Mud Shot*/
    .name = _("Mud Shot"),
    .accuracy = 95,
    .base_power = 55,
    .description = (pchar*)Mud_Shot_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Poison Tail*/
    .name = _("Poison Tail"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*)Poison_Tail_desc,
    .pp = 25,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Covet*/
    .name = _("Covet"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Covet_desc,
    .pp = 25,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Volt Tackle*/
    .name = _("Volt Tackle"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Volt_Tackle_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Magical Leaf*/
    .name = _("Magical Leaf"),
    .accuracy = 101,
    .base_power = 60,
    .description = (pchar*)Magical_Leaf_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Water Sport*/
    .name = _("Water Sport"),
    .accuracy = 101,
    .description = (pchar*)Water_Sport_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Calm Mind*/
    .name = _("Calm Mind"),
    .accuracy = 101,
    .description = (pchar*)Calm_Mind_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Leaf Blade*/
    .name = _("Leaf Blade"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Leaf_Blade_desc,
    .pp = 15,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dragon Dance*/
    .name = _("Dragon Dance"),
    .accuracy = 101,
    .description = (pchar*)Dragon_Dance_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Rock Blast*/
    .name = _("Rock Blast"),
    .accuracy = 90,
    .base_power = 25,
    .description = (pchar*)Rock_Blast_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .multi_hit = {2, 5},
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Shock Wave*/
    .name = _("Shock Wave"),
    .accuracy = 101,
    .base_power = 60,
    .description = (pchar*)Shock_Wave_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Water Pulse*/
    .name = _("Water Pulse"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Water_Pulse_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_PULSE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Doom Desire*/
    .name = _("Doom Desire"),
    .accuracy = 100,
    .base_power = 140,
    .description = (pchar*)Doom_Desire_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Psycho Boost*/
    .name = _("Psycho Boost"),
    .accuracy = 90,
    .base_power = 140,
    .description = (pchar*)Psycho_Boost_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Roost*/
    .name = _("Roost"),
    .accuracy = 101,
    .description = (pchar*)Roost_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_SNATCH | FLAG_HEAL,
    .procs = &basic_proc,
    },

    {
    /*Gravity*/
    .name = _("Gravity"),
    .accuracy = 101,
    .description = (pchar*)Gravity_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Miracle Eye*/
    .name = _("Miracle Eye"),
    .accuracy = 101,
    .description = (pchar*)Miracle_Eye_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("Wake-Up Slap"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Wake_Up_Slap_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Hammer Arm*/
    .name = _("Hammer Arm"),
    .accuracy = 90,
    .base_power = 100,
    .description = (pchar*)Hammer_Arm_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_PUNCH | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Gyro Ball*/
    .name = _("Gyro Ball"),
    .accuracy = 100,
    .description = (pchar*)Gyro_Ball_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_BULLET | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Healing Wish*/
    .name = _("Healing Wish"),
    .accuracy = 101,
    .description = (pchar*)Healing_Wish_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH | FLAG_HEAL,
    .procs = &basic_proc,
    },

    {
    /*Brine*/
    .name = _("Brine"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Brine_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Natural Gift*/
    .name = _("Natural Gift"),
    .accuracy = 100,
    .description = (pchar*)Natural_Gift_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Feint*/
    .name = _("Feint"),
    .accuracy = 100,
    .base_power = 30,
    .description = (pchar*)Feint_desc,
    .pp = 10,
    .priority = 2,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Pluck*/
    .name = _("Pluck"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Pluck_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Tailwind*/
    .name = _("Tailwind"),
    .accuracy = 101,
    .description = (pchar*)Tailwind_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Acupressure*/
    .name = _("Acupressure"),
    .accuracy = 101,
    .description = (pchar*)Acupressure_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Metal Burst*/
    .name = _("Metal Burst"),
    .accuracy = 100,
    .description = (pchar*)Metal_Burst_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("U-turn"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)U_turn_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Close Combat*/
    .name = _("Close Combat"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Close_Combat_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Payback*/
    .name = _("Payback"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*)Payback_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Assurance*/
    .name = _("Assurance"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Assurance_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Embargo*/
    .name = _("Embargo"),
    .accuracy = 100,
    .description = (pchar*)Embargo_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fling*/
    .name = _("Fling"),
    .accuracy = 100,
    .description = (pchar*)Fling_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Psycho Shift*/
    .name = _("Psycho Shift"),
    .accuracy = 100,
    .description = (pchar*)Psycho_Shift_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Trump Card*/
    .name = _("Trump Card"),
    .accuracy = 101,
    .description = (pchar*)Trump_Card_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Heal Block*/
    .name = _("Heal Block"),
    .accuracy = 100,
    .description = (pchar*)Heal_Block_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Wring Out*/
    .name = _("Wring Out"),
    .accuracy = 100,
    .description = (pchar*)Wring_Out_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Power Trick*/
    .name = _("Power Trick"),
    .accuracy = 101,
    .description = (pchar*)Power_Trick_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Gastro Acid*/
    .name = _("Gastro Acid"),
    .accuracy = 100,
    .description = (pchar*)Gastro_Acid_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_POISON,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Lucky Chant*/
    .name = _("Lucky Chant"),
    .accuracy = 101,
    .description = (pchar*)Lucky_Chant_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Me First*/
    .name = _("Me First"),
    .accuracy = 101,
    .description = (pchar*)Me_First_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_tryhit_move = me_first_on_tryhit,
    },

    {
    /*Copycat*/
    .name = _("Copycat"),
    .accuracy = 101,
    .description = (pchar*)Copycat_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_modify_move = copycat_on_modify_move,
    },

    {
    /*Power Swap*/
    .name = _("Power Swap"),
    .accuracy = 101,
    .description = (pchar*)Power_Swap_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Guard Swap*/
    .name = _("Guard Swap"),
    .accuracy = 101,
    .description = (pchar*)Guard_Swap_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Punishment*/
    .name = _("Punishment"),
    .accuracy = 100,
    .description = (pchar*)Punishment_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Last Resort*/
    .name = _("Last Resort"),
    .accuracy = 100,
    .base_power = 140,
    .description = (pchar*)Last_Resort_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Worry Seed*/
    .name = _("Worry Seed"),
    .accuracy = 100,
    .description = (pchar*)Worry_Seed_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sucker Punch*/
    .name = _("Sucker Punch"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Sucker_Punch_desc,
    .pp = 5,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Toxic Spikes*/
    .name = _("Toxic Spikes"),
    .accuracy = 101,
    .description = (pchar*)Toxic_Spikes_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_POISON,
    .m_flags = FLAG_REFLECTABLE,
    .procs = &basic_proc,
    },

    {
    /*Heart Swap*/
    .name = _("Heart Swap"),
    .accuracy = 101,
    .description = (pchar*)Heart_Swap_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Aqua Ring*/
    .name = _("Aqua Ring"),
    .accuracy = 101,
    .description = (pchar*)Aqua_Ring_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Magnet Rise*/
    .name = _("Magnet Rise"),
    .accuracy = 101,
    .description = (pchar*)Magnet_Rise_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_SNATCH | FLAG_GRAVITY,
    .procs = &basic_proc,
    },

    {
    /*Flare Blitz*/
    .name = _("Flare Blitz"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Flare_Blitz_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_DEFROST | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Force Palm*/
    .name = _("Force Palm"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Force_Palm_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Aura Sphere*/
    .name = _("Aura Sphere"),
    .accuracy = 101,
    .base_power = 80,
    .description = (pchar*)Aura_Sphere_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_PULSE | FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Rock Polish*/
    .name = _("Rock Polish"),
    .accuracy = 101,
    .description = (pchar*)Rock_Polish_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_SNATCH,
    .procs = &user_raise_spd_2,
    },

    {
    /*Poison Jab*/
    .name = _("Poison Jab"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Poison_Jab_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dark Pulse*/
    .name = _("Dark Pulse"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Dark_Pulse_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_PULSE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 20,
    },

    {
    /*Night Slash*/
    .name = _("Night Slash"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Night_Slash_desc,
    .pp = 15,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Aqua Tail*/
    .name = _("Aqua Tail"),
    .accuracy = 90,
    .base_power = 90,
    .description = (pchar*)Aqua_Tail_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Seed Bomb*/
    .name = _("Seed Bomb"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Seed_Bomb_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Air Slash*/
    .name = _("Air Slash"),
    .accuracy = 95,
    .base_power = 75,
    .description = (pchar*)Air_Slash_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    .name = _("X-Scissor"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)X_Scissor_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Bug Buzz*/
    .name = _("Bug Buzz"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Bug_Buzz_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dragon Pulse*/
    .name = _("Dragon Pulse"),
    .accuracy = 100,
    .base_power = 85,
    .description = (pchar*)Dragon_Pulse_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_PULSE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dragon Rush*/
    .name = _("Dragon Rush"),
    .accuracy = 75,
    .base_power = 100,
    .description = (pchar*)Dragon_Rush_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 20,
    },

    {
    /*Power Gem*/
    .name = _("Power Gem"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Power_Gem_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /* Drain Punch*/
    .name = _("Drain Punch"),
    .accuracy = 100,
    .base_power = 75,
    .description = (pchar*) Drain_Punch_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_PUNCH | FLAG_HEAL | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Vacuum Wave*/
    .name = _("Vacuum Wave"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Vacuum_Wave_desc,
    .pp = 30,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Focus Blast*/
    .name = _("Focus Blast"),
    .accuracy = 70,
    .base_power = 120,
    .description = (pchar*)Focus_Blast_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Energy Ball*/
    .name = _("Energy Ball"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Energy_Ball_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Brave Bird*/
    .name = _("Brave Bird"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Brave_Bird_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Earth Power*/
    .name = _("Earth Power"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Earth_Power_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Switcheroo*/
    .name = _("Switcheroo"),
    .accuracy = 100,
    .description = (pchar*)Switcheroo_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Giga Impact*/
    .name = _("Giga Impact"),
    .accuracy = 90,
    .base_power = 150,
    .description = (pchar*)Giga_Impact_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_RECHARGE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Nasty Plot*/
    .name = _("Nasty Plot"),
    .accuracy = 101,
    .description = (pchar*)Nasty_Plot_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_SNATCH,
    .procs = &user_raise_spAtk_2,
    },

    {
    /*Bullet Punch*/
    .name = _("Bullet Punch"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Bullet_Punch_desc,
    .pp = 30,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_PUNCH | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Avalanche*/
    .name = _("Avalanche"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Avalanche_desc,
    10,
    -4,
    1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Ice Shard*/
    .name = _("Ice Shard"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Ice_Shard_desc,
    .pp = 30,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Shadow Claw*/
    .name = _("Shadow Claw"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Shadow_Claw_desc,
    .pp = 15,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Thunder Fang*/
    .name = _("Thunder Fang"),
    .accuracy = 95,
    .base_power = 65,
    .description = (pchar*)Thunder_Fang_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_BITE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 10,
    },

    {
    /*Ice Fang*/
    .name = _("Ice Fang"),
    .accuracy = 95,
    .base_power = 65,
    .description = (pchar*)Ice_Fang_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_BITE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 10,
    },

    {
    /*Fire Fang*/
    .name = _("Fire Fang"),
    .accuracy = 95,
    .base_power = 65,
    .description = (pchar*)Fire_Fang_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_BITE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 10,
    },

    {
    /*Shadow Sneak*/
    .name = _("Shadow Sneak"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Shadow_Sneak_desc,
    .pp = 30,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Mud Bomb*/
    .name = _("Mud Bomb"),
    .accuracy = 85,
    .base_power = 65,
    .description = (pchar*)Mud_Bomb_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Psycho Cut*/
    .name = _("Psycho Cut"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Psycho_Cut_desc,
    .pp = 20,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Zen Headbutt*/
    .name = _("Zen Headbutt"),
    .accuracy = 90,
    .base_power = 80,
    .description = (pchar*)Zen_Headbutt_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 20,
    },

    {
    /*Mirror Shot*/
    .name = _("Mirror Shot"),
    .accuracy = 85,
    .base_power = 65,
    .description = (pchar*)Mirror_Shot_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Flash Cannon*/
    .name = _("Flash Cannon"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Flash_Cannon_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Rock Climb*/
    .name = _("Rock Climb"),
    .accuracy = 85,
    .base_power = 90,
    .description = (pchar*)Rock_Climb_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Defog*/
    .name = _("Defog"),
    .accuracy = 101,
    .description = (pchar*)Defog_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_AUTHENTIC | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Trick Room*/
    .name = _("Trick Room"),
    .accuracy = 101,
    .description = (pchar*)Trick_Room_desc,
    5,
    -7,
    1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Draco Meteor*/
    .name = _("Draco Meteor"),
    .accuracy = 90,
    .base_power = 130,
    .description = (pchar*)Draco_Meteor_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Discharge*/
    .name = _("Discharge"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Discharge_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Lava Plume*/
    .name = _("Lava Plume"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Lava_Plume_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Leaf Storm*/
    .name = _("Leaf Storm"),
    .accuracy = 90,
    .base_power = 130,
    .description = (pchar*)Leaf_Storm_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Power Whip*/
    .name = _("Power Whip"),
    .accuracy = 85,
    .base_power = 120,
    .description = (pchar*)Power_Whip_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Rock Wrecker*/
    .name = _("Rock Wrecker"),
    .accuracy = 90,
    .base_power = 150,
    .description = (pchar*)Rock_Wrecker_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_RECHARGE | FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Cross Poison*/
    .name = _("Cross Poison"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Cross_Poison_desc,
    .pp = 20,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Gunk Shot*/
    .name = _("Gunk Shot"),
    .accuracy = 80,
    .base_power = 120,
    .description = (pchar*)Gunk_Shot_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Iron Head*/
    .name = _("Iron Head"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Iron_Head_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    /*Magnet Bomb*/
    .name = _("Magnet Bomb"),
    .accuracy = 101,
    .base_power = 60,
    .description = (pchar*)Magnet_Bomb_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Stone Edge*/
    .name = _("Stone Edge"),
    .accuracy = 80,
    .base_power = 100,
    .description = (pchar*)Stone_Edge_desc,
    .pp = 5,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Captivate*/
    .name = _("Captivate"),
    .accuracy = 100,
    .description = (pchar*)Captivate_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Stealth Rock*/
    .name = _("Stealth Rock"),
    .accuracy = 101,
    .description = (pchar*)Stealth_Rock_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_REFLECTABLE,
    .procs = &basic_proc,
    },

    {
    /*Grass Knot*/
    .name = _("Grass Knot"),
    .accuracy = 100,
    .description = (pchar*)Grass_Knot_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Chatter*/
    .name = _("Chatter"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Chatter_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Judgment*/
    .name = _("Judgment"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Judgment_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Bug Bite*/
    .name = _("Bug Bite"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Bug_Bite_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Charge Beam*/
    .name = _("Charge Beam"),
    .accuracy = 90,
    .base_power = 50,
    .description = (pchar*)Charge_Beam_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Wood Hammer*/
    .name = _("Wood Hammer"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Wood_Hammer_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Aqua Jet*/
    .name = _("Aqua Jet"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Aqua_Jet_desc,
    .pp = 20,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Attack Order*/
    .name = _("Attack Order"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Attack_Order_desc,
    .pp = 15,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Defend Order*/
    .name = _("Defend Order"),
    .accuracy = 101,
    .description = (pchar*)Defend_Order_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_BUG,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Heal Order*/
    .name = _("Heal Order"),
    .accuracy = 101,
    .description = (pchar*)Heal_Order_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_SNATCH | FLAG_HEAL,
    .procs = &basic_proc,
    },

    {
    /*Head Smash*/
    .name = _("Head Smash"),
    .accuracy = 80,
    .base_power = 150,
    .description = (pchar*)Head_Smash_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Double Hit*/
    .name = _("Double Hit"),
    .accuracy = 90,
    .base_power = 35,
    .description = (pchar*)Double_Hit_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .multi_hit = {2, 2},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Roar of Time*/
    .name = _("Roar of Time"),
    .accuracy = 90,
    .base_power = 150,
    .description = (pchar*)Roar_of_Time_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_RECHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Spacial Rend*/
    .name = _("Spacial Rend"),
    .accuracy = 95,
    .base_power = 100,
    .description = (pchar*)Spacial_Rend_desc,
    .pp = 5,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Lunar Dance*/
    .name = _("Lunar Dance"),
    .accuracy = 101,
    .description = (pchar*)Lunar_Dance_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_SNATCH | FLAG_HEAL | FLAG_DANCE,
    .procs = &basic_proc,
    },

    {
    /*Crush Grip*/
    .name = _("Crush Grip"),
    .accuracy = 100,
    .description = (pchar*)Crush_Grip_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Magma Storm*/
    .name = _("Magma Storm"),
    .accuracy = 75,
    .base_power = 100,
    .description = (pchar*)Magma_Storm_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dark Void*/
    .name = _("Dark Void"),
    .accuracy = 50,
    .description = (pchar*)Dark_Void_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Seed Flare*/
    .name = _("Seed Flare"),
    .accuracy = 85,
    .base_power = 120,
    .description = (pchar*)Seed_Flare_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Ominous Wind*/
    .name = _("Ominous Wind"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Ominous_Wind_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Shadow Force*/
    .name = _("Shadow Force"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Shadow_Force_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_CHARGE | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Hone Claws*/
    .name = _("Hone Claws"),
    .accuracy = 101,
    .description = (pchar*)Hone_Claws_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Wide Guard*/
    .name = _("Wide Guard"),
    .accuracy = 101,
    .description = (pchar*)Wide_Guard_desc,
    .pp = 10,
    .priority = 3,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Guard Split*/
    .name = _("Guard Split"),
    .accuracy = 101,
    .description = (pchar*)Guard_Split_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Power Split*/
    .name = _("Power Split"),
    .accuracy = 101,
    .description = (pchar*)Power_Split_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Wonder Room*/
    .name = _("Wonder Room"),
    .accuracy = 101,
    .description = (pchar*)Wonder_Room_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Psyshock*/
    .name = _("Psyshock"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Psyshock_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Venoshock*/
    .name = _("Venoshock"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Venoshock_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Autotomize*/
    .name = _("Autotomize"),
    .accuracy = 101,
    .description = (pchar*)Autotomize_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_SNATCH,
    .procs = &user_raise_spd_2,
    },

    {
    /*Rage Powder*/
    .name = _("Rage Powder"),
    .accuracy = 101,
    .description = (pchar*)Rage_Powder_desc,
    .pp = 20,
    .priority = 2,
    .category = MOVE_STATUS,
    .type = MTYPE_BUG,
    .m_flags = FLAG_POWDER,
    .procs = &basic_proc,
    },

    {
    /*Telekinesis*/
    .name = _("Telekinesis"),
    .accuracy = 101,
    .description = (pchar*)Telekinesis_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_GRAVITY | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Magic Room*/
    .name = _("Magic Room"),
    .accuracy = 101,
    .description = (pchar*)Magic_Room_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Smack Down*/
    .name = _("Smack Down"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*)Smack_Down_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Storm Throw*/
    .name = _("Storm Throw"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Storm_Throw_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Flame Burst*/
    .name = _("Flame Burst"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Flame_Burst_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sludge Wave*/
    .name = _("Sludge Wave"),
    .accuracy = 100,
    .base_power = 95,
    .description = (pchar*)Sludge_Wave_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Quiver Dance*/
    .name = _("Quiver Dance"),
    .accuracy = 101,
    .description = (pchar*)Quiver_Dance_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_BUG,
    .m_flags = FLAG_SNATCH | FLAG_DANCE,
    .procs = &basic_proc,
    },

    {
    /*Heavy Slam*/
    .name = _("Heavy Slam"),
    .accuracy = 100,
    .description = (pchar*)Heavy_Slam_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Synchronoise*/
    .name = _("Synchronoise"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Synchronoise_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Electro Ball*/
    .name = _("Electro Ball"),
    .accuracy = 100,
    .description = (pchar*)Electro_Ball_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Soak*/
    .name = _("Soak"),
    .accuracy = 100,
    .description = (pchar*)Soak_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_WATER,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_effect_cb = soak_on_effect,
    },

    {
    /*Flame Charge*/
    .name = _("Flame Charge"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*)Flame_Charge_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Coil*/
    .name = _("Coil"),
    .accuracy = 101,
    .description = (pchar*)Coil_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_POISON,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Low Sweep*/
    .name = _("Low Sweep"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Low_Sweep_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Acid Spray*/
    .name = _("Acid Spray"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Acid_Spray_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Foul Play*/
    .name = _("Foul Play"),
    .accuracy = 100,
    .base_power = 95,
    .description = (pchar*)Foul_Play_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Simple Beam*/
    .name = _("Simple Beam"),
    .accuracy = 100,
    .description = (pchar*)Simple_Beam_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Entrainment*/
    .name = _("Entrainment"),
    .accuracy = 100,
    .description = (pchar*)Entrainment_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*After You*/
    .name = _("After You"),
    .accuracy = 101,
    .description = (pchar*)After_You_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    /*Round*/
    .name = _("Round"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Round_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Echoed Voice*/
    .name = _("Echoed Voice"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Echoed_Voice_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Chip Away*/
    .name = _("Chip Away"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Chip_Away_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Clear Smog*/
    .name = _("Clear Smog"),
    .accuracy = 101,
    .base_power = 50,
    .description = (pchar*)Clear_Smog_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_effect_cb = clear_smog_effect,
    },

    {
    /*Stored Power*/
    .name = _("Stored Power"),
    .accuracy = 100,
    .base_power = 20,
    .description = (pchar*)Stored_Power_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Quick Guard*/
    .name = _("Quick Guard"),
    .accuracy = 101,
    .description = (pchar*)Quick_Guard_desc,
    .pp = 15,
    .priority = 3,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Ally Switch*/
    .name = _("Ally Switch"),
    .accuracy = 101,
    .description = (pchar*)Ally_Switch_desc,
    .pp = 15,
    .priority = 2,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Scald*/
    .name = _("Scald"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Scald_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_DEFROST | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Shell Smash*/
    .name = _("Shell Smash"),
    .accuracy = 101,
    .description = (pchar*)Shell_Smash_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &shell_smash_procs,
    },

    {
    /*Heal Pulse*/
    .name = _("Heal Pulse"),
    .accuracy = 101,
    .description = (pchar*)Heal_Pulse_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_PULSE | FLAG_HEAL | FLAG_PROTECT | FLAG_REFLECTABLE | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Hex*/
    .name = _("Hex"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Hex_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sky Drop*/
    .name = _("Sky Drop"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Sky_Drop_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_GRAVITY | FLAG_CHARGE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Shift Gear*/
    .name = _("Shift Gear"),
    .accuracy = 101,
    .description = (pchar*)Shift_Gear_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_SNATCH,
    .procs = &shift_gear_procs,
    },

    {
    /*Circle Throw*/
    .name = _("Circle Throw"),
    .accuracy = 90,
    .base_power = 60,
    .description = (pchar*)Circle_Throw_desc,
    10,
    -6,
    1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Incinerate*/
    .name = _("Incinerate"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Incinerate_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Quash*/
    .name = _("Quash"),
    .accuracy = 100,
    .description = (pchar*)Quash_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Acrobatics*/
    .name = _("Acrobatics"),
    .accuracy = 100,
    .base_power = 55,
    .description = (pchar*)Acrobatics_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_base_power_move = acrobatics_on_base_power_move,
    },

    {
    /*Reflect Type*/
    .name = _("Reflect Type"),
    .accuracy = 101,
    .description = (pchar*)Reflect_Type_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_effect_cb = reflect_type_on_effect,
    },

    {
    /*Retaliate*/
    .name = _("Retaliate"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Retaliate_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Final Gambit*/
    .name = _("Final Gambit"),
    .accuracy = 100,
    .description = (pchar*)Final_Gambit_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Bestow*/
    .name = _("Bestow"),
    .accuracy = 101,
    .description = (pchar*)Bestow_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR,
    .procs = &basic_proc,
    },

    {
    /*Inferno*/
    .name = _("Inferno"),
    .accuracy = 50,
    .base_power = 100,
    .description = (pchar*)Inferno_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Water Pledge*/
    .name = _("Water Pledge"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Water_Pledge_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fire Pledge*/
    .name = _("Fire Pledge"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Fire_Pledge_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Grass Pledge*/
    .name = _("Grass Pledge"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Grass_Pledge_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Volt Switch*/
    .name = _("Volt Switch"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Volt_Switch_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Struggle Bug*/
    .name = _("Struggle Bug"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*)Struggle_Bug_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Bulldoze*/
    .name = _("Bulldoze"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Bulldoze_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Frost Breath*/
    .name = _("Frost Breath"),
    .accuracy = 90,
    .base_power = 60,
    .description = (pchar*)Frost_Breath_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dragon Tail*/
    .name = _("Dragon Tail"),
    .accuracy = 90,
    .base_power = 60,
    .description = (pchar*)Dragon_Tail_desc,
    .pp = 10,
    .priority = -6,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Work Up*/
    .name = _("Work Up"),
    .accuracy = 101,
    .description = (pchar*)Work_Up_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Electroweb*/
    .name = _("Electroweb"),
    .accuracy = 95,
    .base_power = 55,
    .description = (pchar*)Electroweb_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Wild Charge*/
    .name = _("Wild Charge"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Wild_Charge_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Drill Run*/
    .name = _("Drill Run"),
    .accuracy = 95,
    .base_power = 80,
    .description = (pchar*)Drill_Run_desc,
    .pp = 10,
    .crit_ratio = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dual Chop*/
    .name = _("Dual Chop"),
    .accuracy = 90,
    .base_power = 40,
    .description = (pchar*)Dual_Chop_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DRAGON,
    .multi_hit = {2, 2},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Heart Stamp*/
    .name = _("Heart Stamp"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Heart_Stamp_desc,
    .pp = 25,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    /*Horn Leech*/
    .name = _("Horn Leech"),
    .accuracy = 100,
    .base_power = 75,
    .description = (pchar*)Horn_Leech_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_HEAL | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sacred Sword*/
    .name = _("Sacred Sword"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Sacred_Sword_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Razor Shell*/
    .name = _("Razor Shell"),
    .accuracy = 95,
    .base_power = 75,
    .description = (pchar*)Razor_Shell_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Heat Crash*/
    .name = _("Heat Crash"),
    .accuracy = 100,
    .description = (pchar*)Heat_Crash_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Leaf Tornado*/
    .name = _("Leaf Tornado"),
    .accuracy = 90,
    .base_power = 65,
    .description = (pchar*)Leaf_Tornado_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Steamroller*/
    .name = _("Steamroller"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Steamroller_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    /*Cotton Guard*/
    .name = _("Cotton Guard"),
    .accuracy = 101,
    .description = (pchar*)Cotton_Guard_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Night Daze*/
    .name = _("Night Daze"),
    .accuracy = 95,
    .base_power = 85,
    .description = (pchar*)Night_Daze_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Psystrike*/
    .name = _("Psystrike"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Psystrike_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Tail Slap*/
    .name = _("Tail Slap"),
    .accuracy = 85,
    .base_power = 25,
    .description = (pchar*)Tail_Slap_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .multi_hit = {2, 5},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Hurricane*/
    .name = _("Hurricane"),
    .accuracy = 70,
    .base_power = 110,
    .description = (pchar*)Hurricane_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Head Charge*/
    .name = _("Head Charge"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Head_Charge_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Gear Grind*/
    .name = _("Gear Grind"),
    .accuracy = 85,
    .base_power = 50,
    .description = (pchar*)Gear_Grind_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .multi_hit = {2, 2},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Searing Shot*/
    .name = _("Searing Shot"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Searing_Shot_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Techno Blast*/
    .name = _("Techno Blast"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Techno_Blast_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Relic Song*/
    .name = _("Relic Song"),
    .accuracy = 100,
    .base_power = 75,
    .description = (pchar*)Relic_Song_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Secret Sword*/
    .name = _("Secret Sword"),
    .accuracy = 100,
    .base_power = 85,
    .description = (pchar*)Secret_Sword_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Glaciate*/
    .name = _("Glaciate"),
    .accuracy = 95,
    .base_power = 65,
    .description = (pchar*)Glaciate_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Bolt Strike*/
    .name = _("Bolt Strike"),
    .accuracy = 85,
    .base_power = 130,
    .description = (pchar*)Bolt_Strike_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Blue Flare*/
    .name = _("Blue Flare"),
    .accuracy = 85,
    .base_power = 130,
    .description = (pchar*)Blue_Flare_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fiery Dance*/
    .name = _("Fiery Dance"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Fiery_Dance_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_DANCE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Freeze Shock*/
    .name = _("Freeze Shock"),
    .accuracy = 90,
    .base_power = 140,
    .description = (pchar*)Freeze_Shock_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .before_move = freeze_shock_before_move,
    },

    {
    /*Ice Burn*/
    .name = _("Ice Burn"),
    .accuracy = 90,
    .base_power = 140,
    .description = (pchar*)Ice_Burn_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .before_move = ice_burn_before_move,
    },

    {
    /*Snarl*/
    .name = _("Snarl"),
    .accuracy = 95,
    .base_power = 55,
    .description = (pchar*)Snarl_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Icicle Crash*/
    .name = _("Icicle Crash"),
    .accuracy = 90,
    .base_power = 85,
    .description = (pchar*)Icicle_Crash_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    {
    .name = _("V-create"),
    .accuracy = 95,
    .base_power = 180,
    .description = (pchar*)V_create_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fusion Flare*/
    .name = _("Fusion Flare"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Fusion_Flare_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_DEFROST | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fusion Bolt*/
    .name = _("Fusion Bolt"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Fusion_Bolt_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Flying Press*/
    .name = _("Flying Press"),
    .accuracy = 95,
    .base_power = 100,
    .description = (pchar*)Flying_Press_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_GRAVITY | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_modify_move = flying_press_on_modify_move,
    .on_base_power_move = flying_press_on_base_power,
    },

    {
    /*Mat Block*/
    .name = _("Mat Block"),
    .accuracy = 101,
    .description = (pchar*)Mat_Block_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Belch*/
    .name = _("Belch"),
    .accuracy = 90,
    .base_power = 120,
    .description = (pchar*)Belch_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Rototiller*/
    .name = _("Rototiller"),
    .accuracy = 101,
    .description = (pchar*)Rototiller_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sticky Web*/
    .name = _("Sticky Web"),
    .accuracy = 101,
    .description = (pchar*)Sticky_Web_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_BUG,
    .m_flags = FLAG_REFLECTABLE,
    .procs = &basic_proc,
    },

    {
    /*Fell Stinger*/
    .name = _("Fell Stinger"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*)Fell_Stinger_desc,
    .pp = 25,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Phantom Force*/
    .name = _("Phantom Force"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Phantom_Force_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CHARGE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("Trick-Or-Treat"),
    .accuracy = 100,
    .description = (pchar*)Trick_or_Treat_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .on_effect_cb = trick_or_treat_on_effect,
    },

    {
    /*Noble Roar*/
    .name = _("Noble Roar"),
    .accuracy = 100,
    .description = (pchar*)Noble_Roar_desc,
    .pp = 30,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Ion Deluge*/
    .name = _("Ion Deluge"),
    .accuracy = 101,
    .description = (pchar*)Ion_Deluge_desc,
    .pp = 25,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Parabolic Charge*/
    .name = _("Parabolic Charge"),
    .accuracy = 100,
    .base_power = 65,
    .description = (pchar*)Parabolic_Charge_desc,
    .pp = 20,
    .category = MOVE_SPECIAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_HEAL | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("Forest‘s Curse"),
    .accuracy = 100,
    .description = (pchar*)Forests_Curse_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Petal Blizzard*/
    .name = _("Petal Blizzard"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Petal_Blizzard_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("Freeze-Dry"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Freeze_Dry_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Disarming Voice*/
    .name = _("Disarming Voice"),
    .accuracy = 101,
    .base_power = 40,
    .description = (pchar*)Disarming_Voice_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Parting Shot*/
    .name = _("Parting Shot"),
    .accuracy = 100,
    .description = (pchar*)Parting_Shot_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_REFLECTABLE |FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("Topsy-Turvy"),
    .accuracy = 101,
    .description = (pchar*)Topsy_Turvy_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_DARK,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /* Draining Kiss*/
    .name = _("Draining Kiss"),
    .accuracy = 100,
    .base_power = 50,
    .description = (pchar*) Draining_Kiss_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_HEAL | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Crafty Shield*/
    .name = _("Crafty Shield"),
    .accuracy = 101,
    .description = (pchar*)Crafty_Shield_desc,
    .pp = 10,
    .priority = 3,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Flower Shield*/
    .name = _("Flower Shield"),
    .accuracy = 101,
    .description = (pchar*)Flower_Shield_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Grassy Terrain*/
    .name = _("Grassy Terrain"),
    .accuracy = 101,
    .description = (pchar*)Grassy_Terrain_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Misty Terrain*/
    .name = _("Misty Terrain"),
    .accuracy = 101,
    .description = (pchar*)Misty_Terrain_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Electrify*/
    .name = _("Electrify"),
    .accuracy = 101,
    .description = (pchar*)Electrify_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Play Rough*/
    .name = _("Play Rough"),
    .accuracy = 90,
    .base_power = 90,
    .description = (pchar*)Play_Rough_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fairy Wind*/
    .name = _("Fairy Wind"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Fairy_Wind_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Moonblast*/
    .name = _("Moonblast"),
    .accuracy = 100,
    .base_power = 95,
    .description = (pchar*)Moonblast_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Boomburst*/
    .name = _("Boomburst"),
    .accuracy = 100,
    .base_power = 140,
    .description = (pchar*)Boomburst_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SOUND | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fairy Lock*/
    .name = _("Fairy Lock"),
    .accuracy = 101,
    .description = (pchar*)Fairy_Lock_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR,
    .procs = &basic_proc,
    },

    {
    .name = _("King‘s Shield"),
    .accuracy = 101,
    .description = (pchar*)Kings_Shield_desc,
    .pp = 10,
    .priority = 4,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Play Nice*/
    .name = _("Play Nice"),
    .accuracy = 101,
    .description = (pchar*)Play_Nice_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_atk_1,
    },

    {
    /*Confide*/
    .name = _("Confide"),
    .accuracy = 101,
    .description = (pchar*)Confide_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_spAtk_1,
    },

    {
    /*Diamond Storm*/
    .name = _("Diamond Storm"),
    .accuracy = 95,
    .base_power = 100,
    .description = (pchar*)Diamond_Storm_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Steam Eruption*/
    .name = _("Steam Eruption"),
    .accuracy = 95,
    .base_power = 110,
    .description = (pchar*)Steam_Eruption_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_DEFROST | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Hyperspace Hole*/
    .name = _("Hyperspace Hole"),
    .accuracy = 101,
    .base_power = 80,
    .description = (pchar*)Hyperspace_Hole_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR,
    .procs = &basic_proc,
    },

    {
    /*Water Shuriken*/
    .name = _("Water Shuriken"),
    .accuracy = 100,
    .base_power = 15,
    .description = (pchar*)Water_Shuriken_desc,
    .pp = 20,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .multi_hit = {2, 5},
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Mystical Fire*/
    .name = _("Mystical Fire"),
    .accuracy = 100,
    .base_power = 75,
    .description = (pchar*)Mystical_Fire_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Spiky Shield*/
    .name = _("Spiky Shield"),
    .accuracy = 101,
    .description = (pchar*)Spiky_Shield_desc,
    .pp = 10,
    .priority = 4,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Aromatic Mist*/
    .name = _("Aromatic Mist"),
    .accuracy = 101,
    .description = (pchar*)Aromatic_Mist_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    /*Eerie Impulse*/
    .name = _("Eerie Impulse"),
    .accuracy = 100,
    .description = (pchar*)Eerie_Impulse_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_spAtk_2,
    },

    {
    /*Venom Drench*/
    .name = _("Venom Drench"),
    .accuracy = 100,
    .description = (pchar*)Venom_Drench_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_POISON,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Powder*/
    .name = _("Powder"),
    .accuracy = 100,
    .description = (pchar*)Powder_desc,
    .pp = 20,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_POWDER | FLAG_REFLECTABLE | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Geomancy*/
    .name = _("Geomancy"),
    .accuracy = 101,
    .description = (pchar*)Geomancy_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_CHARGE,
    .procs = &basic_proc,
    },

    {
    /*Magnetic Flux*/
    .name = _("Magnetic Flux"),
    .accuracy = 101,
    .description = (pchar*)Magnetic_Flux_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_SNATCH | FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    /*Happy Hour*/
    .name = _("Happy Hour"),
    .accuracy = 101,
    .description = (pchar*)Happy_Hour_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Electric Terrain*/
    .name = _("Electric Terrain"),
    .accuracy = 101,
    .description = (pchar*)Electric_Terrain_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dazzling Gleam*/
    .name = _("Dazzling Gleam"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Dazzling_Gleam_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Celebrate*/
    .name = _("Celebrate"),
    .accuracy = 101,
    .description = (pchar*)Celebrate_desc,
    .pp = 40,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("Baby-Doll Eyes"),
    .accuracy = 100,
    .description = (pchar*)Baby_Doll_Eyes_desc,
    .pp = 30,
    .priority = 1,
    .category = MOVE_STATUS,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &target_lower_atk_1,
    },

    {
    /*Nuzzle*/
    .name = _("Nuzzle"),
    .accuracy = 100,
    .base_power = 20,
    .description = (pchar*)Nuzzle_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &paralyze_100_procs,
    },

    {
    /*Hold Back*/
    .name = _("Hold Back"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Hold_Back_desc,
    .pp = 40,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Infestation*/
    .name = _("Infestation"),
    .accuracy = 100,
    .base_power = 20,
    .description = (pchar*)Infestation_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    .name = _("Power-Up Punch"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Power_Up_Punch_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIGHTING,
    .m_flags = FLAG_PUNCH | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Oblivion Wing*/
    .name = _("Oblivion Wing"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Oblivion_Wing_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_HEAL | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .drain = 75,
    .procs = &basic_proc,
    },

    {
    /*Thousand Arrows*/
    .name = _("Thousand Arrows"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Thousand_Arrows_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Thousand Waves*/
    .name = _("Thousand Waves"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Thousand_Waves_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Hold Hands*/
    .name = _("Hold Hands"),
    .accuracy = 101,
    .description = (pchar*)Hold_Hands_desc,
    .pp = 40,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_AUTHENTIC,
    .procs = &basic_proc,
    },

    {
    .name = _("Land‘s Wrath"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Lands_Wrath_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Light of Ruin*/
    .name = _("Light of Ruin"),
    .accuracy = 90,
    .base_power = 140,
    .description = (pchar*)Light_of_Ruin_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Origin Pulse*/
    .name = _("Origin Pulse"),
    .accuracy = 85,
    .base_power = 110,
    .description = (pchar*)Origin_Pulse_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_PULSE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Precipice Blades*/
    .name = _("Precipice Blades"),
    .accuracy = 85,
    .base_power = 120,
    .description = (pchar*)Precipice_Blades_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dragon Ascent*/
    .name = _("Dragon Ascent"),
    .accuracy = 100,
    .base_power = 120,
    .description = (pchar*)Dragon_Ascent_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &dragon_ascent_procs,
    },

    {
    /*Hyperspace Fury*/
    .name = _("Hyperspace Fury"),
    .accuracy = 101,
    .base_power = 100,
    .description = (pchar*)Hyperspace_Fury_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR,
    .procs = &basic_proc,
    },

    {
    /*Shore Up*/
    .name = _("Shore Up"),
    .accuracy = 101,
    .description = (pchar*)Shore_Up_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_SNATCH | FLAG_HEAL,
    .procs = &basic_proc,
    },

    {
    /*First Impression*/
    .name = _("First Impression"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)First_Impression_desc,
    .pp = 10,
    .priority = 2,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Baneful Bunker*/
    .name = _("Baneful Bunker"),
    .accuracy = 101,
    .description = (pchar*)Baneful_Bunker_desc,
    .pp = 10,
    .priority = 4,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Spirit Shackle*/
    .name = _("Spirit Shackle"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Spirit_Shackle_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Darkest Lariat*/
    .name = _("Darkest Lariat"),
    .accuracy = 100,
    .base_power = 85,
    .description = (pchar*)Darkest_Lariat_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sparkling Aria*/
    .name = _("Sparkling Aria"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Sparkling_Aria_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Ice Hammer*/
    .name = _("Ice Hammer"),
    .accuracy = 90,
    .base_power = 100,
    .description = (pchar*)Ice_Hammer_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_PUNCH | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Floral Healing*/
    .name = _("Floral Healing"),
    .accuracy = 101,
    .description = (pchar*)Floral_Healing_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_HEAL | FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*High Horsepower*/
    .name = _("High Horsepower"),
    .accuracy = 95,
    .base_power = 95,
    .description = (pchar*)High_Horsepower_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Strength Sap*/
    .name = _("Strength Sap"),
    .accuracy = 100,
    .description = (pchar*)Strength_Sap_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_HEAL | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET | FLAG_REFLECTABLE,
    .procs = &basic_proc,
    },

    {
    /*Solar Blade*/
    .name = _("Solar Blade"),
    .accuracy = 100,
    .base_power = 125,
    .description = (pchar*)Solar_Blade_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CHARGE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .before_move = solarblade_before_move,
    },

    {
    /*Leafage*/
    .name = _("Leafage"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Leafage_desc,
    .pp = 40,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Spotlight*/
    .name = _("Spotlight"),
    .accuracy = 101,
    .description = (pchar*)Spotlight_desc,
    .pp = 15,
    .priority = 3,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Toxic Thread*/
    .name = _("Toxic Thread"),
    .accuracy = 100,
    .description = (pchar*)Toxic_Thread_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_POISON,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Laser Focus*/
    .name = _("Laser Focus"),
    .accuracy = 101,
    .description = (pchar*)Laser_Focus_desc,
    .pp = 30,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Gear Up*/
    .name = _("Gear Up"),
    .accuracy = 101,
    .description = (pchar*)Gear_Up_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Throat Chop*/
    .name = _("Throat Chop"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Throat_Chop_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Pollen Puff*/
    .name = _("Pollen Puff"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Pollen_Puff_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_BULLET | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Anchor Shot*/
    .name = _("Anchor Shot"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Anchor_Shot_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Psychic Terrain*/
    .name = _("Psychic Terrain"),
    .accuracy = 101,
    .description = (pchar*)Psychic_Terrain_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Lunge*/
    .name = _("Lunge"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Lunge_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_BUG,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fire Lash*/
    .name = _("Fire Lash"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Fire_Lash_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Power Trip*/
    .name = _("Power Trip"),
    .accuracy = 100,
    .base_power = 20,
    .description = (pchar*)Power_Trip_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Burn Up*/
    .name = _("Burn Up"),
    .accuracy = 100,
    .base_power = 130,
    .description = (pchar*)Burn_Up_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_DEFROST | FLAG_PROTECT | FLAG_MIRROR,
    .procs = &basic_proc,
    },

    {
    /*Speed Swap*/
    .name = _("Speed Swap"),
    .accuracy = 101,
    .description = (pchar*)Speed_Swap_desc,
    .pp = 10,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Smart Strike*/
    .name = _("Smart Strike"),
    .accuracy = 101,
    .base_power = 70,
    .description = (pchar*)Smart_Strike_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Purify*/
    .name = _("Purify"),
    .accuracy = 101,
    .description = (pchar*)Purify_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_POISON,
    .m_flags = FLAG_HEAL | FLAG_REFLECTABLE | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Revelation Dance*/
    .name = _("Revelation Dance"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Revelation_Dance_desc,
    .pp = 15,
    .category = MOVE_SPECIAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_DANCE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Core Enforcer*/
    .name = _("Core Enforcer"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Core_Enforcer_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Trop Kick*/
    .name = _("Trop Kick"),
    .accuracy = 100,
    .base_power = 70,
    .description = (pchar*)Trop_Kick_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GRASS,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Instruct*/
    .name = _("Instruct"),
    .accuracy = 101,
    .description = (pchar*)Instruct_desc,
    .pp = 15,
    .category = MOVE_STATUS,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_AUTHENTIC | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Beak Blast*/
    .name = _("Beak Blast"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Beak_Blast_desc,
    15,
    -3,
    1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FLYING,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Clanging Scales*/
    .name = _("Clanging Scales"),
    .accuracy = 100,
    .base_power = 110,
    .description = (pchar*)Clanging_Scales_desc,
    .pp = 5,
    .category = MOVE_SPECIAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_SOUND | FLAG_AUTHENTIC | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Dragon Hammer*/
    .name = _("Dragon Hammer"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Dragon_Hammer_desc,
    .pp = 15,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DRAGON,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Brutal Swing*/
    .name = _("Brutal Swing"),
    .accuracy = 100,
    .base_power = 60,
    .description = (pchar*)Brutal_Swing_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_DARK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Aurora Veil*/
    .name = _("Aurora Veil"),
    .accuracy = 101,
    .description = (pchar*)Aurora_Veil_desc,
    .pp = 20,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ICE,
    .m_flags = FLAG_SNATCH,
    .procs = &basic_proc,
    },

    {
    /*Shell Trap*/
    .name = _("Shell Trap"),
    .accuracy = 100,
    .base_power = 150,
    .description = (pchar*)Shell_Trap_desc,
    .pp = 5,
    .priority = -3,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FIRE,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Fleur Cannon*/
    .name = _("Fleur Cannon"),
    .accuracy = 90,
    .base_power = 130,
    .description = (pchar*)Fleur_Cannon_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Psychic Fangs*/
    .name = _("Psychic Fangs"),
    .accuracy = 100,
    .base_power = 85,
    .description = (pchar*)Psychic_Fangs_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_BITE | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Stomping Tantrum*/
    .name = _("Stomping Tantrum"),
    .accuracy = 100,
    .base_power = 75,
    .description = (pchar*)Stomping_Tantrum_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GROUND,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Shadow Bone*/
    .name = _("Shadow Bone"),
    .accuracy = 100,
    .base_power = 85,
    .description = (pchar*)Shadow_Bone_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Accelerock*/
    .name = _("Accelerock"),
    .accuracy = 100,
    .base_power = 40,
    .description = (pchar*)Accelerock_desc,
    .pp = 20,
    .priority = 1,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ROCK,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Liquidation*/
    .name = _("Liquidation"),
    .accuracy = 100,
    .base_power = 85,
    .description = (pchar*)Liquidation_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_WATER,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Prismatic Laser*/
    .name = _("Prismatic Laser"),
    .accuracy = 100,
    .base_power = 160,
    .description = (pchar*)Prismatic_Laser_desc,
    .pp = 10,
    .category = MOVE_SPECIAL,
    .type = MTYPE_PSYCHIC,
    .m_flags = FLAG_RECHARGE | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Spectral Thief*/
    .name = _("Spectral Thief"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Spectral_Thief_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_AUTHENTIC | FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Sunsteel Strike*/
    .name = _("Sunsteel Strike"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Sunsteel_Strike_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_STEEL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Moongeist Beam*/
    .name = _("Moongeist Beam"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Moongeist_Beam_desc,
    .pp = 5,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_GHOST,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Tearful Look*/
    .name = _("Tearful Look"),
    .accuracy = 101,
    .description = (pchar*)Tearful_Look_desc,
    .pp = 20,
    .category = MOVE_STATUS,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_REFLECTABLE | FLAG_MIRROR | FLAG_TARGET,
    .procs = &basic_proc,
    },

    {
    /*Zing Zap*/
    .name = _("Zing Zap"),
    .accuracy = 100,
    .base_power = 80,
    .description = (pchar*)Zing_Zap_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    .flinch_chance = 30,
    },

    /* Nature's Madness */
    {
    .name = _("Nature‘s Madness"),
    .accuracy = 90,
    .description = (pchar*)Natures_Madness_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_FAIRY,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    /* Multi-Attack */
    {
    .name = _("Multi-Attack"),
    .accuracy = 100,
    .base_power = 90,
    .description = (pchar*)Multi_Attack_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_NORMAL,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

    /* Plasma Fists */
    {
    .name = _("Plasma Fists"),
    .accuracy = 100,
    .base_power = 100,
    .description = (pchar*)Plasma_Fists_desc,
    .pp = 10,
    .category = MOVE_PHYSICAL,
    .type = MTYPE_ELECTRIC,
    .m_flags = FLAG_CONTACT | FLAG_MIRROR | FLAG_PROTECT | FLAG_TARGET,
    .procs = &basic_proc,
    },

};
