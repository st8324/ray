#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* ���Կ����� : =
    *  - ���п��� x=2, 2=x �Ѵ� ����
    *  - ���α׷��ֿ����� x=2 ����, 2=x �Ұ���
    *  - A = B : B�� ���� A�� ����(�����)
    *  - A�� ���� �ϳ��� �ü� �ִ�
    */
    int num1 = 3;
    int num2 = 5;
    int num3 = 0;
    num3 = num1 + num2;//����, num3 = 8
    //num1 + num2 = num3;//�Ұ���
    return 0;
}
