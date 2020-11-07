#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* ������ �ڷ��� �տ� �ٴ� unsigned 
    *  unsigned : ��ȣ�� �����̶�� �ǹ̷� ������ �����
    *  int : -2147483648 ~ 2147483647
    *  unsigned int : 0 ~ 2147483648*2-1
    */
    unsigned int num = 2147483648;
    /* sizeof() : �ڷ����̳� ������ ũ�⸦ byte�� �˷��ִ� �Լ�(���) */
    printf("int�� ũ�� : %d\n", sizeof(int));
    printf("char�� ũ�� : %d\n", sizeof(char));
    printf("double�� ũ�� : %d\n", sizeof(double));
    printf("float�� ũ�� : %d\n", sizeof(float));
    printf("long long�� ũ�� : %d\n", sizeof(long long));

    //������ �п������� �Ÿ��� ������ �����Ϸ��Ѵ�. �̶� �ʿ��� ������
    //�����ϼ���. distance
    double distance = 0.0;
    double num1 = 0.1234567890123456789;
    float num2 = 0.1234567890123456789;
    printf("double : %.19lf\n", num1);
    printf("float  : %.19f\n", num2);
    return 0;
}
