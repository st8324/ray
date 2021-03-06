#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 정수 num에 값을 입력하여, 
	* num가 2의 배수이면 2의 배수라고 출력하고,
	* num가 3의 배수이면 3의 배수라고 출력하는 코드를 작성하세요.
	* 단, 6과 같이 2의 배수이면서 3의 배수인 정수는 마음대로
	*   출력하세요(2의배수라고 출력해도 되고, 3의 배수라고 
	*   출력해도 된다.)
	*/
	int num = 12;
	if (num % 2 == 0) {
		printf("%d는 2의 배수\n", num);
	}
	else if (num % 3 == 0) {
		printf("%d는 3의 배수\n", num);
	}
	return 0;
}