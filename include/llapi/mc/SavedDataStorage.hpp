/**
 * @file  SavedDataStorage.hpp
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
 * @brief MC class SavedDataStorage.
 *
 */
class SavedDataStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVEDDATASTORAGE
public:
    class SavedDataStorage& operator=(class SavedDataStorage const &) = delete;
    SavedDataStorage(class SavedDataStorage const &) = delete;
    SavedDataStorage() = delete;
#endif

public:
    /**
     * @symbol ??0SavedDataStorage@@QEAA@PEAVLevelStorage@@@Z
     * @hash   -649703334
     */
    MCAPI SavedDataStorage(class LevelStorage *);
    /**
     * @symbol ?loadAndSet@SavedDataStorage@@QEAA_NAEAVSavedData@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2097405454
     */
    MCAPI bool loadAndSet(class SavedData &, std::string const &);
    /**
     * @symbol ?save@SavedDataStorage@@QEAAXXZ
     * @hash   1573111653
     */
    MCAPI void save();
    /**
     * @symbol ?set@SavedDataStorage@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVSavedData@@@Z
     * @hash   -942720175
     */
    MCAPI void set(std::string const &, class SavedData &);

};