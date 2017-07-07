#ifndef MOVE_CHAIN_STATES_H_
#define MOVE_CHAIN_STATES_H_

enum RunDecisionStates {
    S_RUN_SWITCH = 0,
    S_RUN_AFTER_SWITCH,
    S_RUN_SWITCH_ALTERNATE_BANK,
    S_RUN_MOVE,
    S_RUN_FAINT,
    S_RUN_MOVE_ALTERNATE_BANK,
    S_SOFT_RESET_BANK,
    S_END_BATTLE,
    
};

enum RunFaintStates {
    S_CHECK_BANK1_FAINT = 0,
    S_CHECK_BANK2_FAINT,
    S_RESOLVE_FAINTS,
};


enum RunFleeStates {
    S_CHECK_FLEEING = 0,
    S_NOT_FLEEING,
    S_TRY_FLEE,    
};


enum RunSwitchStates {
    S_RUN_FLEE = 0,
    S_RUN_SWITCH_CHECKS,
    S_SWITCH_LOGIC,
};

enum RunMoveStates {
    S_BEFORE_MOVE = 0,
    S_BEFORE_MOVE_ABILITY,
    S_CHECK_TARGET_EXISTS,
    S_RUN_MOVE_HIT,
    S_PP_REDUCTION,
};

enum MoveHitStates {
    S_MOVE_TRYHIT = 0,
    S_ABILITY_TRYHIT,
    S_GENERAL_TRYHIT,
    S_IMMUNITY_CHECK,
    S_DAMAGE_CALC_AND_APPLY,
    S_HEAL_CALC_AND_APPLY,
    S_STATUS_CHANGE, // no idea what this state is supposed to be doing
    S_MOVE_EFFECT,
    S_RECOIL_APPLY,
    S_DRAIN_APPLY,
    S_SECONDARY_ROLL_CHANCE,
    S_SECONDARY_ON_HIT,
    S_AFTER_MOVE_SECONDARY,
    S_AFTER_MOVE,    
};


#endif /* MOVE_CHAIN_STATES_H_ */
