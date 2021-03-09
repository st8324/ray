#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - switch문(p.88)
	* - 사용하는 변수의 값이 제한적일 때 
	*   (월의 마지막일 출력 예제, 산술 연산 예제) 
	* - 식의 값이 제한적일 때
	*   (나머지 연산자를 이용할 때) 4 % 2 =>0 3 % 2=>1
	* switch(변수 또는 식){
	* case 값1:		if(변수 == 값1){
	*	실행문1;			실행문1;
	*	break;		}
	* case 값2:		else if(변수 == 값2){
	*	실행문2;			실행문2;
	*	break;		}
	* default:		else{
	*	실행문3;			실행문3;
	* }				}
	* - break는 switch문을 빠져 나가게 하는 역할
	* - 값은 정수와 문자 상수만 가능
	* case "0": //문자열이라 안됨
	* case num: //변수명이라 안됨
	* case 0:	//정수 상수 0이라 됨
	* case '0':	//문자 0이라 됨
	*/
	int num = 4;
	//num를 2로 나누었을 때 나머지가 0과 같으면 짝수
	//num를 2로 나누었을 때 나머지가 1과 같으면 홀수
	switch (num % 2) {
	case 0:
		printf("%d는 짝수\n",num);
		break;
	case 1:
		printf("%d는 홀수\n", num);
		break;
	}
	return 0;
}