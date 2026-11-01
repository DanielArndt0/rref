#pragma once

namespace rref_detail
{
    template <typename T>
    struct add
    {
        typedef T &&type;
    };

    template <>
    struct add<void>
    {
        typedef void type;
    };

    template <>
    struct add<const void>
    {
        typedef const void type;
    };

    template <>
    struct add<volatile void>
    {
        typedef volatile void type;
    };

    template <>
    struct add<const volatile void>
    {
        typedef const volatile void type;
    };
}

template <typename T>
using rref = typename rref_detail::add<T>::type;
