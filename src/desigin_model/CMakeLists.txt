cmake_minimum_required(VERSION 3.10)

project(state_model)

include_directories(${CMAKE_SOURCE_DIR}/src/include)
#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/state_model SRC)
#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/decorator_model DE_SRC)

#嵌套包含可编译文件
file(GLOB_RECURSE SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_library(${PROJECT_NAME} STATIC ${SRC})
target_link_libraries(${PROJECT_NAME} pthread)
