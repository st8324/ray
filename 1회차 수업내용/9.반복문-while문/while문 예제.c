#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* while문
	* while(조건식){
	*	실행문;
	* }
	* 
	* 초기화;
	* while(조건식){
	*	실행문;
	*	증감식;
	* }
	* - for문으로 작성된 코드는 while문으로 작성할 수 있다.(반대도 가능)
	* - 주로 값이 일정하게 증가하는 경우는 for문을 많이 쓴다.
	* - 주로 반복횟수가 정해져있는 경우 for문을 많이 쓴다.
	* - for문의 조건식은 생략가능하지만 while문의 조건식은 생략할 수 없다
	*/
	int i;
	i = 1;
	while (i <= 5) {
		//i가 1,2,3,4,5일때 출력
		printf("Hello world!\n");
		i++;
	}
	printf("============\n");
	i = 1;
	while (i++ <= 5) {
		//i가 2,3,4,5,6일 때 출력
		printf("Hello world!\n");
	}
	i = 1;
	while (i <= 9) {
		printf("7 x %d = %d\n", i, 7 * i);
		i++;
	}
	char ch = 'a';
	while (ch != 'z') {
		printf("문자를 입력하세요(종료하려면 z를 입력) : ");
		scanf(" %c", &ch);
	}
	return 0;
}