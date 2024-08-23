/*
 * 通过斐波那契递归函数，观察函数调用堆栈变化情况
 */
#include <stdio.h>

int fib(int n)
{
    //printf("n = %d\n", n);
    if (n == 1 || n == 2){
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n = 4;
    int result = 0;

    //printf("Input a int data: ");
    //scanf("%d", &n);
    result = fib(n);
    printf("fib(%d) = %d\n", n, result);

    return 0;
}