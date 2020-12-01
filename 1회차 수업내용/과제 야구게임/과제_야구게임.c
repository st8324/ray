#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* - 컴퓨터 숫자 3개를 입력
	* - 단, 중복되지 않은 숫자, 1~9사이의 숫자
	* - 사용자 숫자 3개를 입력
	* - 입력한 사용자 숫자에 맞게 S와 B과 O을 판별
	* - 규칙
	*	- S : 숫자와 위치가 같은 경우
	*	- B : 숫자는 있지만 위치가 다른 경우
	*	- 3O : 일치하는 숫자가 없느 경우
	* - 예
	*	- 컴퓨터 숫자 1 9 3
	*	- 사용자 숫자 1 2 3
	*	- 2S
	*	- 사용자 숫자 3 7 9
	*	- 2B
	*	- 사용자 숫자 4 5 6
	*	- 3O
	*	- 사용자 숫자 1 3 9
	*	- 1S2B
	*	- 사용자 숫자 1 9 3
	*	- 3S
	*	- 정답입니다.
	*/
	int com[3] = { 0 }, user[3] = { 0 };
	int strike = 0, ball = 0;
	/* 원래는 랜덤으로 자동 생성해야하는데 아직 랜덤을 안 배워서 직접 입력으로 함*/
	printf("중복되지 않은 세 수를 입력하세요(1~9) : ");
	for (int i = 0; i < 3; i++) {
		scanf("%d", com + i);
	}
	while (strike != 3) {
		strike = 0;
		ball = 0;
		/* 사용자 숫자 입력 */
		printf("중복되지 않은 세 수를 입력하세요(1~9) : ");
		for (int i = 0; i < 3; i++) {
			scanf("%d", user + i);
		}
		/* 스트라이크 판별 */
		for (int i = 0; i < 3; i++) {
			if (com[i] == user[i]) {
				strike++;
			}
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i == j) {
					continue;
				}
				if (com[i] == user[j]) {
					ball++;
				}
			}
		}
		if (strike != 0) {
			printf("%dS", strike);
		}
		if (ball != 0) {
			printf("%dB", ball);
		}
		if (strike == 0 && ball == 0) {
			printf("3O");
		}
		printf("\n");
	}
	return 0;
}