#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <Windows.h>
#include "student.h"

int main() {
	Menu menu = 0;
	int maxCount = 2;
	int nowCount = 0;
	//�л� �迭
	Student *std = (Student *)malloc(sizeof(Student) * maxCount);
	//�ҷ����� ���

	do {
		printMenu();
		scanf("%d", &menu);
		Student tmp;
		switch (menu)
		{
		case ADD:	
			std = insertStuent(std, &nowCount, &maxCount);
			break;
		case MOD:	printf("�������\n");	break;
		case DEL:	printf("�������\n");	break;
		case SEA:	
			for (int i = 0; i < nowCount; i++) {
				printf("�̸� : %s\n", std[i].name);
			}
			break;
		case ESC:	printf("������\n");	break;
		default:	printf("�߸��ȱ��\n");	break;
		}
		printf("�ƹ�Ű�� ��������....");
		getchar(); //������ �޴� ������ �Է¹��ۿ� ���� ���͸� ó���ϱ� ����
		getchar();
		system("cls");
	} while (menu != ESC);
	//������
	if (std != NULL) {
		free(std);
	}
	return 0;
}
