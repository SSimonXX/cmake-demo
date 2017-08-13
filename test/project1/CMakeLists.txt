enable_testing()

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

##############
# Unit Tests
##############
add_executable(runUnitTests test_project1.cpp)

# Standard linking to gtest stuff.
target_link_libraries(runUnitTests gtest gtest_main)

# Extra linking for the project.
target_link_libraries(runUnitTests util)

# This is so you can do 'make test' to see all your tests run, instead of
# manually running the executable runUnitTests to see those specific tests.
add_test(NAME that-test-I-made COMMAND runUnitTests)
