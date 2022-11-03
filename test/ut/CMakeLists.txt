cmake_minimum_required(VERSION 3.10)

project(at)

include_directories(${CMAKE_SOURCE_DIR}/src/include)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable(${PROJECT_NAME} ${SRC} )
target_link_libraries(${PROJECT_NAME} gtest gtest_main)