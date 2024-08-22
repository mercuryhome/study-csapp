#include <stdio.h>

void decompose(double x, long *int_part, double *fract_part) {
    *int_part = (long)x;
    *fract_part = x - *int_part;
}

int main(void){
    double a = 3.14;
    long int_part;
    double fract_part;
    decompose(a, &int_part, &fract_part);
    printf("整数部分是：%ld\n小数部分是：%f\n", int_part, fract_part);
}