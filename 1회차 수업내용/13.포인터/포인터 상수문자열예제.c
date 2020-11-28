#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - Hello world는 문자열 상수이이서 값을 변경할 수 없다.
	*/
	/*
	* //아래 코드는 Hello world가 상수 메모리에 있어서 변경이 불가능
	char* arr = "Hello world";
	printf("%s\n", arr);
	arr[0] = 'h';
	printf("%s\n", arr);
	*/
	//아래 코드는 Hello world가 배열에 있어서 arr를 통해 변경이 가능
	char tmp[12] = "Hello world";
	char* arr = tmp;
	printf("%s\n", arr);
	arr[0] = 'h';//tmp[0]='h'; 코드와 결과가 같음
	printf("%s\n", arr);
	return 0;
}
