#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* 1부터 10까지 합을 구하는 코드를 작성하세요.
	* 반복횟수 : i는 1부터 10까지 1씩 증가
	* 규칙성 : sum = sum + i
	* 반복문 종료 후 : sum을 출력
	*		sum = 0
	* i=1	sum = sum + 1  : 1
	* i=2	sum = sum + 2  : 3
	* i=3	sum = sum + 3  : 6
	* i=4	sum = sum + 4
	* ...	
	* i=9	sum = sum + 9
	* i=10	sum = sum + 10
	*/
	int i = 0;
	int sum = 0;
	for (i = 1, sum = 0; i <= 10; i++) {
		sum = sum + i;  //sum += i;
		printf("1부터 %d까지의 합 : %d\n", i, sum);
	}
	
	return 0;
}