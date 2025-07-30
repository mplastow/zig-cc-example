// zig-cpp-example - main.cpp

// C++ Standard Library
#include <format>
#include <print>

// External dependency headers
// #include <None!>

// Internal dependency headers
#include <lib.hpp>

constexpr int FACTORIAL {5};

int main(/* int argc, char* argv[] */)
{
    // code goes here

    std::println("factorial(5) = {}", lib::factorial(FACTORIAL));

    return 0;
}