#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class EnchantBookForTradingFunction : public ::LootItemFunction {
public:
    // EnchantBookForTradingFunction inner types declare
    // clang-format off
    struct EnchantmentOption;
    // clang-format on

    // EnchantBookForTradingFunction inner types define
    struct EnchantmentOption {
    public:
        // prevent constructor by default
        EnchantmentOption& operator=(EnchantmentOption const&);
        EnchantmentOption(EnchantmentOption const&);
        EnchantmentOption();

    public:
        // NOLINTBEGIN
        MCAPI ~EnchantmentOption();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    EnchantBookForTradingFunction& operator=(EnchantBookForTradingFunction const&);
    EnchantBookForTradingFunction(EnchantBookForTradingFunction const&);
    EnchantBookForTradingFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnchantBookForTradingFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 2
    virtual int
    apply(class ItemStack& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // vIndex: 4
    virtual int
    apply(class ItemInstance& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    MCAPI static std::unique_ptr<class EnchantBookForTradingFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class EnchantmentInstance _getRandomEnchantInstance(class Random& random) const;

    MCAPI std::optional<class EnchantmentInstance> _trySelectEnchantmentFromOptions(class Random&) const;

    MCAPI static std::optional<struct EnchantBookForTradingFunction::EnchantmentOption>
    _parseEnchantmentOption(class Json::Value const&);

    // NOLINTEND
};
