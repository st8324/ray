#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 기능 : 정수 배열 A에 있는 값을 정수 배열 B에 복사하는데
*		 배열 A의 크기가 B보다 크면 복사를 하지 않고, B보다 작거나
*		 같을 때 복사하는 함수
*  매개변수 : 정수배열A, 정수배열 B=> int *arrA, int sizeA, int *arrB, int sizeB
*  리턴타입 : 복사 성공 여부 복사 성공 : 1, 실패 : 0 => 정수 =>int
*  함수이름 : copyArray
*/
int copyArray(int* arrA, int sizeA, int* arrB, int sizeB) {
	if (sizeA > sizeB) {
		return 0;
	}
	//복사
	for (int i = 0; i < sizeA; i++) {
		arrB[i] = arrA[i];//*(arrB+i) = *(arrA+i);
	}
	return 1;
}
void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%2d ", arr[i]);
	}
	printf("\n");
}
int main() {
	int arr1[10] = { 1,2,3,4,5 };
	int arr2[5] = { 10,9,8,7,6 };
	printArr(arr1, 10);
	//copyArray(arr2, 5, arr1, 10);
	copyArray(arr2, 5, arr1+5, 5);
	printArr(arr1, 10);
	return 0;
}