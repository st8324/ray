#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
* - ���ȣ��
*	- �Լ� A�� �����ο��� �Լ�A�� ȣ���ϴ� ���
*	- �Լ� A�� ���� �� �ٽ� �Լ� A�� �����ϴ� ���
*	- ���ȣ���� �� ���ȵ�
*	- ��κ� �ݺ������� ��ä ����
*	- ������ ��Ȳ�� ���� ���ȣ���� �̿��ϸ� ���ϰ� ���� ����
*/
/* 
* - ���丮�� ���� : 1���� n������ ���� n!
*	- ���丮���� �ݺ������� �����ϳ� ���⼭�� ��� ȣ���� ���� ���� ����Լ��� �̿�
*/
/* 
* ��� : ���� n�� �־����� n!�� ���ϴ� �Լ�
* �Ű����� : ���� => int n
* ����Ÿ�� : n���丮�� => ���� => int
* �Լ��̸� : factorial
* 5! = 5 * 4 * 3 * 2 * 1
*	 = 5 * 4!
*/
/*
main���� -> factorial(5)���� -> factorial(4)���� -> factorial(3)���� 
-> factorial(2)���� -> factorial(1)���� -> factorial(1)���� : return 1
->  factorial(2)���� : return 2  ->  factorial(3)���� : return 6
->  factorial(4)���� : return 24 ->  factorial(5)���� : return 120
->  main : factorial(5)�� ���� ��� -> main����
*/
int factorial(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	if (n < 0) {
		return -1;
	}
	return n * factorial(n - 1);
}
int factorial2(int n) {
	int res = 1;
	if (n < 0) {
		return -1;
	}
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}
int factorial3() {
	printf("���� n �Է� : ");
	int n = 1;
	scanf("%d", &n);
	int res = 1;
	if (n < 0) {
		return -1;
	}
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}
int main() {
	printf("5! = %d\n", factorial(5));
	printf("5! = %d\n", factorial2(5));
	printf("5! = %d\n", factorial3());
	return 0;
}
