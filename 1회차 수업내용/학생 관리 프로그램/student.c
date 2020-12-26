#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <stdio.h>
#include <malloc.h>
#include <string.h>

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
void printStudent(Student* std, int nowCount) {
	for (int i = 0; i < nowCount; i++) {
		printf("--------------------\n");
		printf("�б�     : %s\n", std[i].schoolName);
		printf("�̸�     : %s\n", std[i].name);
		printf("���г⵵ : %d\n", std[i].year);
		printf("�г�     : %d\n", std[i].grade);
		printf("�й�     : %d\n", std[i].class);
		printf("��ȣ     : %d\n", std[i].num);
		printf("����     : %d\n", std[i].score.kor);
		printf("����     : %d\n", std[i].score.eng);
		printf("����     : %d\n", std[i].score.math);
		printf("--------------------\n");
	}
}
Student* loadFile(const char *fileName, int* nowCount, int* maxCount) {
	FILE *fp = fopen(fileName, "r");
	//���� ���⿡ �����ϸ� *maxCount����ŭ �迭�� �����Ͽ� ��ȯ
	if (fp == NULL) {
		return (Student*)malloc(sizeof(Student) * *maxCount);
	}
	//���� ���⿡ �����ϸ�
	//����� �л� ��
	fscanf(fp,"%d", nowCount);
	if (nowCount > maxCount) {
		maxCount = nowCount + 10;
	}
	Student*  std = (Student*)malloc(sizeof(Student) * *maxCount);
	for (int i = 0; i < *nowCount; i++) {
		fscanf(fp,"%s %s %d %d %d %d %d %d %d",
			std[i].schoolName, std[i].name, &std[i].year,
			&std[i].grade, &std[i].class, &std[i].num, 
			&std[i].score.kor, &std[i].score.eng, &std[i].score.math);
	}
	if (fp != NULL) {
		fclose(fp);
	}
	return std;
}
void saveFile(const char* fileName, const Student* std, int nowCount) {
	FILE* fp = fopen(fileName, "w");
	//fprintf(fp, "����� �л���\n");
	fprintf(fp, "%d\n", nowCount);
	//fprintf(fp, "�б���\t�̸�\t���г⵵\t�г�\t��\t��ȣ\t����\t����\t����\n");
	for (int i = 0; i < nowCount; i++) {
		fprintf(fp, "%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
			std[i].schoolName, std[i].name, std[i].year,
			std[i].grade, std[i].class, std[i].num,
			std[i].score.kor, std[i].score.eng, std[i].score.math);
	}

	fclose(fp);
}
Student inputSearchStudent(const char* str) {
	Student tmp;
	printf("%s\n", str);
	printf("���г⵵ : ");
	scanf("%d", &tmp.year);
	printf("�г� : ");
	scanf("%d", &tmp.grade);
	printf("�й� : ");
	scanf("%d", &tmp.class);
	printf("��ȣ : ");
	scanf("%d", &tmp.num);
	return tmp;
}

int modifyStudent(Student* std, int nowCount, Student s) {
	for (int i = 0; i < nowCount; i++) {
		if (s.year == std[i].year && s.grade == std[i].grade &&
			s.class == std[i].class && s.num == std[i].num) {
			printf("�̸� : ");
			scanf("%s", s.name);
			printf("���� : ");
			scanf("%d", &s.score.kor);
			printf("���� : ");
			scanf("%d", &s.score.eng);
			printf("���� : ");
			scanf("%d", &s.score.math);
			strcpy(s.schoolName, std[i].schoolName);
			std[i] = s;
			return 1;
		}
	}
	return 0;
}
int deleteStudent(Student* std, int* nowCount, Student s) {

}