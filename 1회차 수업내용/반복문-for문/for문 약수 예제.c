#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 정수 num의 약수를 출력하는 예제
	* 약수 : 나누었을 때 나머지가 0인 수
	* 4의 약수 : 1 2 4
	* 12의 약수 : 1 2 3 4 6 12
	* 반복횟수 : i는 1부터 num까지 1씩증가
	* 규칙성 : i가 num의 약수이면 i를 출력
	*		  => num를 i로 나누었을때 나머지가 0과 같다면 i를 출력
	* 반복문 종료 후 : 없음
	*/
	int num = 12;
	int i;
	for (i = 1; i <= num; i++) {
		if (num % i == 0 ) {
			printf("%d ",i);
		}
	}
	return 0;
}