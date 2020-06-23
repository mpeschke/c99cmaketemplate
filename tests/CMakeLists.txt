set(C_STANDARD 99)
set(C_STANDARD ON)
cmake_minimum_required(VERSION 3.5)

include_directories(../lib)

file(GLOB_RECURSE UNITTESTSOURCES
    *.h
    *.c
)

add_executable(
    App-Unit-Tests
    ${UNITTESTSOURCES}
    )
target_link_libraries (App-Unit-Tests LINK_PUBLIC applib)

# Template to create unit tests for the applib
function(do_test testname target testid arg1 result)
  add_test(NAME ${testname}_${testid} COMMAND ${target} ${arg1})
  set_tests_properties(${testname}_${testid}
    PROPERTIES PASS_REGULAR_EXPRESSION ${result}
    )
endfunction(do_test)

do_test("unittest_function" App-Unit-Tests 1 "1" "Function function1 expected to return 0")