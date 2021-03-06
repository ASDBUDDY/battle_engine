#include <pokeagb/pokeagb.h>
#include "moves.h"

/* Basic proc format for moves like tackle */
struct move_procs basic_proc = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's attack 1 stage
struct move_procs target_lower_atk_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {100, 0, 0, 0, 0, 0, 0, 0},
    {-1, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's attack 2 stages
struct move_procs target_lower_atk_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {100, 0, 0, 0, 0, 0, 0, 0},
    {-2, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's defense 1 stage
struct move_procs target_lower_def_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 100, 0, 0, 0, 0, 0, 0},
    {0, -1, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's defense 2 stages
struct move_procs target_lower_def_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 100, 0, 0, 0, 0, 0, 0},
    {0, -2, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's sp. attack 1 stage
struct move_procs target_lower_spAtk_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 100, 0, 0, 0, 0},
    {0, 0, 0, -1, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's sp. attack 2 stages
struct move_procs target_lower_spAtk_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 100, 0, 0, 0, 0},
    {0, 0, 0, -2, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's sp. defense 1 stage
struct move_procs target_lower_spDef_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 100, 0, 0, 0},
    {0, 0, 0, 0, -1, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's sp. defense 2 stages
struct move_procs target_lower_spDef_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 100, 0, 0, 0},
    {0, 0, 0, 0, -2, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's speed 1 stage
struct move_procs target_lower_spd_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 100, 0, 0, 0, 0, 0},
    {0, 0, -1, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's speed 2 stages
struct move_procs target_lower_spd_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 100, 0, 0, 0, 0, 0},
    {0, 0, -2, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's ACCURACY 1 stage
struct move_procs target_lower_acc_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 100, 0, 0},
    {0, 0, 0, 0, 0, -1, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers target's ACCURACY 2 stages
struct move_procs target_lower_acc_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 100, 0, 0},
    {0, 0, 0, 0, 0, -2, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's attack 1 stage
struct move_procs user_lower_atk_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {100, 0, 0, 0, 0, 0, 0, 0},
    {-1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's attack 2 stages
struct move_procs user_lower_atk_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {100, 0, 0, 0, 0, 0, 0, 0},
    {-2, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's defense 1 stage
struct move_procs user_lower_def_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 100, 0, 0, 0, 0, 0, 0},
    {0, -1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's defense 2 stages
struct move_procs user_lower_def_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 100, 0, 0, 0, 0, 0, 0},
    {0, -2, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's sp. attack 1 stage
struct move_procs user_lower_spAtk_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 100, 0, 0, 0, 0},
    {0, 0, 0, -1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's sp. attack 2 stages
struct move_procs user_lower_spAtk_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 100, 0, 0, 0, 0},
    {0, 0, 0, -2, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's sp. defense 1 stage
struct move_procs user_lower_spDef_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 100, 0, 0, 0},
    {0, 0, 0, 0, -1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's sp. defense 2 stages
struct move_procs user_lower_spDef_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 100, 0, 0, 0},
    {0, 0, 0, 0, -2, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's speed 1 stage
struct move_procs user_lower_spd_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 100, 0, 0, 0, 0, 0},
    {0, 0, -1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's speed 2 stages
struct move_procs user_lower_spd_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 100, 0, 0, 0, 0, 0},
    {0, 0, -2, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's ACCURACY 1 stage
struct move_procs user_lower_acc_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 100, 0, 0},
    {0, 0, 0, 0, 0, -1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Lowers user's ACCURACY 2 stages
struct move_procs user_lower_acc_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 100, 0, 0},
    {0, 0, 0, 0, 0, -2, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's attack 1 stage
struct move_procs target_raise_atk_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {100, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's attack 2 stages
struct move_procs target_raise_atk_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {100, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's defense 1 stage
struct move_procs target_raise_def_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 100, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's defense 2 stages
struct move_procs target_raise_def_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 100, 0, 0, 0, 0, 0, 0},
    {0, 2, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's sp. attack 1 stage
struct move_procs target_raise_spAtk_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 100, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's sp. attack 2 stages
struct move_procs target_raise_spAtk_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 100, 0, 0, 0, 0},
    {0, 0, 0, 2, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's sp. defense 1 stage
struct move_procs target_raise_spDef_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 100, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's sp. defense 2 stages
struct move_procs target_raise_spDef_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 100, 0, 0, 0},
    {0, 0, 0, 0, 2, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's speed 1 stage
struct move_procs target_raise_spd_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 100, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's speed 2 stages
struct move_procs target_raise_spd_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 100, 0, 0, 0, 0, 0},
    {0, 0, 2, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's ACCURACY 1 stage
struct move_procs target_raise_acc_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 100, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises target's ACCURACY 2 stages
struct move_procs target_raise_acc_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 100, 0, 0},
    {0, 0, 0, 0, 0, 2, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's attack 1 stage
struct move_procs user_raise_atk_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {100, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's attack 2 stages
struct move_procs user_raise_atk_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {100, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's defense 1 stage
struct move_procs user_raise_def_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 100, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's defense 2 stages
struct move_procs user_raise_def_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 100, 0, 0, 0, 0, 0, 0},
    {0, 2, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's sp. attack 1 stage
struct move_procs user_raise_spAtk_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 100, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's sp. attack 2 stages
struct move_procs user_raise_spAtk_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 100, 0, 0, 0, 0},
    {0, 0, 0, 2, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's sp. defense 1 stage
struct move_procs user_raise_spDef_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 100, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's sp. defense 2 stages
struct move_procs user_raise_spDef_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 100, 0, 0, 0},
    {0, 0, 0, 0, 2, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's speed 1 stage
struct move_procs user_raise_spd_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 100, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's speed 2 stages
struct move_procs user_raise_spd_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 100, 0, 0, 0, 0, 0},
    {0, 0, 2, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's ACCURACY 1 stage
struct move_procs user_raise_acc_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 100, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's ACCURACY 2 stages
struct move_procs user_raise_acc_2 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 100, 0, 0},
    {0, 0, 0, 0, 0, 2, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//Raises user's evasiveness 1 stage
struct move_procs user_raise_evn_1 = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 100, 0},
    {0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//poison sting, sludge (30%)
struct move_procs poison_30_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_POISON,
    0,
    30,
};

//smog (40%)
struct move_procs poison_40_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_POISON,
    0,
    40,
};

// posion 20
struct move_procs poison_20_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_POISON,
    0,
    20,
};

// Sing
struct move_procs sing_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_SLEEP,
    0,
    100,
};

// Supersonic
struct move_procs supersonic_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_CONFUSION,
    0,
    100,
};

// 10% Burn: Ember, Fire Blast
struct move_procs burn_10_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_BURN,
    0,
    10,
};

// 10% Freeze: Ice Beam
struct move_procs freeze_10_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_FREEZE,
    0,
    10,
};

// 10% Confuse: Psybeam
struct move_procs confuse_10_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_CONFUSION,
    0,
    10,
};

