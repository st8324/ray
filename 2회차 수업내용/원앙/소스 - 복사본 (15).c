#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 다음 배열에서 최대값과 최소값을 찾도록 코드를 작성하세요. */
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
	printf("최소값 : %d\n", min);
	printf("최대값 : %d\n", max);

	return 0;
}