cmake_minimum_required(VERSION 3.14)
project(trees C)

set(CMAKE_C_STANDARD 99)

add_executable(trees main.c tree.h tree.c)