// 100% Confuse
struct move_procs confuse_100_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_CONFUSION,
    0,
    100,
};

// Shell Smash
struct move_procs shell_smash_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {100, 100, 100, 100, 100, 0, 0, 0},
    {2, -1, 2, 2, -1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

// Dragon Ascent
struct move_procs dragon_ascent_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 100, 0, 0, 100, 0, 0, 0},
    {0, -1, 0, 0, -1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

// Shift Gear
struct move_procs shift_gear_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {100, 0, 100, 0, 0, 0, 0, 0},
    {1, 0, 2, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

// Paralyze 100%
struct move_procs paralyze_100_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_PARALYZE,
    0,
    100,
};


// Bubble Beam
struct move_procs bubble_beam_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 10, 0, 0, 0, 0, 0},
    {0, 0, -1, 0, 0, 0, 0, 0},
	AILMENT_NONE,
	AILMENT_NONE,
	0,
	0,
};

// Aurora Beam
struct move_procs aurora_beam_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
	{10, 0, 0, 0, 0, 0, 0, 0},
    {-1, 0, 0, 0, 0, 0, 0, 0},
	AILMENT_NONE,
	AILMENT_NONE,
	0,
	0,
};

// Shadow ball
struct move_procs shadow_ball_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 20, 0, 0, 0},
    {0, 0, 0, 0, -1, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

//100% poison
struct move_procs poison_100_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_POISON,
    0,
    100,
};

//10% Paralyze
struct move_procs paralyze_10_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_PARALYZE,
    0,
    10,
};

//30% Paralyze
struct move_procs paralyze_30_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_PARALYZE,
    0,
    30,
};

//Toxic
struct move_procs toxic_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_BAD_POISON,
    0,
    100,
};

//Psychic spD drop
struct move_procs psychic_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 10, 0, 0, 0},
    {0, 0, 0, 0, -1, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_NONE,
    0,
    0,
};

// 20% Confuse
struct move_procs confuse_20_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_NONE,
    AILMENT_CONFUSION,
    0,
    20,
};

// user sleep
struct move_procs rest_procs = {
    // Atk, Def, Spd, SpA, SpD, Acc, Evn, Crt
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    AILMENT_SLEEP,
    AILMENT_NONE,
    100,
    0,
};

