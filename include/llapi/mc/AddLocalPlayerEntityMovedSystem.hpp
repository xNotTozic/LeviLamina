/**
 * @file  AddLocalPlayerEntityMovedSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AddLocalPlayerEntityMovedSystem.
 *
 */
class AddLocalPlayerEntityMovedSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDLOCALPLAYERENTITYMOVEDSYSTEM
public:
    class AddLocalPlayerEntityMovedSystem& operator=(class AddLocalPlayerEntityMovedSystem const &) = delete;
    AddLocalPlayerEntityMovedSystem(class AddLocalPlayerEntityMovedSystem const &) = delete;
    AddLocalPlayerEntityMovedSystem() = delete;
#endif

public:
    /**
     * @symbol ?createAddLocalPlayerEntityMovedSystem@AddLocalPlayerEntityMovedSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   737650148
     */
    MCAPI static struct TickingSystemWithInfo createAddLocalPlayerEntityMovedSystem();

};