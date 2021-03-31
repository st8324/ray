#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main() {
	/* 포인터를 통해 배열을 만드는 작업 => 동적할당
	* malloc : 배열의 전체 크기(바이트)를 주면 크기에 맞춰 
	*          배열을 생성
	*/
	int size = 10;
	int *arr1 = (int*)malloc(sizeof(int) * size);//10개
	char *carr1 = (char*)malloc(sizeof(int) * size);//40개
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