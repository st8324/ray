#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - ���� ����(���� ����) 
	* 9, 8, 10, 5, 3
	* 8, 9, 5, 3, 10
	*/
	int arr[5] = { 9, 8, 10, 5, 3 };
	int size = sizeof(arr) / sizeof(int);
	//�迭 �� ���
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	//���� ����
	for (int i = 0; i < size - 1; i++) {
		for (int k = 0; k < size - 1; k++) {
			if (arr[k] > arr[k + 1]) {
				int tmp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tmp;
			}
		}
	}
	//�迭�� ���
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}