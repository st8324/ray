#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum Season {
	SPRING = 1, SUMMER = 2, FALL = 3, WINTER = 4
}Season;

int main() {
	/* 
	* �������� ������ �ǹ̸� �ο��ϰ� ���� �� ���
	*/
	/* ������ �Է¹޾� �Է¹��� ������ ����ϴ� ���� */
	Season s;
	printf("������ �Է��ϼ��� (��:1, ����:2, ����:3, �ܿ�:4): ");
	scanf("%d", &s);
	switch (s)	{
	case SPRING:	printf("������ ������ ���Դϴ�.\n");		break;
	case SUMMER:	printf("������ ������ �����Դϴ�.\n");	break;
	case FALL:	printf("������ ������ �����Դϴ�.\n");	break;
	case WINTER:	printf("������ ������ �ܿ��Դϴ�.\n");	break;
	}

	return 0;
}