/*
 * 文心：https://yiyan.baidu.com/chat/4551050783
 * Ask: 编写一个 Linux C 语言程序，打印进程的虚拟地址空间分布，
 *      包含有全局变量， 函数，初始化函数变量， 未初始化的函数变量， 多个函数参数的具体地址
 *
 */
#include <stdio.h>

// 全局变量
int global_var = 10;
char global_char = 'A';

// 用于打印函数参数地址的函数
void printAddressesOfFunctionParameters(int param1, double param2, char param3);

// 打印函数地址函数
void printFunctionAddress();

// 主函数
int main() {
    // 局部变量
    int local_var = 20;
    char local_char = 'B';
    int uninitialized_var;

    // 打印全局变量地址
    printf("Address of global_var: %p\n", (void*)&global_var);
    printf("Address of global_char: %p\n", (void*)&global_char);

    // 打印函数地址
    printf("Address of main function: %p\n", (void*)main);
    printFunctionAddress();

    // 打印局部变量地址
    printf("Address of local_var: %p\n", (void*)&local_var);
    printf("Address of local_char: %p\n", (void*)&local_char);
    printf("Address of uninitialized_var: %p\n", (void*)&uninitialized_var);

    // 函数参数示例
    printAddressesOfFunctionParameters(123, 456.789, 'C');

    return 0;
}

// 用于打印函数参数地址的函数
void printAddressesOfFunctionParameters(int param1, double param2, char param3) {
    printf("Address of param1: %p\n", (void*)&param1);
    printf("Address of param2: %p\n", (void*)&param2);
    printf("Address of param3: %p\n", (void*)&param3);
}

// 函数
void printFunctionAddress() {
    printf("Address of printFunctionAddress: %p\n", printFunctionAddress);
}