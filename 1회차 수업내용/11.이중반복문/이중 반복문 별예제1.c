#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* ���� �ݺ��� : �ݺ����� ���๮���� �ݺ����� ������� ����
	* - �Ϲ� �ݺ������� �����ϴ�.
	*/
	/*
	* *****
	* *****
	* *****
	*/
	int i, j;
	for (i = 1; i <= 3; i++) {
		printf("*****\n");
	}
	printf("---------\n");
	for (i = 1; i <= 3; i++) {
		//�� 5�� ����
		for (j = 1; j <= 5; j++) {
			printf("*");
		}
		//����
		printf("\n");
	}
	return 0;
}