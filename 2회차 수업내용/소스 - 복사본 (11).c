#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 관계(비교)연산자 : 크기 비교
	* - <, >, <=, >=, ==, !=
	* - 비교연산자는 결과가 참 또는 거짓이다.
	* - C언어에서는 참을 1 또는 0이 아닌수로 판별, 거짓을 0으로 판별
	*/
	printf("%d\n", 1 < 0);
	printf("%d\n", 1 > 0);
	return 0;
}