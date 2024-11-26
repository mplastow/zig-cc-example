// zig-cpp-example - main.cpp

#include <print>

// Dependencies
#include <lib.hpp>

int main(int argc, char** argv)
{
    // code goes here

    std::println("factorial(5) = {}", lib::factorial(5));

    return 0;
}