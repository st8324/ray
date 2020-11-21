#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 이중 반복문 : 반복문의 실행문으로 반복문이 들어있응 형태
	* - 일반 반복문보다 복잡하다.
	*/
	/*
	* *****
	* *****
	* *****
	*/
	int i, j;
	for (i = 1; i <= 3; i++) {
		printf("*****\n");
	}
	printf("---------\n");
	for (i = 1; i <= 3; i++) {
		//별 5개 찍음
		for (j = 1; j <= 5; j++) {
			printf("*");
		}
		//엔터
		printf("\n");
	}
	return 0;
}