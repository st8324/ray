#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 다음과 같이 출력되도록 하나의 함수를 만드세요
* *****
* *******
* -----
* *****?????
* 기능 : 문자와 정수가 주어지면 문자를 주어진 정수개 만큼 출력하는 함수
* 매개변수 : 문자,정수 =>char ch, int cnt 
* 리턴타입 : 없음 =>void
* 함수이름 : print3
*/
/*
* 기능 : *****를 출력하는 함수
* 매개변수 : 없음 
* 리턴타입 : 없음 =>void
* 함수이름 : print1
*/
void print1() {
	printf("*****");
}
/*
* 기능 : 정수가 주어지면 *을 정수개 만큼 출력하는 함수
* 매개변수 : 정수 => int cnt 
* 리턴타입 : 없음 =>void
* 함수이름 : print2
*/
void print2(int cnt) {
	for (int i = 0; i < cnt; i++) {
		printf("*");
	}
}
/*
* 기능 : 문자와 정수가 주어지면 문자를 주어진 정수개 만큼 출력하는 함수
* 매개변수 : 문자,정수 =>char ch, int cnt 
* 리턴타입 : 없음 =>void
* 함수이름 : print3
*/
void print3(char ch, int cnt) {
	for (int i = 0; i < cnt; i++) {
		printf("%c",ch);
	}
}
int main() {
	print3('*',5);
	printf("\n");
	print3('*', 7);
	printf("\n");
	print3('-', 5);
	printf("\n");
	print3('*', 5);
	print3('?', 5);
	return 0;
}