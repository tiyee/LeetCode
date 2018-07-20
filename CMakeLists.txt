cmake_minimum_required(VERSION 2.8)

project(leetcode)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_compile_options(-std=c++11)
FILE(GLOB SRC_LIST "src/maximum-product-subarray/solution.cpp")
FILE(GLOB SRC_LIST "src/single-element-in-a-sorted-array/solution.cpp")

add_executable(${PROJECT_NAME} "main.cpp"  ${SRC_LIST})

