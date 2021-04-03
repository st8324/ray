#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 
* - 함수를 사용하는 이유
* 1. 코드의 중복을 제거하여 효율적으로 코딩
* 2. 재사용
*/
/* 
* 음료수자판기	: 함수
* 돈,메뉴		: 매개변수
* 음료수			: 리턴타입
* 매개변수 : 함수가 동작하기 위해 필요한 필수 정보들
* 리턴타입 : 함수가 동작한 후 함수를 부른 곳에게 알려줄 정보
*/
/* 
* 기능 : 두 정수와 산술연산자가 주어지면 산술 연산 결과를
*		 알려주는 함수
* 매개변수 : 두 정수, 산술연산자 => int num1,  char op, int num2
* 리턴타입 : 산술연산결과 => 실수 => double
* 함수이름 : calc
*/
double calc1(int num1, char op, int num2) {
	double result = 0.0;
	switch (op) {
	case '+':	result = num1 + num2;		break;
	case '-':	result = num1 - num2;		break;
	case '*':	result = num1 * num2;		break;
	case '%':	result = num1 % num2;		break;
	case '/':	result = (double)num1 / num2;	break;
	}
	return result;
}
double calc2(int num1, char op, int num2) {
	switch (op) {
	case '+':	return num1 + num2;
	case '-':	return num1 - num2;	
	case '*':	return num1 * num2;		
	case '%':	return num1 % num2;		
	case '/':	return (double)num1 / num2;	
	}
	return 0.0;
}
int main() {
	/* - calc1 또는 calc2 함수를 이용하여 콘솔에 1 / 2 = 0.5가
	*    출력되도록 코드를 작성하세요.
	*/
	int num1 = 1, num2 = 2;
	char op = '/';
	double result = calc1(num1, op, num2);
	printf("%d %c %d = %.1lf\n",num1, op, num2, result );
	return 0;
}