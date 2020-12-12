#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int main() {

	for (int i = 0; i < 10; i++)
		printf("Hello world\n");
	//콘솔화면 초기화
	system("cls");

	printf("Hello world");
	return 0;
}
