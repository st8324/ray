#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* do while문
	* - 무조건 1번은 실행된다.
	* - 다른 반복문은 조건식이 거짓이면 1번도 실행 안될수
	*   있지만, do while문은 무조건 1번은 실행된다.
	* do{
	*	실행문;
	* }while(조건식);
	*/
	char menu = '4';
	do {
		printf("----메뉴---\n");
		printf("1.저장\n");
		printf("2.불러오기\n");
		printf("3.실행\n");
		printf("4.종료\n");
		printf("-----------\n");
		printf("메뉴를 선택하세요 : ");
		scanf(" %c", &menu);
	} while (menu != '4');
	/*menu = '1';
	while (menu != '4') {
		printf("----메뉴---\n");
		printf("1.저장\n");
		printf("2.불러오기\n");
		printf("3.실행\n");
		printf("4.종료\n");
		printf("-----------\n");
		printf("메뉴를 선택하세요 : ");
		scanf(" %c", &menu);
	}*/
	return 0;
}