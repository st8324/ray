#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* for(초기화; 조건식; 증감식){
	*	실행문;
	* }
	* 
	* while(조건식){
	*	실행문;
	* }
	* 
	* 초기화;
	* while(조건식){
	*	실행문;
	*	증감식;
	* }
	*/
	
	int i;
	for (i = 1; i <= 5; i++) {
		printf("Hello\n");
	}

	i = 1;
	while (i <= 5) {
		printf("Hello\n");
		i++;
	}

	return 0;
}