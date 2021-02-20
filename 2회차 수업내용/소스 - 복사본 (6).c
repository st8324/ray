#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - 두 정수와 사칙연산자(+,-,/,*)를 입력하여 출력하는 코드를 
	*    작성하세요.
	*  - 입력 예시 : 1 + 2 : 네모칸 네모칸 네모칸
	*     네모칸 : 서식문자
	*  - 출력 예시 : 1 + 2
	*/
	int num1 = 0, num2 = 0;
	char operator = '+';
	printf("두 정수와 사칙연산자를 입력하세요(예 : 1 + 2) : ");
	scanf("%d %c %d", &num1, &operator, &num2);
	printf("%d %c %d\n", num1, operator, num2);
	return 0;
}