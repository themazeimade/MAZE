cmake_minimum_required(VERSION 3.2)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
project(MazeGenerator)

add_executable(MazeGen main.cpp mazegen.h mazegen.cpp )



