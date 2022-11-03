cmake_minimum_required(VERSION 3.10)

project(dev_upgrade)

include_directories(${CMAKE_SOURCE_DIR}/src/include)
#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

file(GLOB_RECURSE SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_library(${PROJECT_NAME} SHARED ${SRC})