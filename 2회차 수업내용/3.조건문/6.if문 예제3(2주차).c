#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 두 정수와 산술 연산자를 입력받는 코드를 작성하세요.
	* 입력받은 산술 연산자가 +이면 두 정수의 합을 출력하고,
	* 입력받은 산술 연산자가 -이면 두 정수의 차를 출력하고,
	* 입력받은 산술 연산자가 *이면 두 정수의 곱을 출력하고,
	* 입력받은 산술 연산자가 /이면 두 정수의 나눈 결과를 출력하고,
	* 입력받은 산술 연산자가 %이면 두 정수의 나머지 결과를 출력하고,
	* 입력받은 산술 연산자가 잘못된 연산자이면 잘못된 연산자라고
	* 출력하는 코드를 작성하세요.
	*/
	int num1 = 0, num2 = 0;
	char op = '+';
	printf("두 정수와 산술 연산자를 입력하세요(예 : 1 + 2) : ");
	scanf("%d %c %d", &num1, &op, &num2);
	
	if (op == '+' ) {
		printf("%d %c %d = %d\n", num1, op, num2, num1 + num2);
	}
	else if (op == '-') {
		printf("%d %c %d = %d\n", num1, op, num2, num1 - num2);
	}
	else if (op == '*') {
		printf("%d %c %d = %d\n", num1, op, num2, num1 * num2);
	}
	else if (op == '%') {
		printf("%d %c %d = %d\n", num1, op, num2, num1 % num2);
	}
	else if (op == '/') {
		printf("%d %c %d = %.2f\n", num1, op, num2, (double)num1 / num2);
	}
	else {
		printf("%c는 산술연산자가 아닙니다.\n",op);
	}
	
	return 0;
}