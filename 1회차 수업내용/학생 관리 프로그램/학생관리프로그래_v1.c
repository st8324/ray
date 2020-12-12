#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMenu() {}
typedef enum Menu {Add=1, Mod=2, Del=3, ESC=4}Menu;
int main() {
	Menu menu = 0;
	//불러오기 기능
	do {
		printMenu();
		scanf("%d", &menu);
		switch (menu)
		{
		case Add:	printf("추가기능\n");	break;
		case Mod:	printf("수정기능\n");	break;
		case Del:	printf("삭제기능\n");	break;
		case ESC:	printf("종료기능\n");	break;
		default:	printf("잘못된기능\n");	break;
		}
	} while (menu != ESC);
	//저장기능
	return 0;
}
