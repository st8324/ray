#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* �� ������ : �� ���� ũ�⸦ ���ϴ� ������
    *   - <, >, >=, <=, =>(x), =<(x), !=, ==
    *   - ==�� =�� �������� ����
    *   - A�� B�̸� C�ض�
    *   - A == B
    *  - C���� ������ 0, ���� 1 �Ǵ� 0�� �ƴ� ���� �����Ѵ�
    */
    int num1 = 2, num2 = 3;
    printf("%d > %d ? %d\n", num1, num2, num1 > num2);//2 > 3 ? 0 : ����
    printf("%d < %d ? %d\n", num1, num2, num1 < num2);//2 < 3 ? 1 : ��
    printf("%d == %d ? %d\n", num1, num2, num1 == num2);//2 == 3 ? 0 : ����
    printf("%d != %d ? %d\n", num1, num2, num1 != num2);//2 == 3 ? 1 : ��
    printf("%d >= %d ? %d\n", num1, num2, num1 >= num2);//2 >= 3 ? 0 : ����
    printf("%d <= %d ? %d\n", num1, num2, num1 <= num2);//2 <= 3 ? 1 : ��
    return 0;
}
