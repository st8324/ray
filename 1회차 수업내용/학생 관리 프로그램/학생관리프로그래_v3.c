#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <Windows.h>
#include "student.h"

int main() {
	Menu menu = 0;
	int maxCount = 300;
	int nowCount = 0;
	//�л� �迭
	Student *std = (Student *)malloc(sizeof(Student) * maxCount);
	char* fileName = "student.txt";
	//�ҷ����� ���
	std = loadFile(fileName, &nowCount, &maxCount);
	
	do {
		printMenu();
		scanf("%d", &menu);
		Student tmp;
		switch (menu)
		{
		case ADD:	std = insertStuent(std, &nowCount, &maxCount);	break;
		case MOD:	
			tmp = inputSearchStudent("---������ �л����� �Է�---\n");
			if (!modifyStudent(std, nowCount, tmp)) {
				printf("-------------------------\n");
				printf("�ش� �л������� �����ϴ�.\n");
				printf("-------------------------\n");
			}
			break;
		case DEL:	
			printf("�������\n");	
			break;
		case SEA:	printStudent(std, nowCount);					break;
		case ESC:	break;
		default:	printf("�߸��ȱ��\n");	break;
		}
		printf("�ƹ�Ű�� ��������....");
		getchar(); //������ �޴� ������ �Է¹��ۿ� ���� ���͸� ó���ϱ� ����
		getchar();
		system("cls");
	} while (menu != ESC);
	//������
	saveFile(fileName, std, nowCount);
	if (std != NULL) {
		free(std);
	}
	printf("\n-------------------------\n");
	printf("���α׷��� �����մϴ�....");
	printf("\n-------------------------\n");
	return 0;
}
