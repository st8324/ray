#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* ���� ���� ������ : ���ǿ� ���� ��� ���� �޶����� ������ 
    *  - ���߿� ���ǹ����� ��ü��
    *  - (���ǽ�)? �� : ����;
    */
    int num1 = 10;
    int num2 = 20;
    int max = (num1 > num2) ? num1 : num2;
    printf("%d�� %d �� �� ū �� : %d\n", num1, num2, max);
    return 0;
}
