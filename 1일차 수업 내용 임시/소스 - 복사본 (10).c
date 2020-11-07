#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* 대입연산자 : =
    *  - 수학에서 x=2, 2=x 둘다 가능
    *  - 프로그래밍에서는 x=2 가능, 2=x 불가능
    *  - A = B : B의 값을 A에 저장(덮어쓰기)
    *  - A는 변수 하나만 올수 있다
    */
    int num1 = 3;
    int num2 = 5;
    int num3 = 0;
    num3 = num1 + num2;//가능, num3 = 8
    //num1 + num2 = num3;//불가능
    return 0;
}
