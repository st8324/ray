#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* 조건 선택 연산자 : 조건에 따라 결과 값이 달라지는 연산자 
    *  - 나중에 조건문으로 대체됨
    *  - (조건식)? 참 : 거짓;
    */
    int num1 = 10;
    int num2 = 20;
    int max = (num1 > num2) ? num1 : num2;
    printf("%d와 %d 중 더 큰 수 : %d\n", num1, num2, max);
    return 0;
}
