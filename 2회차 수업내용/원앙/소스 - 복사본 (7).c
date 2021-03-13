#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	/* 
	*  - do while문 : 무조건 한번은 실행
	*  - for문이나 while문은 조건에 따라 한번도 실행되지 않을 수 있음
	* do{
	*	실행문;
	* }while(조건식);
	*/
	int i = 10;
	do {
		printf("Hello\n");
	} while (i < 5);

	return 0;
}