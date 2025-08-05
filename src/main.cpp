// zig-cpp-example - main.cpp

// C++ Standard Library
#include <format>
#include <print>

// External dependency headers
// #include <None!>

// Internal dependency headers
#include <factorial.hpp>

constexpr int FACTORIAL {5};

auto main(/*int argc , char* argv[]*/) -> int
{
    std::println("factorial(5) = {}", fac::factorial(FACTORIAL));

    return 0;
}