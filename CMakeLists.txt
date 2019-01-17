cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(test-tdd-gtest)

# setup testing
enable_testing() # wtf?

find_package(GTest REQUIRED)
find_library(GMock REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} ${GMOCK_INCLUDE_DIRS})

# create list of files from a glob
file(GLOB GMOCK_TESTS_SOURCE_FILES
                        "tests/*.cc")

add_executable(tests
    ${GMOCK_TESTS_SOURCE_FILES})

# Link test executable against gtest & gtest_main
target_link_libraries(tests gmock_main
    ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)

add_test(tests tests)
add_executable(main main.cpp)
