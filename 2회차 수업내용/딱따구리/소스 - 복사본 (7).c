#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//- ���� ���� �տ� const�� ���̸� ����� �ǰ�,
//- �Ű� ���� �� ������ ���� �տ� const�� ���̸� �ش� �Լ��ȿ��� 
//  �ش� ������ ������ �������Ѵ�.
void printArray(const int* arr, int size) {
	for(int i = 0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[10] = { 1,2,3,4,5 };
	printArray(arr, 10);
	printArray(arr, 10);
	return 0;
}