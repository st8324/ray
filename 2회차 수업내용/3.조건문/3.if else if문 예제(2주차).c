#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - if else if문
	* //조건식1이 참이면 실행문1을 실행하고 
	* //조건식1이 거짓이고, 
	* //조건식2가 참이면 실행문2를 실행하고
	* //조건식1과 조건식2 모두 거짓이면 실행문3을 실행해라
	* if(조건식1){
	*	실행문1;
	* }else if(조건식2){
	*	실행문2;
	* }else{
	*	실행문3;
	* }
	*/
	/* 
	* 정수 num의 임의의 값으로 초기화하고, num가 0인지, 
	* 음수인지, 양수인지를 판별하는 코드를 작성하세요.
	* =>num가 0과 같다면 0이라고 출력하고,
	*	(num가 0이 아니고) num가 0보다 작다면 음수라고 출력하고,
	*   (num가 0이 아니고, 음수가 아니면) 양수라고 출력
	*/
	int num = -3;
	if (num == 0) {
		printf("0\n");
	}
	else if (num < 0) {
		printf("%d는 음수\n", num);
	}
	else {
		printf("%d는 양수\n", num);
	}
	
	return 0;
}