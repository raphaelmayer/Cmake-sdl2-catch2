cmake_minimum_required(VERSION 3.14) # FetchContent_MakeAvailable requires 3.14

project(
  MyApp
  VERSION 0.1
  DESCRIPTION "A C++ project configured with CMake, SDL2 and Catch2"
  LANGUAGES CXX)

# set any variables and settings here
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE) 
set_property(GLOBAL PROPERTY USE_FOLDERS ON) # support folders in IDEs
# This allows us to include CMake modules located in `./cmake`.
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

# include(clang-format)
include(FetchContent)
include(CTest)

# add dependencies here
FetchContent_Declare(
  SDL2
  URL https://libsdl.org/release/SDL2-2.0.16.tar.gz
)
FetchContent_MakeAvailable(SDL2)
set(SDL_LIBRARIES ${SDL_LIBRARIES} SDL2main SDL2-static)

# add sub-projects here
add_subdirectory(apps)
add_subdirectory(src)
add_subdirectory(tests)
