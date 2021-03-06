#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 정수 num에 값을 입력하여, 
	* num가 2의 배수이면 2의 배수라고 출력하고,
	* num가 3의 배수이면 3의 배수라고 출력하고,
	* num가 6의 배수이면 6의 배수라고 출력하고, 
	* num가 2,3,6의 배수가 아니면 2,3,6의 배수가 아니라고 
	* 출력하는 코드를 작성하세요.
	* 단, 0은 마음대로
	*/
	int num = 12;
	//방법1 : 조건식 순서 변경
	if (num % 6 == 0) {
		printf("%d는 6의 배수\n", num);
	}
	else if (num % 3 == 0) {
		printf("%d는 3의 배수\n", num);
	}
	else if (num % 2 == 0) {
		printf("%d는 2의 배수\n", num);
	}
	else {
		printf("%d는 2,3,6의 배수가 아닙니다\n", num);
	}

	//방법2 : 조건식 강화
	if (num % 2 == 0 && num % 3 != 0) {
		printf("%d는 2의 배수\n", num);
	}
	else if (num % 3 == 0 && num % 2 != 0) {
		printf("%d는 3의 배수\n", num);
	}
	else if (num % 6 == 0) {
		printf("%d는 6의 배수\n", num);
	}
	else {
		printf("%d는 2,3,6의 배수가 아닙니다\n", num);
	}
	return 0;
}