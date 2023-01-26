/**
 * @file  ZipPackAccessStrategyOwningFileAccess.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "ZipPackAccessStrategy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ZipPackAccessStrategyOwningFileAccess.
 *
 */
class ZipPackAccessStrategyOwningFileAccess : public ZipPackAccessStrategy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZIPPACKACCESSSTRATEGYOWNINGFILEACCESS
public:
    class ZipPackAccessStrategyOwningFileAccess& operator=(class ZipPackAccessStrategyOwningFileAccess const &) = delete;
    ZipPackAccessStrategyOwningFileAccess(class ZipPackAccessStrategyOwningFileAccess const &) = delete;
    ZipPackAccessStrategyOwningFileAccess() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   430074011
     */
    virtual ~ZipPackAccessStrategyOwningFileAccess();
    /**
     * @symbol ??0ZipPackAccessStrategyOwningFileAccess@@QEAA@V?$shared_ptr@VIFileAccess@@@std@@AEBVResourceLocation@@AEBVPath@Core@@@Z
     * @hash   -1873822533
     */
    MCAPI ZipPackAccessStrategyOwningFileAccess(class std::shared_ptr<class IFileAccess>, class ResourceLocation const &, class Core::Path const &);

};