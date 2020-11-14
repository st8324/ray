#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//if문의 실행문이 1줄일 때에는 {}를 생략할 수 있다.
	int num = 2;
	if (num % 2 == 0)//; 여기 ;를 쓰지 않도록 조심
		printf("%d는 짝수\n", num);
	else
		printf("%d는 홀수\n", num);
	//if문 옆 ()에는 ;를 쓰지말자
	//else는 항상 앞에 if문을 필요로 한다.
	return 0;
}