#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMenu() {}
typedef enum Menu {Add=1, Mod=2, Del=3, ESC=4}Menu;
int main() {
	Menu menu = 0;
	//�ҷ����� ���
	do {
		printMenu();
		scanf("%d", &menu);
		switch (menu)
		{
		case Add:	printf("�߰����\n");	break;
		case Mod:	printf("�������\n");	break;
		case Del:	printf("�������\n");	break;
		case ESC:	printf("������\n");	break;
		default:	printf("�߸��ȱ��\n");	break;
		}
	} while (menu != ESC);
	//������
	return 0;
}
