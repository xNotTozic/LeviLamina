/**
 * @file  LegacyChunkStorage.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyChunkStorage.
 *
 */
class LegacyChunkStorage : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYCHUNKSTORAGE
public:
    class LegacyChunkStorage& operator=(class LegacyChunkStorage const &) = delete;
    LegacyChunkStorage(class LegacyChunkStorage const &) = delete;
    LegacyChunkStorage() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   123097601
     */
    virtual ~LegacyChunkStorage();
    /**
     * @vftbl  11
     * @symbol ?loadChunk@LegacyChunkStorage@@UEAAXAEAVLevelChunk@@_N@Z
     * @hash   -48849528
     */
    virtual void loadChunk(class LevelChunk &, bool);
    /**
     * @vftbl  13
     * @symbol ?saveLiveChunk@LegacyChunkStorage@@UEAA_NAEAVLevelChunk@@@Z
     * @hash   -1359672939
     */
    virtual bool saveLiveChunk(class LevelChunk &);
    /**
     * @vftbl  18
     * @symbol ?acquireDiscarded@LegacyChunkStorage@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
     * @hash   255599981
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /**
     * @symbol ??0LegacyChunkStorage@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@AEAVLevelStorage@@W4StorageVersion@@AEAVBiome@@@Z
     * @hash   741761907
     */
    MCAPI LegacyChunkStorage(std::unique_ptr<class ChunkSource>, class LevelStorage &, enum class StorageVersion, class Biome &);

//private:
    /**
     * @symbol ?_isImported@LegacyChunkStorage@@AEAA_NAEBVChunkPos@@@Z
     * @hash   -1045121818
     */
    MCAPI bool _isImported(class ChunkPos const &);
    /**
     * @symbol ?_loadChunk@LegacyChunkStorage@@AEAA_NAEAVLevelChunk@@@Z
     * @hash   -1294604804
     */
    MCAPI bool _loadChunk(class LevelChunk &);
    /**
     * @symbol ?_loadEntities@LegacyChunkStorage@@AEAAXXZ
     * @hash   1008572011
     */
    MCAPI void _loadEntities();
    /**
     * @symbol ?_markChunkAsImported@LegacyChunkStorage@@AEAAXAEBVChunkPos@@@Z
     * @hash   241032870
     */
    MCAPI void _markChunkAsImported(class ChunkPos const &);
    /**
     * @symbol ?_openRegionFile@LegacyChunkStorage@@AEAA_NXZ
     * @hash   1819425928
     */
    MCAPI bool _openRegionFile();

private:

};