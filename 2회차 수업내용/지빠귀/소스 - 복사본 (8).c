#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 0이상 100이하인 짝수들을 출력하는 코드를 작성하세요.
	* 2 4 6 8 10 ... 98 100
	* 
	*  2  4  6  8 10
	* 12 14 16 18 20
	* ...
	* 92 94 96 98 100
	*/
	int i = 0;
	for (i = 2; i <= 100; i += 2) {
		printf("%2d ", i);
		//i가 10의 배수이면 엔터를 침
		if (i % 10 == 0) {
			printf("\n");
		}
	}
	printf("-----------------\n");
	for (i = 1; i <= 50; i++) {
		printf("%2d ", i * 2);
		//i가 5의 배수이면 엔터를 침
		if (i % 5 == 0) {
			printf("\n");
		}
	}
	printf("-----------------\n");
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			printf("%2d ", i);
		}
		
		//i가 10의 배수이면 엔터를 침
		if (i % 10 == 0) {
			printf("\n");
		}
	}
	return 0;
}