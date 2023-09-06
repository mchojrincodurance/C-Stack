cmake_minimum_required(VERSION 3.22.1)
project(stack)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

set(
        SOURCES
        main.cpp
        StringStack.cc
        StringStack.h
)

add_executable(StackTests "${SOURCES}"
        StringStack.cc
        StringStack.h)

target_link_libraries(StackTests gtest_main)

include(GoogleTest)
gtest_discover_tests(StackTests)