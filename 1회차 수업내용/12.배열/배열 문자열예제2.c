#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char arr[11]="abcdefghij";
	arr[4] = '\0';
	printf("%s\n", arr);//0번지부터 '\0'를 만날때까지 출력
	printf("%s\n", arr + 1);//1번지부터 '\0'를 만날때까지 출력
	printf("%s\n", arr + 5);//5번지부터 '\0'를 만날때까지 출력
	arr[10] = 'k';
	printf("%s\n", arr + 5);//5번지부터 '\0'를 만날때까지 출력
	return 0;
}
