#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
* ��� : �� ������ ��������ڰ� �־����� ������� ����� �˷��ִ� �Լ�
* �Ű����� : �� ����,��������� => int num1, char op, int num2
* ����Ÿ�� : ��������� => �Ǽ� => double
* �Լ��̸� : calc
*/
double calc(int num1, char op, int num2) {
	switch (op) {
	case '+':	return num1 + num2;
	case '-':	return num1 - num2;
	case '*':	return num1 * num2;
	case '%':	return num1 % num2;
	case '/':	return (double)num1 / num2;
	default:	return 0;
	}
}
int main() {
	int num1, num2;
	char op;
	printf("�� ������ ��������� �Է�(��: 1 + 2) : ");
	scanf("%d %c %d", &num1, &op, &num2);
	//�ڵ� �߰�
	double res = calc(num1, op, num2);
	printf("%d %c %d = %.1lf\n", num1, op, num2, res);

	return 0;
}
