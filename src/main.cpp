// zig-cpp-example - main.cpp

// Local dependency headers
#include <lib.hpp>

// C++ Standard Library
#include <format>
#include <print>

int main(int argc, char** argv)
{
    // code goes here

    std::println("factorial(5) = {}", lib::factorial(5));

    return 0;
}