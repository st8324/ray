#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* 반복문 : 규칙성있는 작업을 반복적으로 할 때 사용 
	*  - 반복횟수
	*  - 규칙성
	*  - 반복문 종료 후
	* 이중 반복문 : 반복문의 실행문으로 반복문이 나오는 경우 사용
	*/
	/* 
	* 반복문을 이용하여 a~z까지 출력하는 예제를 작성해보세요.
	* abcde...xyz
	* - 반복횟수 : 변수 ch가 a부터 z까지 1씩 증가
	* - 규칙성 : 변수 ch를 출력
	*/
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++) {
		printf("%c", ch);
	}
	/* 반복문을 이용하여 다음과 같이 출력하는 예제를 작성해보세요
	* a
	* ab
	* abc
	* abcd
	* ...
	* abcdef...xyz
	*/
	printf("\n");
	char ch2 = 'a';
	char lastCh = 'a';
	for (lastCh = 'a' ; lastCh <= 'z' ; lastCh++ ) {
		for (ch2 = 'a'; ch2 <= lastCh; ch2++) {
			printf("%c", ch2);
		}
		printf("\n");
	}
	
	return 0;
}