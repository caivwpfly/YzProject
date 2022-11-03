cmake_minimum_required(VERSION 3.10)

project(test_lic)

include_directories(${CMAKE_SOURCE_DIR}/test/include)
include_directories(${CMAKE_SOURCE_DIR}/test/stub/alm)
include_directories(${CMAKE_SOURCE_DIR}/src/c_lic/include)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)
aux_source_directory(${CMAKE_SOURCE_DIR}/test/stub/alm stub)

add_executable(${PROJECT_NAME} ${SRC} ${stub} )

target_link_libraries(${PROJECT_NAME} gtest gmock gtest_main c_dlc alm)