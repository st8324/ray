#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* - �Լ� ���� ���1
*	- main()�Լ� �տ� �Լ� ����� ������ �����Ѵ�.
* - �Լ� ���� ���2
*	- main()�Լ� �տ� �Լ��� �����ϰ�, main() �Լ� �ڿ� �Լ��� ����(����)�Ѵ�.
*	- �Լ� ���� �� �������� ���� �ʰ� �ڷ����� �ᵵ�ȴ�
*/
//�Լ� ���� ���2
int sum(int , int );
//double sum(double, double);
int main() {
	printf("%d\n", sum(1, 2));
	//printf("%.1lf\n", sum(1.1, 2.2));
	return 0;
}
int sum(int num1, int num2) {
	return num1 + num2;
}
/*
* - �Ʒ��� �Լ� �����ε��� ���� ������ �Լ��̴�.(�� C++���� ����, C������ ����)
* - �Լ� �����ε�
*	- ������ �̸��� �Լ��� 2�� �̻��� ���
*	- 1. �Ű������� ������ �ٸ� ��� ����
*	- 2. �Ű������� �ڷ����� �ٸ� ��� ����
*/
/*
double sum(double num1, double num2) {
	return num1 + num2;
}
*/