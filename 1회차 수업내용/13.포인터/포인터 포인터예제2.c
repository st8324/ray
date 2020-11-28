#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char arr[11] = "Hello";
	char* pt = arr;
	for (; *pt != '\0'; pt++) {
		printf("%c", *pt);
	}
	printf("\n");
	printf("%s\n", arr);
	return 0;
}
