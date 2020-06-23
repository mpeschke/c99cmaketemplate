set(C_STANDARD 99)
set(C_STANDARD ON)
cmake_minimum_required(VERSION 3.5)

file(GLOB_RECURSE SOURCESLIB
    *.h
    *.c
)

add_library(applib SHARED ${SOURCESLIB})
set_target_properties(applib PROPERTIES SOVERSION 1)
target_include_directories (applib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})