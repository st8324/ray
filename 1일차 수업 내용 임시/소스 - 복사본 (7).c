#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* ��� ������ : + - *(x) /(������) %(������, ���)
    *  ��ȣ ������ : -
    *  ������
    *   - ���� / ���� => ���� : �Ҽ����� ������
    *   - ���� / �Ǽ� => �Ǽ�
    *   - �Ǽ� / ���� => �Ǽ�
    *   - �Ǽ� / �Ǽ� => �Ǽ�
    *  �ڷ�����ȯ : ������ ����� �ڷ����� �Ͻ������� ��ȯ
    *   - ��ȯ��Ű���� �ϴ� ������ ��� �տ� (�ڷ���) �� �ϸ� �ش�
    *     �ڷ������� ����ȯ�� �ȴ�.
    *   - int num1 = (int)1.23; => 1.23 �Ǽ����� ������ 1�� ��ȯ
    */
    int num1 = 5;
    int num2 = 3;
    double result = 0.0;
    result = num1 + num2;
    printf("%d + %d = %.2lf\n", num1, num2, result);
    result = num1 - num2;
    printf("%d - %d = %.2lf\n", num1, num2, result);
    result = num1 * num2;
    printf("%d * %d = %.2lf\n", num1, num2, result);
    result = (double)num1 / num2;
    printf("%d / %d = %.2lf\n", num1, num2, result);
    result = num1 % num2;
    printf("%d %% %d = %.2lf\n", num1, num2, result);
    /* A % B : A�� B�� �������� �� ������ ��
    * => ������ �����ڴ� �ַ� ���(Ȧ¦), ��� �Ǻ��� ���
    * => ~�� �������� �� �������� ǥ���Ǹ� ������ �����ڸ� ���÷���
    */
    int num3 = -1;
    printf("-num3 = %d\n", -num3);

    return 0;
}
