add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ../include)

target_link_libraries(${PROJECT_NAME} PRIVATE ${SDL_LIBRARIES})

# We enable some warnings, although only if we know the compiler actually
# supports these flags. The `$<...>` syntax is a *generator expression*.
target_compile_options(${PROJECT_NAME} PRIVATE
  $<$<CXX_COMPILER_ID:GNU,Clang,AppleClang>:-Wall -Wextra -pedantic>)