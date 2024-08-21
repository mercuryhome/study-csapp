/*
 *  理解堆栈、rbx, rsp
 *  ref: https://zhuanlan.zhihu.com/p/73985396
 */

int main()
{
    int a = 0x114514;
    int b = 0x1919;
    int c = 0x810;
    return 0;
}

/*
 * 汇编程序
_main:
    pushq   %rbp
    movq    %rsp, %rbp
    subq    $24, %rsp

    movq    $0x114514, -8(%rbp)
    movq    $0x1919, -16(%rbp)
    movq    $0x810, -24(%rbp)

    movq    $0, %rax

    movq    %rbp, %rsp
    popq    %rbp
    retq
 */
