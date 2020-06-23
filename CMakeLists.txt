set(C_STANDARD 99)
set(C_STANDARD ON)
cmake_minimum_required(VERSION 3.5)

project(app VERSION 1.0.0 DESCRIPTION "app")
add_subdirectory(lib)
add_subdirectory(src)

enable_testing()
add_subdirectory(tests)