// zig-cpp-example - main.cpp

// C++ Standard Library
#include <format>
#include <print>

// External headers
// #include <None!>

// Internal headers
#include <factorial.hpp>

constexpr int N_FACTORIAL {5};

auto main(/*int argc , char* argv[]*/) -> int
{
    std::println("factorial({}) = {}", N_FACTORIAL, fac::factorial(N_FACTORIAL));

    return 0;
}