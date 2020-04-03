cmake_minimum_required(VERSION 2.6)

set(GTEST_PROJECT gtestProject)

enable_testing()

message("Gtest Cmake")

find_package(GTest REQUIRED)

# The utils, test, and gtests directories
include_directories("${CMAKE_CURRENT_SOURCE_DIR}")
include_directories("/usr/local/Cellar/gtest/include")
include_directories("/usr/local/Cellar/gtest/lib")

set(HEADERS
  ../UtilConstants.h
  ../AsciiUtils.h
  ../StringUtils_c.h
  ../SortUtils.h
  ../MathUtils.h
  ../SearchUtils.h
  ../DataStructureUtils.h
)

set(SOURCES
  gtestsMain.cpp
  ../StringUtils_c.cpp
  ../SortUtils.cpp
  ../AsciiUtils.cpp
  ../MathUtils.cpp
  ../SearchUtils.cpp
  ../DataStructureUtils.cpp
  StringUtilsCTest.cpp
  SortUtilsTest.cpp
  AsciiUtilsTest.cpp
  MathUtilsTest.cpp
  SearchUtilsTest.cpp
  DataStructureUtilsTest.cpp
)

add_executable(${GTEST_PROJECT} ${SOURCES})
target_link_libraries(${GTEST_PROJECT} PUBLIC
  gtest
  gtest_main
)

add_test(${GTEST_PROJECT} ${GTEST_PROJECT})

