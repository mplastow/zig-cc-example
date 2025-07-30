## Description
This project contains an example of a C++23 project using the Zig build system inside VSCode.
- Contains an example directory layout with dummy `.keep` files
- Includes an example first-party library (lib.cpp) that implements a single factorial() function
- clangd, clang-format, clang-tidy for linting, formatting, and checking code
- Builds using `zig cc` via a `build.zig` file containing tons of compiler flags for safety

## Usage
- Copy everything except .zig-cache and .zig-out into a new directory to start a C++ project.
- Modify folder structure and .gitignore if necessary (e.g. `assets`, `build`, `data`, `external`)
- (If necessary) Modify or remove `lib.cpp` and `lib.hpp` along with the corresponding target in `zig.build`
- Run `zig build ccjson` to generate `compile_commands.json` for use with clangd
- Press F5 in VSCode to build and launch the program inside a debugger to make sure nothing is broken
    - Or just run `zig build`