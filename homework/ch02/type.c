//
// Created by 黄思源 on 2024/8/12.
//
#include <stdio.h>

int main(){
    int a = 0x0123456789;
    int b = -2;
    char name[] = "hsy";
    char *p = (char*)&a;
//    printf("&a = %p,sizeof(a) = %d,a = %x, name = %p\n", &a, sizeof(a),a , name);
    printf("b = %d(%#x)\n", b, b);
    for (int i = 0; i < 5; i++){
        printf("[%p] %#.2x\n", p+i, p[i]);
    }
    return 0;
}
