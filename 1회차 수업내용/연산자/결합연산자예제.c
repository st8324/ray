#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* ���� ������ : �����ڸ� �ٿ��� ��
    *  - A���� ���� �� B��ŭ ���ϰų�(+) ���ų�(-) ���ϰų�(*)���� �Ҷ� ���
    * A = A ������ B;
    * A ������= B;
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
