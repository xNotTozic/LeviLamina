/**
 * @file  ClassID.hpp
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
 * @brief MC class ClassID.
 *
 */
class ClassID {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLASSID
public:
    class ClassID& operator=(class ClassID const &) = delete;
    ClassID(class ClassID const &) = delete;
    ClassID() = delete;
#endif

public:

//private:
    /**
     * @symbol ?getNextID@ClassID@@CA_KXZ
     * @hash   1091452339
     */
    MCAPI static unsigned __int64 getNextID();

private:

};