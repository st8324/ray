#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
* 기능 : 두 정수와 산술연산자가 주어지면 산술연산 결과를 알려주는 함수
* 매개변수 : 두 정수,산술연산자 => int num1, char op, int num2
* 리턴타입 : 산술연산결과 => 실수 => double
* 함수이름 : calc
*/
double calc(int num1, char op, int num2) {
	switch (op) {
	case '+':	return num1 + num2;
	case '-':	return num1 - num2;
	case '*':	return num1 * num2;
	case '%':	return num1 % num2;
	case '/':	return (double)num1 / num2;
	default:	return 0;
	}
}
int main() {
	int num1, num2;
	char op;
	printf("두 정수와 산술연산자 입력(예: 1 + 2) : ");
	scanf("%d %c %d", &num1, &op, &num2);
	//코드 추가
	double res = calc(num1, op, num2);
	printf("%d %c %d = %.1lf\n", num1, op, num2, res);

	return 0;
}
