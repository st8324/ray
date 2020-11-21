#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* 반복문을 이용하여 a부터 z까지 출력하는 예제
	*/
	char ch = 'a';
	int i;
	for (i = 0; i < 26; i++) {
		printf("%c", ch + i);
	}
	i = 0;
	printf("\n");
	while (ch <= 'z') {
		printf("%c", ch++);
	}
	return 0;
}