#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 1부터 10까지의 합을 구하는 예제
	*		sum = 0
	* i=1	sum = 0 + 1
	* i=2	sum = 0 + 1 + 2
	* i=3	sum = 0 + 1 + 2 + 3
	* ...
	* i=10	sum = 0 + 1 + 2 + 3 + ... + 10
	*		sum0 = 0
	* i=1	sum1 = sum0 + 1
	* i=2	sum2 = sum1 + 2
	* i=3	sum3 = sum2 + 3
	* ...
	* i=10	sum10= sum9 + 10
	*		sum = 0
	* i=1	sum = sum + 1
	* i=2	sum = sum + 2
	* i=3	sum = sum + 3
	* ...
	* i=10	sum = sum + 10
	*		sum = sum + i;
	* 반복횟수 : i는 1부터 10까지 1씩 증가
	* 규칙성 : sum = sum + i;
	* 반복문 실행 후 : sum을 출력
	*/
	int i, sum = 0;
	for (i = 1; i <= 10; i++) {
		//sum = sum + i;
		sum += i;
	}
	printf("1부터 10까지 합 : %d\n", sum);
	return 0;
}