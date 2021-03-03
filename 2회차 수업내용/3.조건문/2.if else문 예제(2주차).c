#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - if else문
	* //조건식이 참이면 실행문1을 실행하고 아니면 실행문2를 실행해라
	* if(조건식){
	*	실행문1;
	* }else{
	*	실행문2;
	* }
	*/
	/* 
	* 정수 num가 짝수이면 짝수라고 출력해라
	* if(정수 num가 짝수이다){
	*	짝수라고 출력;
	* }
	*/
	int num = 3;
	if (num % 2 == 0) {
		printf("%d는 짝수\n", num);
	} 
	else {
		printf("%d는 홀수\n", num);
	}
	return 0;
}