/**
 * @file  SandFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SandFeature.
 *
 */
class SandFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SANDFEATURE
public:
    class SandFeature& operator=(class SandFeature const &) = delete;
    SandFeature(class SandFeature const &) = delete;
    SandFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   566926880
     */
    virtual ~SandFeature();
    /**
     * @vftbl  3
     * @symbol ?place@SandFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1222959572
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ??0SandFeature@@QEAA@AEBVBlock@@H@Z
     * @hash   2141201446
     */
    MCAPI SandFeature(class Block const &, int);

};