#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 기능 : 주어진 문자열을 출력하는 기능
* 매개변수 : 문자열 => char* str
* 리턴타입 : 없다 => void
* 함수이름 : print
*/

void print(char* str) {
	printf("%s\n", str);
}

int main() {
	print("Hello wolrd!");
	return 0;
}