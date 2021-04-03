#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*  ��� : ���� �迭�� �־����� �־��� ���� �迭��ŭ ����ϴ� �Լ�
*   �Ű����� : ���� �迭 => int *arr, int size
*   ����Ÿ�� : ���� => void
*   �Լ��̸� : printArray1
*/
void printArray1(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d���� : %d\n", i, arr[i]);
	}
}
/* ��� : ���� �迭�� �־����� �־��� ���ڹ迭�� ����ϴ� �Լ� 
*  �Ű����� : ���ڹ迭 => char *arr, int size
*  ����Ÿ�� : ���� => void
*  �Լ��̸� : printArray2
*/
void printArray2(char* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%c", arr[i]);
	}
	printf("\n");
}
/* ��� : ���� �迭�� �־����� �־��� ���ڹ迭�� ����ϴ� �Լ�
*  �Ű����� : ���ڹ迭 => char *arr
*  ����Ÿ�� : ���� => void
*  �Լ��̸� : printArray3
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