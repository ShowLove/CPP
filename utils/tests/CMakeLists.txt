cmake_minimum_required(VERSION 2.6)

set(GTEST_PROJECT gtestProject)

project(${GTEST_PROJECT} C CXX)

set(CMAKE_C_STANDARD 98)
set(CMAKE_CXX_STANDARD 98)

enable_testing()

# The utils, test, and gtests directories
include_directories("${PROJECT_SOURCE_DIR}/../")
include_directories("${PROJECT_SOURCE_DIR}")
include_directories("/usr/local/Cellar/gtest/include")
include_directories("/usr/local/Cellar/gtest/lib")

set(SOURCES
  gtestsMain.cpp
)

add_executable(${GTEST_PROJECT} ${SOURCES})
target_link_libraries(${GTEST_PROJECT} PUBLIC
  gtest
  gtest_main
)

add_test(${GTEST_PROJECT} ${GTEST_PROJECT})

