#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main() {
	/* 
	* - 동적할당을 이용한 배열 생성
	* 자료형 *포인터변수 = (자료형 *)malloc(전체 크기);
	* 자료형 *포인터변수 = (자료형 *)malloc(sizeof(자료형)*크기);
	* int *arr1 = (int *) malloc(20);
	* int *arr1 = (int *) malloc(sizeof(int)*5);
	*/
	int size = 5;
	int *arr1;
	int arr2[5];
	arr1 = (int*)malloc(sizeof(int) * size);
	//*arr1 = 1;//0번지의 값을 1로 변경, arr1[0]
	//*(arr1 + 1) = 2;//1번지의 값을 2로 변경, arr1[1];
	//printf("%d\n", arr1[0]);
	for (int i = 0; i < size; i++) {
		arr1[i] = i + 1;
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}
	int resize = 10;

	int *arr3 = (int*)realloc(arr1, sizeof(int) * resize);
	//복사 : arr1에 있는 값을 arr3에 복사
	for (int i = 0; i < size; i++) {
		arr3[i] = arr1[i];
	}
	size = resize;
	arr1 = arr3;
	//출력
	printf("------------------\n");
	for (int i = 0; i < size; i++) {
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}
	
	return 0;
}
