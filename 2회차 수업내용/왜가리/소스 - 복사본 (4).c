#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main() {
	char arr1[11] = "abcd";
	char* arr2 = "abcd";//���ڿ� ���, �ٲ� �� ����

	printf("arr1 = %s\n", arr1);
	printf("arr2 = %s\n", arr2);
	arr1[0] = 'f';
	//arr2[0] = 'f';
	printf("arr1 = %s\n", arr1);
	printf("arr2 = %s\n", arr2);
	
	return 0;
}