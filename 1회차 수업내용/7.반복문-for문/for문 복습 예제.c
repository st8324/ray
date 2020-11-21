#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// Hello world! 5번 출력
	int i;
	for (i=1; i<=5 ;i++ ) {
		printf("Hello world!\n");
	}
	//1부터 9까지 출력
	for (i = 1; i <= 9; i++) {
		printf("%d\n",i);
	}
	//i=10
	//7단 출력
	for (i = 1; i <= 9; i++) {
		printf("7 X %d = %d\n", i, 7*i);
	}
	/*
	num1과 num2의 공약수 출력 예제
	 - 반복횟수 : i는 1부터 num1까지 1씩 증가
	 - 규칙성 : i가 num1의 약수이고 i가 num2의 약수이면 i를 출력
		=> num1을 i로 (나누었을 때 나머지)가 0과 (같)(고)
		   num2를 i로 (나누었을 때 나머지)가 0과 (같다)(면)
		   i를 출력
		=> num1 % i == 0 && num2 % i == 0 면
		   i를 출력
		=> if(num1 % i == 0 && num2 % i == 0){
				printf("%d ",i);
			}
	 - 반복문 종료 후 : 없음
	*/
	int num1 = 8, num2 = 12;
	int gcd = 1;
	printf("%d와 %d의 공약수 : ",num1,num2);
	for (i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			printf("%d ", i);
			gcd = i;
		}
	}
	printf("\n%d와 %d의 최대 공약수 : %d\n", num1, num2,gcd);
	return 0;
}