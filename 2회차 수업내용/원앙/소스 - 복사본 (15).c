#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* ���� �迭���� �ִ밪�� �ּҰ��� ã���� �ڵ带 �ۼ��ϼ���. */
	int arr[5] = { 10, 32, 9, 87, 3 };
	int min, max;
	min = max = arr[0];
	for (int i = 1; i < 5; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("�ּҰ� : %d\n", min);
	printf("�ִ밪 : %d\n", max);

	return 0;
}