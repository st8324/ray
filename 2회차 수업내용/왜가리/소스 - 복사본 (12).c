#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*  
* 기능 : 두 정수를 더하여 더한 값을 알려주는 함수
* 매개변수 : 두 정수 => int num1, int num2
* 리턴타입 : 두 정수의 합 => 정수 => int
* 함수이름 : add
*/
int add(int num1, int num2) {
	return num1 + num2;
}
/*
* 기능 : 두 정수를 더하여 더한 값을 콘솔에 출력하는 함수
* 매개변수 : 두 정수 => int num1, int num2
* 리턴타입 : 없음 => void
* 함수이름 : add2
*/
void add2(int num1, int num2) {
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
}

int main() {
	/* 함수 : 하나의 (기능을 하도록 모아놓은 코드)들 
	*  - 매개변수(입력)   : 함수를 동작시키기 위해 필요한 최소한의
	*		정보들
	*  - 리턴타입(결과물) : 함수가 동작한 후 알려주는 정보, 
	*		자료형이나 구조체등이 올 수 있다. 변수이름 x
	* 
	*  음료수 자판기
	*  - 돈, 메뉴 선택(입력)
	*  - 음료수(출력, 결과물)
	* - 함수 선언 및 구현(함수 정의)하는 방법
	* 리턴타입 함수명(매개변수){
	*	구현;
	*	return 값;
	* }
	* 
	* - 함수 정의하는 위치 : main함수 앞
	* 
	*/
	int num1 = 1, num2 = 3;
	int res = add(num1, num2);
	add2(2, 5);
	return 0;
}