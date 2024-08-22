cmake_minimum_required(VERSION 3.24)
project(study_csapp C)

set(CMAKE_C_STANDARD 11)

# 指定单个 main 函数c文件调试时使用
add_executable(hello main.c)
add_executable(virtual-mem1 homework/ch02/virtual-mem1.c)
add_executable(virtual-mem homework/ch02/virtual-mem.c)
add_executable(show_bytes homework/ch02/show-bytes.c)
add_executable(exchange homework/ch03/exchange.c)
#add_executable(mul homework/ch03/mul.c mulstore.c)
add_executable(decompose homework/ch03/decompose.c)







