#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* -문자가 q나 Q가 아닌 경우 계속 입력 받고 q나 Q이면 종료하는
	*  코드를 작성하세요
	* -입력받은 문자가 q이거나 Q이면 반복문 종료
	* -ch가 q와 같거나 ch가 Q와 같으면 반복문을 빠져 나감
	* 예시
	* 문자를 입력하세요 : a
	* 문자를 입력하세요 : c
	* 문자를 입력하세요 : !
	*/
	char ch = 'a';
	/*for (; ; ) {
		printf("문자를 입력하세요 : ");
		scanf(" %c", &ch);
		//ch가 q와 같거나 ch가 Q와 같으면 반복문을 빠져 나감
		if (ch == 'q' || ch == 'Q') {
			break;
		}
	}*/
	for (; ch != 'q' && ch != 'Q' ; ) {
		printf("문자를 입력하세요 : ");
		scanf(" %c", &ch);
	}
	return 0;
}