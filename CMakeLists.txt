cmake_minimum_required(VERSION 3.24)
project(study_csapp C)

set(CMAKE_C_STANDARD 11)

# 指定单个 main 函数c文件调试时使用
add_executable(csapp main.c homework/ch02/virtual-mem.c)
add_executable(virtual-mem homework/ch02/virtual-mem.c)
add_executable(show_bytes homework/ch02/show-bytes.c)
