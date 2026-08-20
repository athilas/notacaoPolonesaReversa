cmake_minimum_required(VERSION 4.3)
project(rpn)

set(CMAKE_CXX_STANDARD 20)
include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip)

FetchContent_MakeAvailable(googletest)

add_executable(rpn main.cpp
        lib/Calculo.hpp
        src/Calculo.cpp
        lib/Rpn.hpp
        src/Rpn.cpp)

enable_testing()

add_executable(testes
        tests/CalculoTests.cpp
        src/Calculo.cpp
        tests/RpnTests.cpp
        src/Rpn.cpp)

target_link_libraries(testes
    GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(testes)
