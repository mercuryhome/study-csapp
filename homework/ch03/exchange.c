//
// Created by 黄思源 on 2024/8/20.
//
#include <stdio.h>
long exchange(long *xp, long y);
int main(){
    long a = 4;
    long b = exchange(&a, 3);
    printf("a = %ld, b = %ld\n", a, b);
    return 0;
}


long exchange(long *xp, long y){
    long x = *xp;
    *xp = y;
    return x;
}