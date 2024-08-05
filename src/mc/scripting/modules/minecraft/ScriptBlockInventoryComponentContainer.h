#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // prevent constructor by default
    ScriptBlockInventoryComponentContainer& operator=(ScriptBlockInventoryComponentContainer const&);
    ScriptBlockInventoryComponentContainer(ScriptBlockInventoryComponentContainer const&);
    ScriptBlockInventoryComponentContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBlockInventoryComponentContainer() = default;

    // vIndex: 2
    virtual class Scripting::Result<int> getEmptySlotsCount() const;

    // vIndex: 13
    virtual class Container* _tryGetContainer() const;

    // vIndex: 14
    virtual class ItemContext _getItemContext(int slot) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
