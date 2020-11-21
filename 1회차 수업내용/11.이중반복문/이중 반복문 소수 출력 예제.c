#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 정수 num가 소수이면 소수라고 출력, 아니면 소수가 아니라고 출력
	* 하는 예제
	* - 소수 : 약수가 2개인 수
	* - 약수 : 나누어서 떨어지는 수
	* - 반복횟수 : i는 1부터 num까지 1씩 증가
	* - 규칙성 : i가 num의 약수이면 약수의 갯수 cnt를 1 증가
	* - 반복문 종료 후 : cnt가 2이면 약수라고 출력,
	*					 아니면 약수가 아니라고 출력
	*/
	int i, cnt = 0, num = 5;
	for ( num = 2 ; num <= 100 ; num++) {
		//num가 소수이면 출력하는 코드
		for (i = 1, cnt = 0 ; i <= num; i++) {
			if (num % i == 0) {
				cnt++;
			}
		}
		if (cnt == 2) {
			printf("%d ", num);
		}
	}

	


	return 0;
}