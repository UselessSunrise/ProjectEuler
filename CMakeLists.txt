cmake_minimum_required(VERSION 3.7)
project(ProjectEuler)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES task_010/main.c)
set(SOURCE_FILES task_011/main.c)
add_executable(ProjectEuler ${SOURCE_FILES})