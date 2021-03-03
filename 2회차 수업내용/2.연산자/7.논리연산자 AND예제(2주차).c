#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* 논리연산자 : p.61
	* - && : AND 연산자, ~하고 
	* - A와 B 모두 참 또는 거짓으로 판별할 수 있어야한다.
	*   단, C언어에서는 정수면 가능
	* A && B : A가 참이고 B가 참이면 참, 나머지는 거짓
	* => A학점은 성적이 90점이상(이고) 100점이하이다
	* A B A&&B
	* 0 0 0
	* 0 1 0
	* 1 0 0
	* 1 1 1
	*/
	/* 
	* A학점은 score가 90점이상이고, 100점이하 
	* score가 90점이상이고, score가 100점이하
	* score가 90점이상 && score가 100점 이하
	* score >= 90 && score <= 100
	*/
	int score = 90;
	printf("%d점이 A인가? : %d\n", score, score >= 90 && score <= 100);
	return 0;
}