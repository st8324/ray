#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ��� : �� ������ �־����� �� ������ ���� �ٲٴ� �Լ� 
*  �Ű����� : �� ���� => int num1, int num2
*  ����Ÿ�� : ���� => void
*  �Լ��̸� : swap1
*/
/* �Ű������� �Ϲ�   ������ ��� ������ ������ ���� 
*  �Ű������� ������ ������ ��� ������ ���Ҽ� ����
*/
void swap1(int num1, int num2) {
	//printf("num1 = %d, num2 = %d\n", num1, num2);
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
	//printf("num1 = %d, num2 = %d\n", num1, num2);
}
/* ������ ���� : �ּҸ� �����ϴ� ���� 
*  �Ϲ� ���� : ���� �����ϴ� ����
*  ������ ����ϴ� ��Ȳ
*  1. �����Ҵ��� ���� �迭 ����
*  2. �Լ��� �Ű����� 
*/
void swap2(int* num1, int* num2) {
	int tmp = *num1;//num1 : int *, tmp : int, &num1 : int **
	*num1 = *num2;
	*num2 = tmp;
}
int main() {
	int num1 = 10, num2 = 20;
	printf("num1 = %d, num2 = %d\n", num1, num2);
	swap2(&num1, &num2);
	printf("num1 = %d, num2 = %d\n", num1, num2);
	return 0;
}