#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <stdio.h>

void printMenu() {
	printf("-------�޴�-----\n");
	printf("1.�л� �߰�\n");
	printf("2.�л� ����\n");
	printf("3.�л� ����\n");
	printf("4.�л� Ȯ��\n");
	printf("5.�л� ����\n");
	printf("---------------\n");
	printf("�޴��� �����ϼ��� : ");
}
Student* insertStuent(Student* std, int* nowCount, int* maxCount) {
	Student tmp;
	//�л� ������ �Է� ����
	printf("�б� : ");
	scanf("%s", tmp.schoolName);
	printf("�̸� : ");
	scanf("%s", tmp.name);
	printf("���г⵵ : ");
	scanf("%d", &tmp.year);
	printf("�г� : ");
	scanf("%d", &tmp.grade);
	printf("�й� : ");
	scanf("%d", &tmp.class);
	printf("��ȣ : ");
	scanf("%d", &tmp.num);
	printf("���� : ");
	scanf("%d", &tmp.score.kor);
	printf("���� : ");
	scanf("%d", &tmp.score.eng);
	printf("���� : ");
	scanf("%d", &tmp.score.math);
	//�Է¹��� �л� ������ �迭�� �߰�
	std[(*nowCount)++] = tmp;
	//���� �л����� �ִ��л����� ������ ũ�⸦ �÷������
	if (*maxCount == *nowCount) {
		*maxCount += 10;
		Student* stdTmp = (Student*)malloc(sizeof(Student) * *maxCount);
		memcpy(stdTmp, std, sizeof(Student) * *nowCount);
		free(std);
		std = stdTmp;
	}
	return std;
}