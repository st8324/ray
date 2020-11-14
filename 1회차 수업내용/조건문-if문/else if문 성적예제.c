#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* p.147
	* else if문
	* 조건식1이 참이면 실행문1을 실행하고,
	* 아닌 것중에 조건식2가 참이면 실행문2를 실행하고,
	* 아니면 실행문3을 실행
	* if(조건식1){
	*	실행문1;
	* }
	* //조건식1이 거짓이고, 조건식2가 참이면
	* else if(조건식2){
	*	실행문2;
	* }
	* //조건식1과 조건식2가 거짓이면
	* else{
	*	실행문3;
	* }
	*/
	/*
	* score가 91점이상이고 100점이하이면 A라고 출력하고
	* score가 81점이상이고 90점이하이면 B라고 출력하고
	* score가 71점이상이고 80점이하이면 C라고 출력하고
	* score가 61점이상이고 70점이하이면 D라고 출력하고
	* score가 0점이상이고 60점이하이면 F라고 출력하고
	* 아니면 잘못된 점수라고 출력
	*/
	int score = 90;
	printf("성적을 입력하세요 : ");
	scanf("%d", &score);
	if (score >= 91 && score <= 100) {
		printf("%d는 A\n", score);
	}
	else if(score >= 81 && score <= 90) {
		printf("%d는 B\n", score);
	}
	else if (score >= 71 && score <= 80) {
		printf("%d는 C\n", score);
	}
	else if (score >= 61 && score <= 70) {
		printf("%d는 D\n", score);
	}
	else if (score >= 0 && score <= 60) {
		printf("%d는 F\n", score);
	}
	else {
		printf("%d는 잘못된 성적\n", score);
	}
	/*
	* 동일한 문제를 해결하기 위해 else if문을 이용한 
	* 코드와 if만을 이용한 코드의 차이점은 비교횟수이다.
	*/
	return 0;
}