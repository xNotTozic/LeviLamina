/**
 * @file  MonumentBuilding.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MonumentBuilding.
 *
 */
class MonumentBuilding : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONUMENTBUILDING
public:
    class MonumentBuilding& operator=(class MonumentBuilding const &) = delete;
    MonumentBuilding(class MonumentBuilding const &) = delete;
    MonumentBuilding() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1760341349
     */
    virtual ~MonumentBuilding();
    /**
     * @vftbl  2
     * @symbol ?getType@MonumentBuilding@@UEBA?AW4StructurePieceType@@XZ
     * @hash   -1977235840
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol ?postProcess@MonumentBuilding@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   2091687736
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  5
     * @symbol ?postProcessMobsAt@MonumentBuilding@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -655445852
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ??0MonumentBuilding@@QEAA@AEAVRandom@@FHHAEAH@Z
     * @hash   1187914740
     */
    MCAPI MonumentBuilding(class Random &, short, int, int, int &);

//private:
    /**
     * @symbol ?generateEntranceArchs@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1645393478
     */
    MCAPI void generateEntranceArchs(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateEntranceWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   317883159
     */
    MCAPI void generateEntranceWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateLowerWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -2052200218
     */
    MCAPI void generateLowerWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateMiddleWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1177328296
     */
    MCAPI void generateMiddleWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateRoofPiece@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   1802239991
     */
    MCAPI void generateRoofPiece(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateRoomGraph@MonumentBuilding@@AEAA?AV?$vector@V?$shared_ptr@VRoomDefinition@@@std@@V?$allocator@V?$shared_ptr@VRoomDefinition@@@std@@@2@@std@@AEAVRandom@@@Z
     * @hash   -1114625063
     */
    MCAPI std::vector<class std::shared_ptr<class RoomDefinition>> generateRoomGraph(class Random &);
    /**
     * @symbol ?generateUpperWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1536538155
     */
    MCAPI void generateUpperWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?generateWing@MonumentBuilding@@AEAAX_NHAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1419900063
     */
    MCAPI void generateWing(bool, int, class BlockSource &, class Random &, class BoundingBox const &);

private:

};