#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* 정수 num가 2의 배수이면 2의 배수라고 출력하고
	* 아니면 num가 3의 배수이면 3의 배수라고 출력하고
	* 아니면 num가 6의 배수이면 6의 배수라고 출력하고
	* 아니면 num는 2,3,6의 배수가 아닙니다라고 출력
	*/
	int num = 6;
	if (num % 6 == 0) {
		printf("%d는 6의 배수\n", num);
	}
	else if (num % 3 == 0 && num % 6 != 0) {
		printf("%d는 3의 배수\n", num);
	}
	else if (num % 2 == 0 && num % 6 != 0) {
		printf("%d는 2의 배수\n", num);
	}
	else {
		printf("%d는 2,3,6의 배수가 아님\n", num);
	}
	return 0;
}