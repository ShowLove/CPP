cmake_minimum_required(VERSION 2.6)

# For make-based builds, defines make target named test.
# For Visual Studio builds, defines Visual Studio project named RUN_TESTS.
enable_testing()

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}/../")

message(${PROJECT_SOURCE_DIR})

add_executable(runUnitTests
    cStringUtilsTest.cpp
)
target_link_libraries(runUnitTests gtest gtest_main)