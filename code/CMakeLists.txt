# 设置项目名称
project(test1)

cmake_minimum_required(VERSION 3.10)

# set(SOURCES
# basic/List.cpp
# basic/test.cpp
# )



add_executable(myprogram basic/test.cpp basic/List.cpp)

target_include_directories(myprogram PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# cmake .. -G "Unix Makefiles"