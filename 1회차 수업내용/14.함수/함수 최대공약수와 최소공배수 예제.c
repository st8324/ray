#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
* ��� : �� ������ �־����� �� ������ �ִ� ������� �˷��ִ� �Լ�
* �Ű����� : �� ���� => int num1, int num2
* ����Ÿ�� : �ִ� ����� => int
* �Լ��̸� : gcd 
*/
int gcd(int num1, int num2) {
	int res = 1;
	for (int i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			res = i;
		}
	}
	return res;
}
int lcm(int num1, int num2) {
	int res = num1 * num2 / gcd(num1, num2);
	return res;
}
int main() {
	int num1 = 10, num2 = 15;
	int res = gcd(num1,num2);
	
	printf("%d �� %d�� �ִ� ����� :  %d\n", num1, num2, res);
	printf("%d �� %d�� �ּ� ����� :  %d\n", num1, num2, lcm(num1, num2));
	printf("%d �� %d�� �ִ� ����� :  %d\n", 2, 3, gcd(2,3));

	return 0;
}