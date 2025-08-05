// lib.cpp -- zig-cc-example

// A demo library containing only factorial()

// Corresponding header
#include <factorial.hpp>

// C++ Standard Library
#include <cstdint>

// External dependency headers
// #include <None!>

// Internal dependency headers
// #include <None!>

namespace fac {

auto factorial(int n) -> int64_t // NOLINT (No need to be warned about recursion)
{
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

} // namespace fac