#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main() {
	/* 
	* - �����Ҵ��� �̿��� �迭 ����
	* �ڷ��� *�����ͺ��� = (�ڷ��� *)malloc(��ü ũ��);
	* �ڷ��� *�����ͺ��� = (�ڷ��� *)malloc(sizeof(�ڷ���)*ũ��);
	* int *arr1 = (int *) malloc(20);
	* int *arr1 = (int *) malloc(sizeof(int)*5);
	*/
	int size = 5;
	int *arr1;
	int arr2[5];
	arr1 = (int*)malloc(sizeof(int) * size);
	//*arr1 = 1;//0������ ���� 1�� ����, arr1[0]
	//*(arr1 + 1) = 2;//1������ ���� 2�� ����, arr1[1];
	//printf("%d\n", arr1[0]);
	for (int i = 0; i < size; i++) {
		arr1[i] = i + 1;
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}
	int resize = 10;

	int *arr3 = (int*)realloc(arr1, sizeof(int) * resize);
	//���� : arr1�� �ִ� ���� arr3�� ����
	for (int i = 0; i < size; i++) {
		arr3[i] = arr1[i];
	}
	size = resize;
	arr1 = arr3;
	//���
	printf("------------------\n");
	for (int i = 0; i < size; i++) {
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}
	
	return 0;
}
