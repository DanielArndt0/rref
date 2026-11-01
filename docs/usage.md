# rref Usage

`rref<T>` is a C++11 alias template that produces an rvalue reference when the type supports references.

## Transform a Type

```cpp
#include "rref.h"

#include <type_traits>

static_assert(std::is_same<rref<int>, int&&>::value, "rvalue reference");
```

## Reference Collapsing

```cpp
static_assert(std::is_same<rref<int&>, int&>::value, "lvalue reference remains");
static_assert(std::is_same<rref<int&&>, int&&>::value, "rvalue reference remains");
```

## Types Without References

```cpp
static_assert(std::is_same<rref<void>, void>::value, "void remains void");
```

`rref` defines a type alias. It does not move an object or construct a new value.
