cmake_minimum_required(VERSION 2.8)
project(LeetCode)

add_compile_options(-std=c++17)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
FILE(GLOB SRC_LIST  "src/maximum-depth-of-binary-tree/solution.cpp" )

add_executable(${PROJECT_NAME}    ${SRC_LIST})
