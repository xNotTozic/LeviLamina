#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldTemplateManagerProxy {
public:
    // prevent constructor by default
    WorldTemplateManagerProxy& operator=(WorldTemplateManagerProxy const&);
    WorldTemplateManagerProxy(WorldTemplateManagerProxy const&);
    WorldTemplateManagerProxy();

public:
    // NOLINTBEGIN
    MCAPI explicit WorldTemplateManagerProxy(struct WorldTemplateManagerProxyCallbacks const& callbacks);

    MCAPI ~WorldTemplateManagerProxy();

    // NOLINTEND
};
