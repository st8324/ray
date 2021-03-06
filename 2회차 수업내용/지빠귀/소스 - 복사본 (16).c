#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* p.93
	* - 이중 반복문 : 반복문의 실행문으로 반복문이 나오는 경우
	* - 2단부터 9단까지 구구단 전체를 출력하는 코드를 작성하세요.
	*/
	int num = 7, i = 0;
	for (num = 2; num <= 9; num++) {
		printf("%d단\n", num);
		for (i = 1; i <= 9; i++) {
			printf("%d x %d = %d\n", num, i, num * i);
		}
	}

	return 0;
}