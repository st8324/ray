#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 두 정수의 최대 공약수를 구하는 코드를 작성하세요. 
	* - 약수 : 나누어 떨어지는 수
	* - 공약수 : 공통으로 있는 약수
	* - 최대 공약수 : 공약수 중 가장 큰수
	* -  8의 약수 : 1 2 4 8
	* - 12의 약수 : 1 2 3 4 6 12
	* - 8과 12의 공약수 : 1 2 4
	* - 8과 12의 최대 공약수 : 4
	* 두 정수   : num1, num2, 최대 공약수를 저장할 변수 : gcd
	* 반복 횟수 : i는 1부터 num1까지 1씩 증가
	* 규칙성    : i가 num1의 약수이고 i가 num2의 약수이면
	*			  gcd에 i를 저장
	*			=>num1를 i로 (나누었을 때 나머지)가 0과 (같)(고)
	*			  num2를 i로 (나누었을 때 나머지)가 0과 (같다)(면)
	*			  gcd에 i를 (저장)
	* 반복문종료: gcd를 출력
	*/
	int num1 = 8, num2 = 16, i, gcd;
	for (i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
		}
	}
	printf("%d와 %d의 최대 공약수 : %d\n", num1, num2, gcd);

	return 0;
}