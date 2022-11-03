cmake_minimum_required(VERSION 3.10)

project(c_dlc)

include_directories(${CMAKE_SOURCE_DIR}/src/include)
include_directories(${CMAKE_SOURCE_DIR}/src/c_lic/include)
include_directories(${CMAKE_SOURCE_DIR}/third_part)

file(GLOB_RECURSE SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_library(${PROJECT_NAME} STATIC ${SRC})