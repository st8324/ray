#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
* 기능 : 두 정수가 주어지면 두 정수의 합을 알려주는 함수
* 매개변수 : 두 정수 => int num1, int num2
* 리턴타입 : 두 정수의 합 => 정수 => int
* 함수이름 : sum
*/
int sum(int num1, int num2) {
	int res = num1 + num2;
	return res;
}
int main() {
	int num1 = 1, num2 = 2;
	printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
	return 0;
}