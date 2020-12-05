#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
* - 재귀호출
*	- 함수 A의 구현부에서 함수A를 호출하는 경우
*	- 함수 A가 실행 중 다시 함수 A를 실행하는 경우
*	- 재귀호출은 잘 사용안됨
*	- 대부부 반복문으로 대채 가능
*	- 하지만 상황에 따라 재귀호출을 이용하면 편리하게 구현 가능
*/
/* 
* - 팩토리얼 예제 : 1부터 n까지의 곱을 n!
*	- 팩토리얼은 반복문으로 가능하나 여기서는 재귀 호출의 예를 위해 재귀함수를 이용
*/
/* 
* 기능 : 정수 n이 주어지면 n!을 구하는 함수
* 매개변수 : 정수 => int n
* 리턴타입 : n팩토리얼 => 정수 => int
* 함수이름 : factorial
* 5! = 5 * 4 * 3 * 2 * 1
*	 = 5 * 4!
*/
/*
main시작 -> factorial(5)시작 -> factorial(4)시작 -> factorial(3)시작 
-> factorial(2)시작 -> factorial(1)시작 -> factorial(1)종료 : return 1
->  factorial(2)종료 : return 2  ->  factorial(3)종료 : return 6
->  factorial(4)종료 : return 24 ->  factorial(5)종료 : return 120
->  main : factorial(5)의 값을 출력 -> main종료
*/
int factorial(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	if (n < 0) {
		return -1;
	}
	return n * factorial(n - 1);
}
int factorial2(int n) {
	int res = 1;
	if (n < 0) {
		return -1;
	}
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}
int factorial3() {
	printf("정수 n 입력 : ");
	int n = 1;
	scanf("%d", &n);
	int res = 1;
	if (n < 0) {
		return -1;
	}
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}
int main() {
	printf("5! = %d\n", factorial(5));
	printf("5! = %d\n", factorial2(5));
	printf("5! = %d\n", factorial3());
	return 0;
}
