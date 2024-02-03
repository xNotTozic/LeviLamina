#pragma once

#include <concepts>
#include <optional>

#include "ll/api/base/Concepts.h"

namespace ll::command {
template <std::default_initializable T>
struct OptionalOffsetGetter;
template <std::default_initializable T>
class Optional {
    friend OptionalOffsetGetter;
    T    mValue{};
    bool hasValue{};

public:

    using value_type = T;

    [[nodiscard]] constexpr Optional() noexcept(std::is_nothrow_default_constructible_v<T>) = default;

    Optional& operator=(Optional&&) noexcept(std::is_nothrow_move_assignable_v<T>)                      = default;
    Optional& operator=(Optional const&) noexcept(std::is_nothrow_copy_assignable_v<T>)                 = default;
    [[nodiscard]] constexpr Optional(Optional&&) noexcept(std::is_nothrow_move_constructible_v<T>)      = default;
    [[nodiscard]] constexpr Optional(Optional const&) noexcept(std::is_nothrow_copy_constructible_v<T>) = default;

    [[nodiscard]] constexpr explicit operator bool() const noexcept { return hasValue; }

    [[nodiscard]] constexpr bool has_value() const noexcept { return hasValue; }

    [[nodiscard]] constexpr T const* as_ptr() const noexcept { return hasValue ? &mValue : nullptr; }
    [[nodiscard]] constexpr T*       as_ptr() noexcept { return hasValue ? &mValue : nullptr; }

    [[nodiscard]] constexpr T const& get() const& {
        if (!has_value()) {
            throw std::runtime_error{"bad Optional access"};
        }
        return mValue;
    }
    [[nodiscard]] constexpr T& get() & {
        if (!has_value()) {
            throw std::runtime_error{"bad Optional access"};
        }
        return mValue;
    }
    [[nodiscard]] constexpr T const&& get() const&& {
        if (!has_value()) {
            throw std::runtime_error{"bad Optional access"};
        }
        return std::move(mValue);
    }
    [[nodiscard]] constexpr T&& get() && {
        if (!has_value()) {
            throw std::runtime_error{"bad Optional access"};
        }
        return std::move(mValue);
    }

    [[nodiscard]] constexpr T const&& value() const&& { return std::move(get()); }
    [[nodiscard]] constexpr T&&       value() && { return std::move(get()); }
    [[nodiscard]] constexpr T const&  value() const& { return get(); }
    [[nodiscard]] constexpr T&        value() & { return get(); }

    [[nodiscard]] constexpr T const&& operator*() const&& { return std::move(get()); }
    [[nodiscard]] constexpr T&&       operator*() && { return std::move(get()); }
    [[nodiscard]] constexpr T const&  operator*() const& { return get(); }
    [[nodiscard]] constexpr T&        operator*() & { return get(); }

    [[nodiscard]] constexpr T const* operator->() const { return &get(); }
    [[nodiscard]] constexpr T*       operator->() { return &get(); }

    [[nodiscard]] constexpr operator T const&&() const&& { return std::move(get()); }
    [[nodiscard]] constexpr operator T&&() && { return std::move(get()); }
    [[nodiscard]] constexpr operator T const&() const& { return get(); }
    [[nodiscard]] constexpr operator T&() & { return get(); }

    [[nodiscard]] constexpr operator T const*() const { return &get(); }
    [[nodiscard]] constexpr operator T*() { return &get(); }

    template <class U>
    [[nodiscard]] constexpr T const& value_or(U const& right) const& {
        if (has_value()) {
            return mValue;
        }
        return static_cast<T const&>(right);
    }
    template <class U>
    [[nodiscard]] constexpr T& value_or(U& right) & {
        if (has_value()) {
            return mValue;
        }
        return static_cast<T&>(right);
    }
    template <class U>
    [[nodiscard]] constexpr T const&& value_or(U const&& right) const&& {
        if (has_value()) {
            return std::move(right);
        }
        return std::move(right);
    }
    template <class U>
    [[nodiscard]] constexpr T&& value_or(U&& right) && {
        if (has_value()) {
            return std::move(right);
        }
        return std::move(right);
    }

    [[nodiscard]] constexpr T const&& value_or_default() const&& { return std::move(value); }
    [[nodiscard]] constexpr T&&       value_or_default() && { return std::move(value); }
    [[nodiscard]] constexpr T const&  value_or_default() const& { return value; }
    [[nodiscard]] constexpr T&        value_or_default() & { return value; }

    template <typename U = std::decay_t<T>>
        requires(std::is_constructible_v<U, T>)
    [[nodiscard]] constexpr std::optional<U> copy_as_optional() const {
        return has_value() ? std::optional<U>(mValue) : std::nullopt;
    }
};

template <class T>
struct remove_optional {
    using type = T;
};
template <class T>
struct remove_optional<Optional<T>> {
    using type = T;
};

template <class T>
using remove_optional_t = remove_optional<T>::type;


template <std::default_initializable T>
struct OptionalOffsetGetter{
    static constexpr auto value = offsetof(Optional<T>, hasValue);
};
} // namespace ll::command