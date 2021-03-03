#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* 논리연산자 : p.61
	* - || : OR 연산자, ~거나
	* A || B : A,B 모두 거짓이면 거짓, 나머지는 참
	* - 토익을 시험을 볼때 주민등록증, 운전면허증, 여권
	*   중 하나라도 있으면 시험 응시가 가능한것처럼
	*   || 연산자는 하나라도 참이면 참이다
	* A B A||B
	* 0 0 0
	* 0 1 1
	* 1 0 1
	* 1 1 1
	* - ! : NOT 연산자, ~이 아닌
	* - !A : A가 참이면 거짓으로, 거짓이면 참으로
	* A !A
	* 0 1
	* 1 0
	*/
	//성적이 유효한 성적인지 아닌지를 판별
	//성적이 올바르지 않은 성적 : score가 0미만, 100초과
	//score < 0 거나 score > 100
	//score < 0 || score > 100
	int score = 101;
	printf("%d점은 올바르지 않은가? : %d\n", score ,
		score < 0 || score > 100);

	printf("%d점은 올바른가? : %d\n", score,
		!(score < 0 || score > 100) );
	
	return 0;
}