#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 이중 if문(중첩 if문) : if문 실행문 안에 if문이 들어가있는
	*  형태
	* if(조건식1){
	*	if(조건식2){
	*		실행문1;
	*	}
	* }
	*/
	int num = 6;
	if (num % 2 == 0 && num % 3 != 0) {
		printf("%d는 2의 배수\n",num);
	}
	else if (num % 3 == 0 && num % 2 != 0) {
		printf("%d는 2의 배수\n",num);
	}
	else if (num % 2 == 0 && num % 3 == 0) {
		printf("%d는 6의 배수\n",num);
	}
	else {
		printf("%d는 2,3,6의 배수가 아님\n",num);
	}

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
		printf("%d는 2,3,6의 배수가 아님\n", num);
	}

	return 0;
}