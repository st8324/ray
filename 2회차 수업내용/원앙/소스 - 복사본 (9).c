#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 5개짜리 배열을 생성하여 5개의 정수 성적을 입력 받아 배열에
	*   저장한 후 출력하는 예제
	* 배열명 : score
	* 크기 : 5
	* 정수
	*/
	int score[5] = { 0 };
	int size = sizeof(score) / sizeof(int);
	for (int i = 0; i < size; i++) {
		printf("성적을 입력하세요 : ");
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < size; i++) {
		printf("성적 : %d\n", score[i]);
	}

	
	return 0;
}