#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
* ��� : �� ������ �־����� �� ������ ���� �˷��ִ� �Լ�
* �Ű����� : �� ���� => int num1, int num2
* ����Ÿ�� : �� ������ �� => ���� => int
* �Լ��̸� : sum
*/
int sum(int num1, int num2) {
	int res = num1 + num2;
	return res;
}
int main() {
	int num1 = 1, num2 = 2;
	printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
	return 0;
}