#include "mulstore.h"

void mulstore(long x,long y, long *dest){   //  *dest：传指针（传地址，传引用）地址不变，地址指向对象的值可变
    long t = mult2(x,y);
    *dest = t;
}

void mulstore2(long x,long y, long dest){   // 传值：函数的入参复制为函数内部的局部变量，在函数返回后被释放。
    long t = mult2(x,y);
    dest = t;
}

long mult2(long a, long b){
    long s = a * b;
    return s;
}

long mulstore1(long x,long y){
    long t = mult2(x,y);
    return t;
}

