// NOTE(matt): would be nice to replace this with <print> once I can get
//              system headers for g++-13 (-14?)
#include <iostream>

// Dependencies
#include <lib.hpp>

int main(int argc, char** argv)
{
    // code goes here

    std::cout << "factorial(5) = " << lib::factorial(5) << std::endl;

    return 0;
}