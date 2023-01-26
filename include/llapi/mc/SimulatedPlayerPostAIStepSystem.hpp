/**
 * @file  SimulatedPlayerPostAIStepSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SimulatedPlayerPostAIStepSystem.
 *
 */
class SimulatedPlayerPostAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATEDPLAYERPOSTAISTEPSYSTEM
public:
    class SimulatedPlayerPostAIStepSystem& operator=(class SimulatedPlayerPostAIStepSystem const &) = delete;
    SimulatedPlayerPostAIStepSystem(class SimulatedPlayerPostAIStepSystem const &) = delete;
    SimulatedPlayerPostAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@SimulatedPlayerPostAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -886136234
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doSimulatedPlayerPostAIStepSystem@SimulatedPlayerPostAIStepSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
     * @hash   1204348605
     */
    MCAPI static void _doSimulatedPlayerPostAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};