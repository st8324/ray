#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// Hello world! 5�� ���
	int i;
	for (i=1; i<=5 ;i++ ) {
		printf("Hello world!\n");
	}
	//1���� 9���� ���
	for (i = 1; i <= 9; i++) {
		printf("%d\n",i);
	}
	//i=10
	//7�� ���
	for (i = 1; i <= 9; i++) {
		printf("7 X %d = %d\n", i, 7*i);
	}
	/*
	num1�� num2�� ����� ��� ����
	 - �ݺ�Ƚ�� : i�� 1���� num1���� 1�� ����
	 - ��Ģ�� : i�� num1�� ����̰� i�� num2�� ����̸� i�� ���
		=> num1�� i�� (�������� �� ������)�� 0�� (��)(��)
		   num2�� i�� (�������� �� ������)�� 0�� (����)(��)
		   i�� ���
		=> num1 % i == 0 && num2 % i == 0 ��
		   i�� ���
		=> if(num1 % i == 0 && num2 % i == 0){
				printf("%d ",i);
			}
	 - �ݺ��� ���� �� : ����
	*/
	int num1 = 8, num2 = 12;
	int gcd = 1;
	printf("%d�� %d�� ����� : ",num1,num2);
	for (i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			printf("%d ", i);
			gcd = i;
		}
	}
	printf("\n%d�� %d�� �ִ� ����� : %d\n", num1, num2,gcd);
	return 0;
}