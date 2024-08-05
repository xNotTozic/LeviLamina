#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockBreathabilityVersioning {

class BlockBreathability11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockBreathability11910Upgrade& operator=(BlockBreathability11910Upgrade const&);
    BlockBreathability11910Upgrade(BlockBreathability11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockBreathability11910Upgrade() = default;

    // vIndex: 1
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    MCAPI BlockBreathability11910Upgrade();

    // NOLINTEND
};

}; // namespace BlockBreathabilityVersioning
