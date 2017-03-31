cmake_minimum_required(VERSION 3.3)
project(composite)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_subdirectory(src)
add_executable(demo ${SOURCE_FILES})

# 添加链接库
target_link_libraries(demo mylib)