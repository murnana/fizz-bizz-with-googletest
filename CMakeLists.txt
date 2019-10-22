cmake_minimum_required(VERSION 3.15)

enable_language(CXX)
set(CMAKE_CXX_STANDARD 14) # C++14...
set(CMAKE_CXX_STANDARD_REQUIRED ON) #...is required...
set(CMAKE_CXX_EXTENSIONS OFF) #...without compiler extensions like gnu++11

# Project Name
project(fizz-bizz-with-googletest CXX)

###############################################################################
# Libraries
###############################################################################
# Google Test Libs
add_subdirectory(${PROJECT_SOURCE_DIR}/lib/googletest)

###############################################################################
# Sources
###############################################################################
file(GLOB PROJECT_SRCS ${PROJECT_SOURCE_DIR}/src/*.cpp)
set(PROJECT_SRC_LIB_NAME ${PROJECT_NAME}_src)
add_library(${PROJECT_SRC_LIB_NAME} STATIC ${PROJECT_SRCS})


###############################################################################
# Test sources
###############################################################################
file(GLOB PROJECT_TEST_SRCS ${PROJECT_SOURCE_DIR}/test/*.cpp)
set(PROJECT_TEST_EXEC_NAME ${PROJECT_NAME}_test)
add_executable(${PROJECT_TEST_EXEC_NAME} ${PROJECT_TEST_SRCS})
target_include_directories(${PROJECT_TEST_EXEC_NAME} PRIVATE
    ${PROJECT_SOURCE_DIR}/src
)
target_link_libraries(${PROJECT_TEST_EXEC_NAME} PRIVATE
    gtest_main
    ${PROJECT_SRC_LIB_NAME}
)
include(GoogleTest)
gtest_add_tests(TARGET ${PROJECT_TEST_EXEC_NAME})
