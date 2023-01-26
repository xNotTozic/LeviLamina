/**
 * @file  ActorDefinitionTrigger.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionTrigger.
 *
 */
class ActorDefinitionTrigger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONTRIGGER
public:
    ActorDefinitionTrigger(class ActorDefinitionTrigger const &) = delete;
    ActorDefinitionTrigger() = delete;
#endif

public:
    /**
     * @symbol ??0ActorDefinitionTrigger@@QEAA@$$QEAV0@@Z
     * @hash   -1821006855
     */
    MCAPI ActorDefinitionTrigger(class ActorDefinitionTrigger &&);
    /**
     * @symbol ?canTrigger@ActorDefinitionTrigger@@QEBA_NAEBVActor@@AEBVVariantParameterList@@@Z
     * @hash   -1469095224
     */
    MCAPI bool canTrigger(class Actor const &, class VariantParameterList const &) const;
    /**
     * @symbol ??4ActorDefinitionTrigger@@QEAAAEAV0@AEBV0@@Z
     * @hash   1014920020
     */
    MCAPI class ActorDefinitionTrigger & operator=(class ActorDefinitionTrigger const &);
    /**
     * @symbol ??4ActorDefinitionTrigger@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   1486957916
     */
    MCAPI class ActorDefinitionTrigger & operator=(class ActorDefinitionTrigger &&);
    /**
     * @symbol ??1ActorDefinitionTrigger@@QEAA@XZ
     * @hash   2055769354
     */
    MCAPI ~ActorDefinitionTrigger();

};