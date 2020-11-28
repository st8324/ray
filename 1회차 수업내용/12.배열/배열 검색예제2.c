#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 배열의 값 탐색 예제 
	* - 배열 arr1과 배열 arr2를 비교하여 같은 숫자의 갯수를 파악하는 예제
	*/
	int arr1[5] = { 2,4,6,8,10 };
	int arr2[5] = { 2,3,4,5,6 };
	int size = sizeof(arr1) / sizeof(int);
	int cnt = 0;//일치하는 숫자의 갯수
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr1[i] == arr2[j]) {
				cnt++;
				break;
			}
			//printf("i = %d, j = %d\n", i, j);
		}
	}
	printf("두 배열은 %d개 같습니다.\n", cnt);
	return 0;
}