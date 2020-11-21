#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 두정수와 산술 연산자가 주어지면 산술 연산 결과를
	* 출력하는 예제
	*/
	int num1, num2;
	char op;
	printf("두 정수와 산술 연산자를 입력하세요(예:1 / 2) : ");
	scanf("%d %c %d", &num1, &op, &num2);
	switch (op) {
	case '+':
		printf("%d %c %d = %d\n", num1, op, num2, num1 + num2);
		break;
	case '-':
		printf("%d %c %d = %d\n", num1, op, num2, num1 - num2);
		break;
	case '*':
		printf("%d %c %d = %d\n", num1, op, num2, num1 * num2);
		break;
	case '%':
		printf("%d %c %d = %d\n", num1, op, num2, num1 % num2);
		break;
	case '/':
		printf("%d %c %d = %.2lf\n", num1, op, num2, (double)num1 / num2);
		break;
	default:
		printf("%c는 산술연산자가 아닙니다.\n", op);
	}
	return 0;
}