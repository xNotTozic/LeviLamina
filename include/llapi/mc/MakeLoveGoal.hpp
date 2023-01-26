/**
 * @file  MakeLoveGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MakeLoveGoal.
 *
 */
class MakeLoveGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAKELOVEGOAL
public:
    class MakeLoveGoal& operator=(class MakeLoveGoal const &) = delete;
    MakeLoveGoal(class MakeLoveGoal const &) = delete;
    MakeLoveGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   265960061
     */
    virtual ~MakeLoveGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@MakeLoveGoal@@UEAA_NXZ
     * @hash   1811593501
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@MakeLoveGoal@@UEAA_NXZ
     * @hash   1872717499
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@MakeLoveGoal@@UEAAXXZ
     * @hash   -1759096074
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@MakeLoveGoal@@UEAAXXZ
     * @hash   -1653974426
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@MakeLoveGoal@@UEAAXXZ
     * @hash   -1038979503
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@MakeLoveGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1190264941
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0MakeLoveGoal@@QEAA@AEAVVillagerBase@@@Z
     * @hash   -102804360
     */
    MCAPI MakeLoveGoal(class VillagerBase &);

//private:
    /**
     * @symbol ?_breed@MakeLoveGoal@@AEBAXAEAVVillagerBase@@@Z
     * @hash   659232278
     */
    MCAPI void _breed(class VillagerBase &) const;
    /**
     * @symbol ?_findMate@MakeLoveGoal@@AEBAPEAVVillagerBase@@XZ
     * @hash   1017090188
     */
    MCAPI class VillagerBase * _findMate() const;

private:

};