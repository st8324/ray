#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* ������ 7���� ����ϴ� ����
	*  =>������ ��ü
	*  =>num�� 2~9���� �ѹ��� ���
	*/
	int num = 7, i;
	for (num = 2; num <= 9 ; num++ ) {
		printf("----%d��----\n", num);
		for (i = 1; i <= 9; i++) {
			printf("%d x %d = %d\n", num, i, num * i);
		}
	}
	return 0;
}