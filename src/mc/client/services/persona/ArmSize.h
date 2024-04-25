#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class ArmSize {
public:
    // ArmSize inner types define
    enum class Type {};

public:
    // prevent constructor by default
    ArmSize& operator=(ArmSize const&);
    ArmSize(ArmSize const&);
    ArmSize();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getStringFromType@ArmSize@persona@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@12@@Z
    MCAPI static std::string getStringFromType(::persona::ArmSize::Type);

    // symbol: ?getTypeFromString@ArmSize@persona@@SA?AW4Type@12@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI static ::persona::ArmSize::Type getTypeFromString(std::string_view const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_getSizeInfoIteratorByType@ArmSize@persona@@KA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4Type@ArmSize@persona@@USizeInfo@3@@std@@@std@@@std@@@std@@W4Type@12@@Z
    MCAPI static std::_List_const_iterator<
        std::_List_val<std::_List_simple_types<std::pair<::persona::ArmSize::Type const, struct persona::SizeInfo>>>>
        _getSizeInfoIteratorByType(::persona::ArmSize::Type);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mInfoList@ArmSize@persona@@0V?$unordered_map@W4Type@ArmSize@persona@@USizeInfo@3@U?$hash@W4Type@ArmSize@persona@@@std@@U?$equal_to@W4Type@ArmSize@persona@@@6@V?$allocator@U?$pair@$$CBW4Type@ArmSize@persona@@USizeInfo@3@@std@@@6@@std@@B
    MCAPI static std::unordered_map<::persona::ArmSize::Type, struct persona::SizeInfo> const mInfoList;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mInfoList() { return mInfoList; }

    // NOLINTEND
};

}; // namespace persona
