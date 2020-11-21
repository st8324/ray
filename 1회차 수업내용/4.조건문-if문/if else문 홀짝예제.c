#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* if else문 : ~하면 ...하고 아니면 ....해라
	* 조건식이 참이면 실행문1을 실행하고, 아니면 
	* 실행문2를 실행해라
	* else : 현재 else의 위치를 기준으로 위의 모든
	*        조건식이 거짓이면
	* if(조건식){
	*	실행문1;
	* }else{
	*	실행문2;
	* }
	*/
	int num = 11;
	if (num % 2 == 0) {
		printf("%d는 짝수\n", num);
	}
	else {
		printf("%d는 홀수\n", num);
	}
	return 0;
}