#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 조건 선택 연산자 : p.61
	* - 조건문으로 대체 가능한 연산자
	* - 코드를 간결하게 표현할 수 있다는 장점
	* - 조건식 ? 참 : 거짓
	* - 조건식 : 결과가 참 또는 거짓으로 판별할 수 있는 식
	*/
	/* 성적이 90점이상 100점이하인가? 참이면 2, 거짓이면 3*/
	int score = 90;
	int res = (score >= 90 && score <= 100) ? 2 : 3;
	printf("%d점은 A학점인가? : %d\n", score, res);
	return 0;
}