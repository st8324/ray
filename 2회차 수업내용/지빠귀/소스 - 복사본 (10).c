#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* a부터 z까지 반복문을 이용하여 출력하는 코드를 작성하세요.
	*/
	char ch = 'a';
	int i = 0;
	//'a', 0, 96,
	for (i = 0; i < 26 ;i++ ) {
		printf("%c ", ch + i);
	}
	printf("\n");
	for (i = ch; i <= 'z' ; i++) {
		printf("%c ", i);
	}
	return 0;
}