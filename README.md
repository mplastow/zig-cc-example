## Description
This project contains an example of a C++ project that has the following features:
- Structures all files according to my current best-practices structure and layout
    - main() with cli flag input
    - File names (specifically, .hpp instead of .h)
    - Directory layout
    - `type_aliases.hpp`: contains `using` aliases for `u8`, `i32`, `U64MAX`, ...
    - Namespacing
    - Header guards
    - Dependencies declared only where needed (multiple t.u.'s instead of a s.t.u.b.)
- Includes an example first-party library (lib.cpp) that implements a single factorial() function
- Formats any C++ code or header file using WebKit style
- IntelliSense uses clang++-21 with `-stdlib=libc++`
- Builds with F5 key in VS Code
- Uses `zig cc` via `build.zig` using `std=C++23` and tons of flags for safety

# Todo
- Write a sample use of std::pmr with allocator-aware types
- Build separate translation units to take full advantage of `zig cc` caching
- Integrate the Tracy profiler and the Gtest framework (and any other third-party libraries in current use)

## Usage
- Copy everything except .zig-cache and .zig-out into a new directory to start a C++ project.
- Build with F5 in VS Code to make sure nothing is broken (: