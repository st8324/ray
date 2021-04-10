#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	/* 컴퓨터가 100이하의 숫자를 랜덤으로 생성하면, 사용자는 해당
	*  숫자를 맞추는 게임
	*  사용자가 해당 숫자를 못맞추면 해당 숫자보다 큰지 작은지를
	*  알려주어서 맞추도록 유도
	*  예시 : 컴퓨터 랜덤 숫자 30
	*  사용자 입력 : 50
	*  컴퓨터 : down
	*  사용자 입력 : 25
	*  컴퓨터 : up
	*  사용자 입력 : 33
	*  컴퓨터 down
	*  사용자 입력 : 30
	*  정답입니다.!!
	*/
	srand(time(NULL));
	int min = 1, max = 100;
	int random = rand() % (max - min + 1) + min;
	int answer = 0;
	do {
		printf("사용자 입력(1~100) : ");
		scanf("%d", &answer);
		if (answer > random) {
			printf("down\n");
		}
		else if (answer < random) {
			printf("up\n");
		}
	} while (random != answer);
	printf("정답입니다.\n");
	return 0;
}