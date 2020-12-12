#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
	/* 
	* - 제곱함수(pow)
	*	- pow(실수a, 실수b)
	*	- a의 b제곱
	* - 절대값(abs)
	*	- abs(정수)
	*	- 정수의 절대값
	* - 루트(sqrt)
	*	- sqrt(실수)
	*	- 실수의 루트값
	*/
	printf("2의 3제곱 : %d\n", (int)pow(2, 3));
	printf("-3의 절대값 : %d\n", abs(-3));
	printf("루트 25 : %.2lf\n", sqrt(25));
	printf("루트 2  : %.2lf\n", sqrt(2));
	return 0;
}