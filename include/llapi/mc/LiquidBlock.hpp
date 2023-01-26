/**
 * @file  LiquidBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidBlock.
 *
 */
class LiquidBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDBLOCK
public:
    class LiquidBlock& operator=(class LiquidBlock const &) = delete;
    LiquidBlock(class LiquidBlock const &) = delete;
    LiquidBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -418598529
     */
    virtual ~LiquidBlock();
    /**
     * @vftbl  10
     * @symbol ?getAABB@LiquidBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -1260897439
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @hash   -227039124
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -198409973
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -178092511
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -176245469
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -175321948
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -174398427
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -172551385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -171627864
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -170704343
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -169780822
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -149463360
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -148539839
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -145769276
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -144845755
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -143922234
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -142998713
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -142075192
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -141151671
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -92205058
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -91281537
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  62
     * @symbol ?canContainLiquid@LiquidBlock@@UEBA_NXZ
     * @hash   -65865561
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  69
     * @symbol ?checkIsPathable@LiquidBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     * @hash   146575173
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  90
     * @symbol ?mayPick@LiquidBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
     * @hash   -2029126126
     */
    virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   1407411379
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  110
     * @symbol ?handleEntityInside@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@AEAVVec3@@@Z
     * @hash   1211165892
     */
    virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1489898948
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  135
     * @symbol ?getColor@LiquidBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -447380557
     */
    virtual int getColor(class Block const &) const;
    /**
     * @vftbl  137
     * @symbol ?getColorAtPos@LiquidBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   476596676
     */
    virtual int getColorAtPos(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  140
     * @symbol ?onGraphicsModeChanged@LiquidBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
     * @hash   -842037811
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /**
     * @vftbl  151
     * @symbol ?animateTick@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -8229178
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  156
     * @hash   1576709922
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  166
     * @hash   1547586817
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @hash   1548510338
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1549433859
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol ?onPlace@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1566355597
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  185
     * @symbol ?getMapColor@LiquidBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -526258699
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  187
     * @symbol ?getResourceCount@LiquidBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -1011200873
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIQUIDBLOCK
    /**
     * @symbol ?canBeSilkTouched@LiquidBlock@@UEBA_NXZ
     * @hash   -1139060483
     */
    MCVAPI bool canBeSilkTouched() const;
#endif
    /**
     * @symbol ??0LiquidBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     * @hash   1451054136
     */
    MCAPI LiquidBlock(std::string const &, int, class Material const &);
    /**
     * @symbol ?getTickDelay@LiquidBlock@@QEBAHAEAVBlockSource@@@Z
     * @hash   1911015825
     */
    MCAPI int getTickDelay(class BlockSource &) const;
    /**
     * @symbol ?getHeightFromDepth@LiquidBlock@@SAMH@Z
     * @hash   2087258707
     */
    MCAPI static float getHeightFromDepth(int);
    /**
     * @symbol ?handleEntityInside@LiquidBlock@@SAXAEBVIConstBlockSource@@AEBVBlockPos@@AEAVVec3@@AEBVMaterial@@@Z
     * @hash   -832295555
     */
    MCAPI static void handleEntityInside(class IConstBlockSource const &, class BlockPos const &, class Vec3 &, class Material const &);

//protected:
    /**
     * @symbol ?emitFizzParticle@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -858665141
     */
    MCAPI void emitFizzParticle(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?solidify@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1023920720
     */
    MCAPI void solidify(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @symbol ?trySpreadFire@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -848666588
     */
    MCAPI void trySpreadFire(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ?getDepth@LiquidBlock@@KAHAEBVIConstBlockSource@@AEBVBlockPos@@AEBVMaterial@@@Z
     * @hash   565195687
     */
    MCAPI static int getDepth(class IConstBlockSource const &, class BlockPos const &, class Material const &);
    /**
     * @symbol ?getRenderedDepth@LiquidBlock@@KAHAEBVIConstBlockSource@@AEBVBlockPos@@AEBVMaterial@@@Z
     * @hash   991260252
     */
    MCAPI static int getRenderedDepth(class IConstBlockSource const &, class BlockPos const &, class Material const &);

//private:
    /**
     * @symbol ?_solidify@LiquidBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -897113224
     */
    MCAPI void _solidify(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @symbol ?_getFlow@LiquidBlock@@CA?AVVec3@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVMaterial@@@Z
     * @hash   412752641
     */
    MCAPI static class Vec3 _getFlow(class IConstBlockSource const &, class BlockPos const &, class Material const &);

protected:

private:

};