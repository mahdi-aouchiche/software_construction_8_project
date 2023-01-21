cmake_minimum_required(VERSION 3.8.0)
project(CS100_Project VERSION 1.0.0)

add_subdirectory(${CMAKE_BINARY_DIR}/../googletest)

set(CMAKE_CXX_STANDARD 11)

add_executable(unit_tests
    ../src/unit_test.cpp
)

add_executable(my_pizza
    ../src/main.cpp
)

target_link_libraries(unit_tests gtest)
target_compile_definitions(unit_tests PRIVATE gtest_disable_pthreads=ON)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)