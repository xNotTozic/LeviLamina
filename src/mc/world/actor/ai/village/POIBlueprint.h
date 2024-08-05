#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"

struct POIBlueprint {
public:
    // prevent constructor by default
    POIBlueprint& operator=(POIBlueprint const&);
    POIBlueprint(POIBlueprint const&);
    POIBlueprint();

public:
    // NOLINTBEGIN
    MCAPI POIBlueprint(
        std::string name,
        ::POIType   type,
        float       radius,
        bool        useBoundingBox,
        uint64      capacity,
        uint64      weight,
        std::string soundEvent,
        std::string initEvent,
        std::string endEvent
    );

    // NOLINTEND
};
