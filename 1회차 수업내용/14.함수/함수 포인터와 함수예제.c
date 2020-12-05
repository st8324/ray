#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>
#include <malloc.h>
/*
* 기능 : 주어진 정수개의 배열을 생성하여 반환하는 함수
* 매개변수 : 갯수 => int size
* 리턴타입 : 배열 => int *
* 함수이름 : createArray
*/
int* createArray(int size) {
	int* arr = (int*)malloc(sizeof(int) * size);

	/*memset : 배열을 초기화 하는 함수
	* memset(배열, 초기값, 크기)*/
	if (arr != NULL) {
		memset(arr, 0, size * sizeof(int));
	}
	return arr;
}
/*
* 기능 : 정수 배열의 모든 값을 출력하는 함수
* 매개변수 : 배열 => int* arr, int size
* 리턴타입 : 없다 => void
* 함수이름 : printArray
*/
// 함수의 포인터 매개변수 앞에 const를 붙이면 포인터 매개변수를 수정할 수 없게한다
void printArray(const int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main() {
	int size = 5;
	int* arr = createArray(size);

	printArray(arr, size);
	printArray(arr, size);
	if (arr != NULL) {
		free(arr);
	}
	return 0;
}