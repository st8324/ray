#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main() {
	/* �����͸� ���� �迭�� ����� �۾� => �����Ҵ�
	* malloc : �迭�� ��ü ũ��(����Ʈ)�� �ָ� ũ�⿡ ���� 
	*          �迭�� ����
	*/
	int size = 10;
	int *arr1 = (int*)malloc(sizeof(int) * size);//10��
	char *carr1 = (char*)malloc(sizeof(int) * size);//40��
	//int *arr1 = (int*)malloc(40);
	//int *arr1 = (int*)malloc(4 * 10);
	for (int i = 0; i < 10; i++) {
		arr1[i] = i + 1;
		//*(arr1 + i) = i + 1;
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}
	free(arr1);
	free(carr1);
	return 0;
}