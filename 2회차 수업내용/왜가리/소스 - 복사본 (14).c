#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
* - 기능 : 두 정수의 최대 공약수를 알려주는 함수
* - 매개변수 : 두 정수 => int num1, int num2
* - 리턴타입 : 최대 공약수 => 정수 => int
* - 함수이름 : GCD */
int GCD(int num1, int num2) {
	int gcd = 1;
	for (int i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
		}
	}
	return gcd;
}

int main() {
	int num1 = 8, num2 = 12, gcd = 1;;
	gcd = GCD(num1, num2);
	printf("최대 공약수 : %d\n", gcd);
	gcd = GCD(213, 412);
	printf("최대 공약수 : %d\n", gcd);
	return 0;
}