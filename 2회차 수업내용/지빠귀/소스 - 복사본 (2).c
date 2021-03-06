#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* 성적(실수)이 주어지면 주어진 성적에 맞는 학점을 출력하는 코드를
	* 작성하세요.
	* A : 90이상~100이하
	* B : 80이상~90미만
	* C : 70이상~80미만
	* D : 60이상~70미만
	* F : 0이상~60미만
	* 잘못된 성적입니다 : 0미만, 100초과
	* - score가 90점보다 크거나 같고 score가 100보다 작거나 같으면
	*   A라고 출력하고
	*   score가 80점보다 크거나 같고 score가 90보다 작으면
	*   B라고 출력하고
	*   ...
	*   score가 0보다 작거나 score가 100보다 크면
	*   (score가 0보다 크거나 같고 100보다 작거나 같지가 않으면)
	*   잘못된 성적이라고 출력
	*/
	int score = 59;
	if (score >= 90  && score <= 100) {
		printf("%d점은 A학점\n", score);
	}
	else if (score >= 80 && score < 90) {
		printf("%d점은 B학점\n", score);
	}
	else if (score >= 70 && score < 80) {
		printf("%d점은 C학점\n", score);
	}
	else if (score >= 60 && score < 70) {
		printf("%d점은 D학점\n", score);
	}
	else if (score >= 0 && score < 60) {
		printf("%d점은 F학점\n", score);
	}
	//else if (score < 0 || score > 100) {
	else{
		printf("%d점은 올바른 점수가 아닙니다.\n", score);
	}
	return 0;
}