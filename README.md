# rref

A lightweight, header-only rvalue reference type utility for C++11 and later.

rref converts a referenceable type into its rvalue reference form while preserving reference collapsing rules.

## Requirements

- C++11 or later
- CMake 3.16 or later for CMake integration

## Usage

```cpp
#include "rref.h"

rref<int> first = 10;

int number = 20;
rref<int&> second = number;
```

For more examples and API documentation, see [Usage Documentation](docs/usage.md).

## Manual Integration

Download [rref.h](https://github.com/DanielArndt0/rref/blob/main/include/rref.h) from the repository and add it to your project's include directory.

Include the header using `#include "rref.h"`. No separate compilation is required.

## CMake Integration

rref can be integrated directly from GitHub using CMake's `FetchContent` module.

Add the following to your project's `CMakeLists.txt`:

```cmake
include(FetchContent)

FetchContent_Declare(
    rref
    GIT_REPOSITORY https://github.com/DanielArndt0/rref.git
    GIT_TAG v1.0.0
)

FetchContent_MakeAvailable(rref)

target_link_libraries(my_target PRIVATE rref::rref)
```

Replace `my_target` with your application's CMake target.

If you already have the rref source directory inside your CMake project, you can add it instead:

```cmake
add_subdirectory(path/to/rref)
target_link_libraries(my_target PRIVATE rref::rref)
```

rref is header-only and does not require a separately compiled binary.

## Compatibility

rref requires C++11 or later. It has no external dependencies.

## Disclaimer

rref is developed for educational purposes and experimentation with reference collapsing. It is not intended to replace std::add_rvalue_reference.
