#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 2���� 18���� ¦���� �迭�� �����ϰ� ����ϴ� �ڵ带 �ۼ��غ�����.*/
	int arr[9] = { 0 };

	arr[0] = 2;
	arr[1] = 4;
	arr[2] = 6;
	arr[3] = 8;
	arr[4] = 10;
	arr[5] = 12;
	arr[6] = 14;
	arr[7] = 16;
	arr[8] = 18;
	for (int i = 0; i < 9; i++) {
		arr[i] = 2 * (i + 1);
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	return 0;
}