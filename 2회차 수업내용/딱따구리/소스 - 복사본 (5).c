#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ��� : ���� �迭 A�� �ִ� ���� ���� �迭 B�� �����ϴµ�
*		 �迭 A�� ũ�Ⱑ B���� ũ�� ���縦 ���� �ʰ�, B���� �۰ų�
*		 ���� �� �����ϴ� �Լ�
*  �Ű����� : �����迭A, �����迭 B=> int *arrA, int sizeA, int *arrB, int sizeB
*  ����Ÿ�� : ���� ���� ���� ���� ���� : 1, ���� : 0 => ���� =>int
*  �Լ��̸� : copyArray
*/
int copyArray(int* arrA, int sizeA, int* arrB, int sizeB) {
	if (sizeA > sizeB) {
		return 0;
	}
	//����
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