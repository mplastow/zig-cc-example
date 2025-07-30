// lib.cpp -- zig-cc-example

// A demo library containing only factorial()

// Companion header
#include <lib.hpp>

// C++ Standard Library
#include <cstdint>

// External dependency headers
// #include <None!>

// Internal dependency headers

namespace lib {

auto factorial(int n) -> int64_t // NOLINT
{
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

} // namespace lib