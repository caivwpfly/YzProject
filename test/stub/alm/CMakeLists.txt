cmake_minimum_required(VERSION 3.10)

project(alm)

include_directories(${CMAKE_SOURCE_DIR}/src/include)

#嵌套包含可编译文件
file(GLOB_RECURSE SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_library(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} pthread)
