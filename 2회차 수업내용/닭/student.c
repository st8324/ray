#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"

void printMenu() {
	printf("-------�޴�-------\n");
	printf("1. �л� ���� �Է�\n");
	printf("2. �л� ���� ���\n");
	printf("3. �л� ���� ����\n");
	printf("4. �л� ���� ����\n");
	printf("5. ���α׷� ����\n");
	printf("------------------\n");
	printf("�޴��� �����ϼ��� : ");
}
int searchStudent(const STUDENT* std, int count, STUDENT tmp) {
	for (int i = 0; i < count; i++) {
		if (std[i].grade == tmp.grade &&
			std[i].clas == tmp.clas &&
			std[i].num == tmp.num) {
			return i;
		}
	}
	return -1;
}
STUDENT inputSearchInfo() {
	STUDENT tmp;
	printf("�г� : ");
	scanf("%d", &tmp.grade);
	printf("��   : ");
	scanf("%d", &tmp.clas);
	printf("��ȣ : ");
	scanf("%d", &tmp.num);
	return tmp;
}
void inputOtherInfo(STUDENT* tmp) {
	printf("�̸� : ");
	scanf("%s", tmp->name);
	printf("���� : ");
	scanf("%lf", &tmp->kor);
	printf("���� : ");
	scanf("%lf", &tmp->eng);
	printf("���� : ");
	scanf("%lf", &tmp->math);
}
void printStudent(STUDENT* std, int count) {
	for (int i = 0; i < count; i++) {
		printf("---------------------------------\n");
		/*printf("�̸� : %s\n", std[i].name);
		printf("�г� : %d\n", std[i].grade);
		printf("��   : %d\n", std[i].clas);
		printf("��ȣ : %d\n", std[i].num);
		printf("���� : %.2lf\n", std[i].kor);
		printf("���� : %.2lf\n", std[i].eng);
		printf("���� : %.2lf\n", std[i].math);*/
		printf("%d�г� %d�� %d�� %s ���� : %.2lf, ���� : %.2lf, ���� : %.2lf\n", 
			std[i].grade, std[i].clas, std[i].num, std[i].name,
			std[i].kor, std[i].eng, std[i].math);
	}
	if (count == 0) {
		printf("---------------------------------\n");
		printf("����� �л� ������ �����ϴ�.\n");
	}
	printf("---------------------------------\n");
}
void deleteStudent(STUDENT* std, int* count, int index) {
	if (index < 0 || index >= *count) {
		return;
	}
	for (int i = index; i < *count - 1; i++) {
		std[i] = std[i + 1];
	}
	(*count)--;
}
int loadFile(char* filename, STUDENT* std) {
	FILE* fp;
	int count = 0;
	fp = fopen(filename , "r");
	if (fp != NULL) {
		fscanf(fp, "%d", &count);
		for (int i = 0; i < count; i++) {
			fscanf(fp, "%d %d %d %s %lf %lf %lf",
				&std[i].grade, &std[i].clas, &std[i].num, std[i].name,
				&std[i].kor, &std[i].eng, &std[i].math);
		}
		fclose(fp);
	}
	return count;
}
void saveFile(char* filename, STUDENT* std, int count) {
	FILE* fp;
	fp = fopen(filename, "w");
	fprintf(fp, "%d\n", count);
	for (int i = 0; i < count; i++) {
		fprintf(fp, "%d %d %d %s %.2lf %.2lf %.2lf\n",
			std[i].grade, std[i].clas, std[i].num,
			std[i].name, std[i].kor, std[i].eng, std[i].math);
	}
	fclose(fp);
}