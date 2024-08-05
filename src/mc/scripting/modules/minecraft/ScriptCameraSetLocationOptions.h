#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraSetLocationOptions {
public:
    // prevent constructor by default
    ScriptCameraSetLocationOptions& operator=(ScriptCameraSetLocationOptions const&);
    ScriptCameraSetLocationOptions(ScriptCameraSetLocationOptions const&);
    ScriptCameraSetLocationOptions();

public:
    // NOLINTBEGIN
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptCameraSetLocationOptions const&) const;

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraSetLocationOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
