#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* 비교 연산자 : 두 수의 크기를 비교하는 연산자
    *   - <, >, >=, <=, =>(x), =<(x), !=, ==
    *   - ==를 =과 착각하지 말자
    *   - A는 B이면 C해라
    *   - A == B
    *  - C언어에서 거짓은 0, 참은 1 또는 0이 아닌 수로 정의한다
    */
    int num1 = 2, num2 = 3;
    printf("%d > %d ? %d\n", num1, num2, num1 > num2);//2 > 3 ? 0 : 거짓
    printf("%d < %d ? %d\n", num1, num2, num1 < num2);//2 < 3 ? 1 : 참
    printf("%d == %d ? %d\n", num1, num2, num1 == num2);//2 == 3 ? 0 : 거짓
    printf("%d != %d ? %d\n", num1, num2, num1 != num2);//2 == 3 ? 1 : 참
    printf("%d >= %d ? %d\n", num1, num2, num1 >= num2);//2 >= 3 ? 0 : 거짓
    printf("%d <= %d ? %d\n", num1, num2, num1 <= num2);//2 <= 3 ? 1 : 참
    return 0;
}
