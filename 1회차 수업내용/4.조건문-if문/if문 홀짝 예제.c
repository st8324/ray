#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 11;
	//정수 num가 짝수이면 짝수라고 출력
	/*
	if (정수 num가 짝수와 같다) {
		짝수라고 출력;
	}
	if(정수 num가 2의 배수와 같다){
		짝수라고 출력;
	}
	if(정수 num를 2로 나누었을 때 나머지가 0과 같다){
		짝수라고 출력;
	}
	if(num 2 % 0 == ){
		printf("짝수\n");
	}
	*/
	if (num % 2 == 0) {
		printf("짝수\n");
	}
	//num가 홀수이면 홀수라고 출력
	if (!(num % 2 == 0)) {
		printf("홀수\n");
	}
	if (num % 2 == 1) {
		printf("홀수\n");
	}
	return 0;
}