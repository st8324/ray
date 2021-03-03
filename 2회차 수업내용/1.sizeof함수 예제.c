#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//p.71
	printf("char 크기 : %d바이트\n", sizeof(char));
	printf("int 크기 : %d바이트\n", sizeof(int));
	printf("float 크기 : %d바이트\n", sizeof(float));
	printf("long long 크기 : %d바이트\n", sizeof(long long));
	printf("double 크기 : %d바이트\n", sizeof(double));
	return 0;
}