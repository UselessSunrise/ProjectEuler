cmake_minimum_required(VERSION 3.7)
project(ProjectEuler)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES task_010/task_010.c task_011/task_011.c task_012/task_012.c)

add_executable(ProjectEuler ${SOURCE_FILES} task_010/task_010.c task_011/task_011.c task_012/task_012.c)