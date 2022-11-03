
# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_SKIP_RPATH TRUE)

set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} -g -o2 -Wall -Werror -ftrapv")
set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} -Wl,-z,relro -Wl,-z,now")

# 增加覆盖率
set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage -no-pie")


# 增加子目录
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(third_part)
