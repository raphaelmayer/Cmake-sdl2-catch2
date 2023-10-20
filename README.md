# CMake-SDL2-Catch2

This is an example project using CMake, SDL2 and Catch2.

The requirements are:

- CMake 3.14+
- A C++17 compatible compiler
- Git

To configure:

```bash
cmake -S . -B build
```

Add `-GNinja` if you have Ninja.

To build:

```bash
cmake --build build
```

To test (`--target` can be written as `-t` in CMake 3.15+):

```bash
cmake --build build --target test
```

To use an IDE, such as Xcode:

```bash
cmake -S . -B xbuild -GXcode
cmake --open xbuild
```
