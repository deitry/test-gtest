cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(test-tdd-gtest)

# setup testing
# enable_testing() # wtf?
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(tests
    tests/test.cc
)

# Link test executable against gtest & gtest_main
target_link_libraries(tests
    ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)

add_executable(main main.cpp)
