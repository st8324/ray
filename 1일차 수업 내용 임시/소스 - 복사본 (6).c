#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* 정수형 자료형 앞에 붙는 unsigned 
    *  unsigned : 부호가 없는이라는 의미로 음수를 양수로
    *  int : -2147483648 ~ 2147483647
    *  unsigned int : 0 ~ 2147483648*2-1
    */
    unsigned int num = 2147483648;
    /* sizeof() : 자료형이나 변수의 크기를 byte로 알려주는 함수(기능) */
    printf("int의 크기 : %d\n", sizeof(int));
    printf("char의 크기 : %d\n", sizeof(char));
    printf("double의 크기 : %d\n", sizeof(double));
    printf("float의 크기 : %d\n", sizeof(float));
    printf("long long의 크기 : %d\n", sizeof(long long));

    //집에서 학원까지의 거리를 변수에 저장하려한다. 이때 필요한 변수를
    //선언하세요. distance
    double distance = 0.0;
    double num1 = 0.1234567890123456789;
    float num2 = 0.1234567890123456789;
    printf("double : %.19lf\n", num1);
    printf("float  : %.19f\n", num2);
    return 0;
}
