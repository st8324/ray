#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 두 정수 num1,num2와 변수 op에 산술연사자가 
	* 주어지면 주어진 산술연산 결과를 출력하세요.
	* num1 = 1, num2 = 2, op = '/' 주어진다면
	* 결과가 1 / 2 = 0.5가 출력되도록 하세요.
	* 
	* op가 '+'와 같다면 1 + 2 = 3으로 출력하고
	* 아니면 op가 '-'와 같다면 1 - 2 = -1으로 출력하고
	* 아니면 op가 '*'와 같다면 1 * 2 = 2으로 출력하고
	* 아니면 op가 '/'와 같다면 1 / 2 = 0.5으로 출력하고
	* 아니면 op가 '%'와 같다면 1 % 2 = 1으로 출력하고
	* 아니면 잘못된 연산자라고 출력
	* 
	*/
	int num1 = 1, num2 = 2;
	char op = '/';
	printf("두 정수와 산술 연산자를 입력하세요(예:1 / 2) : ");
	scanf("%d %c %d", &num1, &op, &num2);
	if (op == '+' ) {
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
	}
	else if (op == '-') {
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
	}
	else if (op == '*') {
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
	}
	else if (op == '%') {
		printf("%d %% %d = %d\n", num1, num2, num1 % num2);
	}
	else if (op == '/') {
		printf("%d / %d = %.2lf\n", num1, num2, (double)num1 / num2);
	}
	else {
		printf("%c는 산술 연산자가 아닙니다.\n", op);
	}
	return 0;
}