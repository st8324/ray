#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* 이중 if문 : if문의 실행문으로 if문이 나오는 형태
	* //이중 if문이 아님
	* if(조건식1){
	*	실행문1;
	* }
	* if(조건식2){
	*	실행문2;
	* }
	* //이중 if문
	* if(조건식1){
	*	if(조건식2){
	*		실행문1;
	*	}
	* }
	* if(조건식1 && 조건식2){
	*	실행문1;
	* }
	*/
	int num = 12;
	if (num % 2 == 0) {
		if (num % 3 == 0) {
			printf("%d는 6의 배수\n", num);
		}
		else {
			printf("%d는 2의 배수\n", num);
		}
	}
	else if (num % 3 == 0) {
		printf("%d는 3의 배수\n", num);
	}
	else {
		printf("%d는 2,3,6의 배수가 아닙니다\n", num);
	}
	return 0;
}