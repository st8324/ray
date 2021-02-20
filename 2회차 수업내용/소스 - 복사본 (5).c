#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - scanf : 콘솔에서 값들을 정형화된 문자열을 이용하여 읽어오는 함수
	*  scanf("서식문자1",변수의주소1);	
	* 주소연산자 : &
	* &변수명 : 변수명의 주소
	*/
	//변수 age에 나이를 입력받는 예제
	int age = 0;
	printf("나이를 입력하세요 : ");
	scanf("%d",&age);
	printf("나이 : %d\n", age);
	
	/* 두 정수를 입력받아 출력하는 예제 */
	int num1 = 0, num2 = 0;
	printf("두 정수를 입력하세요(예 : 1, 2) : ");
	scanf("%d,%d", &num1, &num2);
	printf("입력받은 두 정수 : %d, %d\n", num1, num2);
	char ch;
	scanf(" %c", &ch);
	printf("%c\n", ch);
	return 0;
}