cmake_minimum_required(VERSION 3.5)

PROJECT(APP  CXX C)

#Debug or Release
SET(CMAKE_BUILD_TYPE "Debug") 

# SET(CMAKE_C_COMPILER "g++") 
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")  
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall") 

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR})
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib)

ADD_SUBDIRECTORY(src)

# Options. Turn on with 'cmake -Dtest=ON'.
option(test "Build all tests." OFF) # Makes boolean 'test' available.

################################
# Testing
################################
if (test)

if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

enable_testing()

# This adds another subdirectory, which has 'project(gtest)'.
add_subdirectory(src/third_parts/gtest-1.6.0)

# Include the gtest library. gtest_SOURCE_DIR is available due to
# 'project(gtest)' above.
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_subdirectory(test)

endif()

