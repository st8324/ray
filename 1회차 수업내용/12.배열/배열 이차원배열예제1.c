#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 2���� �迭���� ���
	* �ڷ��� �迭��[��ũ��][��ũ��];
	* int arr[2][3];
	* ǥ�� �� ������ �� 2���� ��� ���
	* x1x2x3 
	* o1o2o3
	* ���� �޸𸮿��� 2���� ��� ���
	* x1x2x3o1o2o3
	* x1 : arr[0][0]
	* x2 : arr[0][1]
	* x3 : arr[0][2]
	* o1 : arr[1][0]
	* o2 : arr[1][1]
	* o3 : arr[1][2]
	*/
	int arr[4][4] = { 
		{ 1, 2, 3, 4},
		{ 5, 6, 7, 8},
		{ 9,10,11,12},
		{13,14,15,16} };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
