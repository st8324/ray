#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>
#include <malloc.h>
/*
* ��� : �־��� �������� �迭�� �����Ͽ� ��ȯ�ϴ� �Լ�
* �Ű����� : ���� => int size
* ����Ÿ�� : �迭 => int *
* �Լ��̸� : createArray
*/
int* createArray(int size) {
	int* arr = (int*)malloc(sizeof(int) * size);

	/*memset : �迭�� �ʱ�ȭ �ϴ� �Լ�
	* memset(�迭, �ʱⰪ, ũ��)*/
	if (arr != NULL) {
		memset(arr, 0, size * sizeof(int));
	}
	return arr;
}
/*
* ��� : ���� �迭�� ��� ���� ����ϴ� �Լ�
* �Ű����� : �迭 => int* arr, int size
* ����Ÿ�� : ���� => void
* �Լ��̸� : printArray
*/
// �Լ��� ������ �Ű����� �տ� const�� ���̸� ������ �Ű������� ������ �� �����Ѵ�
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