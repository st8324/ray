#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* 관계(비교)연산자 - p.59
	* - 결과가 참 또는 거짓
	* - 참 : 1, 0이 아닌 수 (C언어에서만)
	* - 거짓 : 0
	* A : 90 ~ 100 => 90<= A <= 100
	* 90 <= score <= 100
	* 0 <= 100
	* 1
	*/
	int score = 80;
	printf("%d점이 A인가? : %d\n", score, 90 <= score <= 100 );
	/* 
	* 변수 num에 값이 정수 2가 저장되어 있고, num의 
	* 값이 10보다 큰지를 콘솔에 출력하는 코드를 작성하세요.
	*/
	int num = 2;
	printf("num > 10 : %d\n", num > 10);
	return 0;
}