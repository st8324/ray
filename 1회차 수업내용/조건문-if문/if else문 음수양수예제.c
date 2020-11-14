#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 정수 num가 양수이면 양수라고 출력하고 음수이면
	* 음수라고 출력하는 코드를 작성하세요.
	* 단, 0은 양수라고 출력
	* num가 0보다 크거나 같으면 양수라고 출력하고,
	* 아니면 음수라고 출력
	
	if (num가 0보다 크거나 같다) {
		양수라고 출력;
	}
	else {
		음수라고 출력;
	}*/
	int num = 0;
	if (num >= 0) {
		printf("%d는 양수\n", num);
	}
	else {
		printf("%d는 음수\n", num);
	}
	return 0;
}