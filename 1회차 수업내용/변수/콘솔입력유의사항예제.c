#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* 정수1개와 문자 1개를 입력받아 입력받은 정수와 문자를 출력하세요.
    */
    //정수형 변수와 문자형 변수를 선언
    int num = 0;
    char ch = 'A';
    //정수를 입력
    printf("정수 입력 : ");
    scanf("%d", &num);
    //문자를 입력
    printf("문자 입력 : ");
    scanf(" %c", &ch);
    //정수와 문자를 출력
    printf("입력받은 값 : %c, %d\n", ch, num);
    return 0;
}
