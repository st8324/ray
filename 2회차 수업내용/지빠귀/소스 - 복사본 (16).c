#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* p.93
	* - ���� �ݺ��� : �ݺ����� ���๮���� �ݺ����� ������ ���
	* - 2�ܺ��� 9�ܱ��� ������ ��ü�� ����ϴ� �ڵ带 �ۼ��ϼ���.
	*/
	int num = 7, i = 0;
	for (num = 2; num <= 9; num++) {
		printf("%d��\n", num);
		for (i = 1; i <= 9; i++) {
			printf("%d x %d = %d\n", num, i, num * i);
		}
	}

	return 0;
}