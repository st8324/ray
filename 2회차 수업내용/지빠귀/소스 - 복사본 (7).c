#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 구구단 7단을 출력하는 코드를 작성하세요. 
	* - 반복횟수 : i는 1부터 9까지 1씩 증가
	* - 규칙성   : 7 x i = 7*i\n를 출력
	* - 출력 예시
	* 7 x 1 = 7
	* 7 x 2 = 14
	* 7 x 3 = 21
	* ...
	* 7 x 9 = 63
	*/
	int i = 0;
	int num = 6;
	for (i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", num, i, num*i);
	}

	return 0;
}