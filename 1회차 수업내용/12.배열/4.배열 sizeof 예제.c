#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* - 배열의 크기를 구하는 예제(sizeof함수를 이요)
	* - sizeof(변수/자료형) : 변수/자료형의 크기를 바이트로 알려줌
	*/
	int arr[5] = { 0 };
	int num = 0;
	int size = sizeof(arr) / sizeof(int);
	printf("변수   num의 크기 : %d\n", sizeof(num));
	printf("자료형 int의 크기 : %d\n", sizeof(int));
	printf("배열   arr의 크기 : %d\n", sizeof(arr));
	printf("배열의 갯수       : %d\n", size);
	return 0;
}