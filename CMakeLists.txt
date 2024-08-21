cmake_minimum_required(VERSION 3.24)
project(study_csapp C)

set(CMAKE_C_STANDARD 11)

# 指定单个 main 函数c文件调试时使用
add_executable(hello main.c)
add_executable(fib1 homework/ch03/fib1.c)
add_executable(add homework/ch03/add.c)
add_executable(virtual-mem1 homework/ch02/virtual-mem1.c)
add_executable(virtual-mem homework/ch02/virtual-mem.c)
add_executable(show_bytes homework/ch02/show-bytes.c)

# course
add_executable(stack course/ch03/stack.c)
