set(C_STANDARD 99)
set(C_STANDARD ON)
cmake_minimum_required(VERSION 3.5)

file(GLOB_RECURSE SOURCES
    *.c
)

add_executable(app ${SOURCES})
target_link_libraries (app LINK_PUBLIC applib)