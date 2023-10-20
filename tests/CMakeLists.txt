# Testing library
FetchContent_Declare(
  catch
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v2.13.6)
FetchContent_MakeAvailable(catch)

add_executable(test_lib test_lib.cpp)
target_compile_features(test_lib PRIVATE cxx_std_17)
target_link_libraries(test_lib PRIVATE lib Catch2::Catch2)

add_test(NAME test_libtest COMMAND test_lib) # Command can be a target
