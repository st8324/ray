#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - ���������� : ���������� ������ ���� 1 ����/���� - ++, --
	*   - ������ : ++num, --num
	*     - ������ �ϰ� ������ �Ѵ�.
	*   - ������ : num++, num--
	*     - ������ �ϰ� ������ �Ѵ�.
	*/
	int num1 = 10, num2 = 10;
	//num1�� 1������Ű��, ������ num1�� num3�� ����, num1=11, num3=11
	int num3 = ++num1;
	//num1 = num1 + 1;
	//int num3 = num1;
	//num2�� ���� num4�� �����ϰ�, num2�� ���� 1����, num2=11,num4=10
	int num4 = num2++;
	//int num4 = num2;
	//num2 = num2 + 1;
	printf("num1 = %d, num3 = %d\n", num1, num3);
	printf("num2 = %d, num4 = %d\n", num2, num4);
	//���� num5�� 1 ������ num1�� ���� �����ϰ� �ʹ�
	num1++;//++num1;
	int num5 = num1;
	
	return 0;
}