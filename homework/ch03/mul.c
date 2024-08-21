//
// Created by 黄思源 on 2024/8/19.
//
#include <stdio.h>
#include "mulstore.h"

int main(){
    long d, d2 = 0;
    mulstore(2, 3, &d);
    printf("2 * 3 --> %ld\n", d);
    mulstore2(2, 3, d2);
    printf("2 * 3 --> %ld\n", d2);
    return 0;
}





