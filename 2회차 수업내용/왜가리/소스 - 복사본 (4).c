#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main() {
	char arr1[11] = "abcd";
	char* arr2 = "abcd";//문자열 상수, 바꿀 수 없음

	printf("arr1 = %s\n", arr1);
	printf("arr2 = %s\n", arr2);
	arr1[0] = 'f';
	//arr2[0] = 'f';
	printf("arr1 = %s\n", arr1);
	printf("arr2 = %s\n", arr2);
	
	return 0;
}