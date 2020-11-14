#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 구구단 7단을 출력하는 예제
	* 7 x 1 = 7
	* 7 x 2 = 14
	* ..
	* 7 x 9 = 63
	* 반복횟수 : i는 1부터 9까지 1씩증가
	* 규칙성 : 7 x i = 7*i를 출력
	* 반복문 종료 후 : 없음
	*/
	int i;
	int num = 7;
	printf("원하는 단을 입력하세요 : ");
	scanf("%d", &num);
	for (i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", num, i, num * i);
	}
	return 0;
}