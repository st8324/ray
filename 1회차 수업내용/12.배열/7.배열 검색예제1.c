#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 배열의 값 탐색 예제 
	* - 배열 arr에 정수 num의 값이 있는지 없는지(같은지 다른지) 확인하는 예제
	*/
	int arr[5] = { 2,4,6,8,10 };
	int num = 5;
	int size = sizeof(arr) / sizeof(int);
	int i = 0;
	for (i = 0; i < size; i++) {
		if (arr[i] == num) {
			break;
		}
	}
	//일치하는 값을 못찾았을 때 i의 값은 5
	//일치하는 값을 찾았을 때 i의 값은 5보다 작다
	if (i < size) {
		printf("%d는 배열 %d번지에 있는 값입니다.\n", num, i);
	}
	else {
		printf("%d는 배열에 없는 값입니다.\n", num);
	}
	return 0;
}