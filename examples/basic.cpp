#include "rref.h"

#include <type_traits>

static_assert(std::is_same<rref<int>, int &&>::value, "rvalue reference");
static_assert(std::is_same<rref<int &>, int &>::value, "lvalue reference is preserved");
static_assert(std::is_same<rref<void>, void>::value, "void remains void");

int main()
{
    return 0;
}
