#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>

int main() {
	char arr1[21] = "Hello";
	char arr2[21];
	memcpy(arr2, arr1, 21);
	printf("arr2 : %s\n", arr2);
	return 0;
}