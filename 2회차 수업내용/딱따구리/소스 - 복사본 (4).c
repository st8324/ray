#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*  기능 : 정수 배열이 주어지면 주어진 정수 배열만큼 출력하는 함수
*   매개변수 : 정수 배열 => int *arr, int size
*   리턴타입 : 없음 => void
*   함수이름 : printArray1
*/
void printArray1(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d번지 : %d\n", i, arr[i]);
	}
}
/* 기능 : 문자 배열이 주어지면 주어진 문자배열을 출력하는 함수 
*  매개변수 : 문자배열 => char *arr, int size
*  리턴타입 : 없음 => void
*  함수이름 : printArray2
*/
void printArray2(char* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%c", arr[i]);
	}
	printf("\n");
}
/* 기능 : 문자 배열이 주어지면 주어진 문자배열을 출력하는 함수
*  매개변수 : 문자배열 => char *arr
*  리턴타입 : 없음 => void
*  함수이름 : printArray3
*/
void printArray3(char* arr) {
	printf("%s\n", arr);
}
int main() {
	int arr[8] = { 1,2,3,4,5 };
	int size = sizeof(arr) / sizeof(int);
	printArray1(arr, size);
	char arr2[21] = "Hello wolrd";
	size = sizeof(arr2) / sizeof(char);
	printArray2(arr2, size);
	printArray3(arr2);
	return 0;
}