#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*  
	* 정수 age에 나이를 입력받아, 청소년인지 판별하는 코드를 
	* 작성하세요. 단, 19세이하를 청소년이라 한다.
	* 나이를 입력하세요 : 19
	* 19세는 청소년인가? 1 
	* 
	* 나이를 입력하세요 : 20
	* 20세는 청소년인가? 0
	*/
	int age = 0;
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	printf("%d세는 청소년인가? %d\n", age, age <= 19);
	return 0;
}