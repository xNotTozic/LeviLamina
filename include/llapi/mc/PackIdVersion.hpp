/**
 * @file  PackIdVersion.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "SemVersion.hpp"
#include "ResourcePack.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC structure PackIdVersion.
 *
 */
struct PackIdVersion {

#define AFTER_EXTRA
// Add Member There
public:
    mce::UUID mUUID;
    SemVersion mVersion;
    PackType mType;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKIDVERSION
public:
    struct PackIdVersion& operator=(struct PackIdVersion const &) = delete;
#endif

public:
    /**
     * @symbol ??0PackIdVersion@@QEAA@XZ
     * @hash   1746203520
     */
    MCAPI PackIdVersion();
    /**
     * @symbol ??0PackIdVersion@@QEAA@AEBVUUID@mce@@AEBVSemVersion@@W4PackType@@@Z
     * @hash   -74408375
     */
    MCAPI PackIdVersion(class mce::UUID const &, class SemVersion const &, enum class PackType);
    /**
     * @symbol ??0PackIdVersion@@QEAA@AEBU0@@Z
     * @hash   241318869
     */
    MCAPI PackIdVersion(struct PackIdVersion const &);
    /**
     * @symbol ?asString@PackIdVersion@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -744773594
     */
    MCAPI std::string asString() const;
    /**
     * @symbol ??9PackIdVersion@@QEBA_NAEBU0@@Z
     * @hash   -222773780
     */
    MCAPI bool operator!=(struct PackIdVersion const &) const;
    /**
     * @symbol ??MPackIdVersion@@QEBA_NAEBU0@@Z
     * @hash   -1021878776
     */
    MCAPI bool operator<(struct PackIdVersion const &) const;
    /**
     * @symbol ??4PackIdVersion@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   -1489326296
     */
    MCAPI struct PackIdVersion & operator=(struct PackIdVersion &&);
    /**
     * @symbol ??8PackIdVersion@@QEBA_NAEBU0@@Z
     * @hash   -1493335929
     */
    MCAPI bool operator==(struct PackIdVersion const &) const;
    /**
     * @symbol ?satisfies@PackIdVersion@@QEBA_NAEBU1@@Z
     * @hash   -1182267186
     */
    MCAPI bool satisfies(struct PackIdVersion const &) const;
    /**
     * @symbol ??1PackIdVersion@@QEAA@XZ
     * @hash   1617546576
     */
    MCAPI ~PackIdVersion();

};