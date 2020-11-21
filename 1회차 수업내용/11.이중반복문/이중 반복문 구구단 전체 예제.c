#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* 구구단 7단을 출력하는 예제
	*  =>구구단 전체
	*  =>num를 2~9까지 한번씩 출력
	*/
	int num = 7, i;
	for (num = 2; num <= 9 ; num++ ) {
		printf("----%d단----\n", num);
		for (i = 1; i <= 9; i++) {
			printf("%d x %d = %d\n", num, i, num * i);
		}
	}
	return 0;
}