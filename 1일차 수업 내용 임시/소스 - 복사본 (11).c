#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* ���� ������ : ++, --
    *  - ���������� ������ ���� 1����/1����
    *  - ���������� ��ġ�� ���� ���� ����� �޶�����.
    *  - ������ : ++������, --������
    *             ������ �ϰ� ������ �Ѵ�.
    *  - ������ : ������++, ������--
    *             ������ �ϰ� ������ �Ѵ�.
    *  - ���������ڸ� ����� �� ��
    *   - �������� �������� �򰥸��� ���, ���۰� ������ �������� ����
    *     ���۰� ������ ���� �ض�
    */
    int num1 = 10;
    int num2 = 10;
    
    printf("������ num1 = %d, num2 = %d\n", num1, num2);
    printf("������ num1 = %d, num2 = %d\n", ++num1, num2++);
    printf("������ num1 = %d, num2 = %d\n", num1, num2);
    /*
    int num3 = num1++;
    int num4 = ++num2;
    printf("������ num3 = %d, num4 = %d\n", num3, num4);
    */
    int num3 = num1;
    ++num1;
    ++num2;
    int num4 = num2;
    printf("������ num3 = %d, num4 = %d\n", num3, num4);
    return 0;
}
