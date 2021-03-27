#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
* - ��� : �� ������ �ִ� ������� �˷��ִ� �Լ�
* - �Ű����� : �� ���� => int num1, int num2
* - ����Ÿ�� : �ִ� ����� => ���� => int
* - �Լ��̸� : GCD */
int GCD(int num1, int num2) {
	int gcd = 1;
	for (int i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
		}
	}
	return gcd;
}

int main() {
	int num1 = 8, num2 = 12, gcd = 1;;
	gcd = GCD(num1, num2);
	printf("�ִ� ����� : %d\n", gcd);
	gcd = GCD(213, 412);
	printf("�ִ� ����� : %d\n", gcd);
	return 0;
}