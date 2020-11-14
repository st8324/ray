#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 두 정수의 공약수를 구하는 예제
	* 공약수 : 공통인 약수
	* 최대 공약수 : 공약수 중 가장 큰 약수
	* 8 의 약수 : 1 2 4 8
	* 12의 약수 : 1 2 3 4 6 12
	* 8과 12의 공약수 : 1 2 4
	* 8과 12의 최대 공약수 : 4
	* 반복횟수 : i는 1부터 num1까지 1씩 증가
	* 규칙성 : i가 num1의 약수이고 i가 num2의 약수이면 i를 출력
	*		num1을 i로 나누었을 때 나머지가 0과 같고 num2를 i로 나누었을 때 나머지가
	*		0과 같다면 i를 출력
	* 반복문 종료 후 : 없음
	*/
	int i;
	int num1 = 8, num2 = 12;
	for (i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i== 0 ){
			printf("%d ", i);
		}
	}
	return 0;
}