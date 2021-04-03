#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 
* - �Լ��� ����ϴ� ����
* 1. �ڵ��� �ߺ��� �����Ͽ� ȿ�������� �ڵ�
* 2. ����
*/
/* 
* ��������Ǳ�	: �Լ�
* ��,�޴�		: �Ű�����
* �����			: ����Ÿ��
* �Ű����� : �Լ��� �����ϱ� ���� �ʿ��� �ʼ� ������
* ����Ÿ�� : �Լ��� ������ �� �Լ��� �θ� ������ �˷��� ����
*/
/* 
* ��� : �� ������ ��������ڰ� �־����� ��� ���� �����
*		 �˷��ִ� �Լ�
* �Ű����� : �� ����, ��������� => int num1,  char op, int num2
* ����Ÿ�� : ��������� => �Ǽ� => double
* �Լ��̸� : calc
*/
double calc1(int num1, char op, int num2) {
	double result = 0.0;
	switch (op) {
	case '+':	result = num1 + num2;		break;
	case '-':	result = num1 - num2;		break;
	case '*':	result = num1 * num2;		break;
	case '%':	result = num1 % num2;		break;
	case '/':	result = (double)num1 / num2;	break;
	}
	return result;
}
double calc2(int num1, char op, int num2) {
	switch (op) {
	case '+':	return num1 + num2;
	case '-':	return num1 - num2;	
	case '*':	return num1 * num2;		
	case '%':	return num1 % num2;		
	case '/':	return (double)num1 / num2;	
	}
	return 0.0;
}
int main() {
	/* - calc1 �Ǵ� calc2 �Լ��� �̿��Ͽ� �ֿܼ� 1 / 2 = 0.5��
	*    ��µǵ��� �ڵ带 �ۼ��ϼ���.
	*/
	int num1 = 1, num2 = 2;
	char op = '/';
	double result = calc1(num1, op, num2);
	printf("%d %c %d = %.1lf\n",num1, op, num2, result );
	return 0;
}