#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* 결합 연산자 : 연산자를 줄여서 씀
    *  - A에게 일정 수 B만큼 더하거나(+) 빼거나(-) 곱하거나(*)등을 할때 사용
    * A = A 연산자 B;
    * A 연산자= B;
    * a += b; // a = a+b;
    */
    int num = 10;
    int add = 5;
    printf("num = %d\n", num);
    num %= add;
    printf("num = %d\n", num);
    num %= add;
    printf("num = %d\n", num);
    return 0;
}
