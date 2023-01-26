/**
 * @file  AnimationScriptsDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AnimationScriptsDescription.
 *
 */
class AnimationScriptsDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONSCRIPTSDESCRIPTION
public:
    class AnimationScriptsDescription& operator=(class AnimationScriptsDescription const &) = delete;
    AnimationScriptsDescription(class AnimationScriptsDescription const &) = delete;
    AnimationScriptsDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@AnimationScriptsDescription@@UEBAPEBDXZ
     * @hash   1716796940
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   -2145661498
     */
    virtual ~AnimationScriptsDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@AnimationScriptsDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   1509945463
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@AnimationScriptsDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   923825329
     */
    virtual void serializeData(class Json::Value &) const;

};