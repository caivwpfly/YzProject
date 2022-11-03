cmake_minimum_required(VERSION 3.10)

project(installer_mgr)

include_directories(${CMAKE_SOURCE_DIR}/src/include)
include_directories(${CMAKE_SOURCE_DIR}/src/desigin_model/state_model)
include_directories(${CMAKE_SOURCE_DIR}/src/desigin_model/decorator_model)
include_directories(${CMAKE_SOURCE_DIR}/src/desigin_model/factory_model)
include_directories(${CMAKE_SOURCE_DIR}/src/desigin_model/observer_model)
include_directories(${CMAKE_SOURCE_DIR}/src/template_design/)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} state_model)