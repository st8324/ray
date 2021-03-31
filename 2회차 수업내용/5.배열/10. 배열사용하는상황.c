#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* 과일의 갯수를 관리하려 한다. 사과의 갯수 5개, 오렌지
	* 개수 3개, 바나나의 갯수 10개이다.
	* =>일반 변수가 적절
	* 한반의 학생 1번부터 5번까지 학생 국어 성적을 관리하려한다
	* 1번 : 100, 2번 60, 3번 50, 4번 98, 5번 100
	* =>배열이 적절
	*/
	int fruit[3] = { 5, 3, 10 };
	int appleCount = 5, orangeCount = 3, bananaCount = 10;
	int korScore[5] = { 100, 60, 50, 98, 100 };
	int korScore1 = 100, korScore2 = 60, korScore3 = 50,
		korScore4 = 98, korScore5 = 100;
	return 0;
}