#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"

void printMenu() {
	printf("-------메뉴-------\n");
	printf("1. 학생 정보 입력\n");
	printf("2. 학생 정보 출력\n");
	printf("3. 학생 정보 수정\n");
	printf("4. 학생 정보 삭제\n");
	printf("5. 프로그램 종료\n");
	printf("------------------\n");
	printf("메뉴를 선택하세요 : ");
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
	printf("학년 : ");
	scanf("%d", &tmp.grade);
	printf("반   : ");
	scanf("%d", &tmp.clas);
	printf("번호 : ");
	scanf("%d", &tmp.num);
	return tmp;
}
void inputOtherInfo(STUDENT* tmp) {
	printf("이름 : ");
	scanf("%s", tmp->name);
	printf("국어 : ");
	scanf("%lf", &tmp->kor);
	printf("영어 : ");
	scanf("%lf", &tmp->eng);
	printf("수학 : ");
	scanf("%lf", &tmp->math);
}
void printStudent(STUDENT* std, int count) {
	for (int i = 0; i < count; i++) {
		printf("---------------------------------\n");
		/*printf("이름 : %s\n", std[i].name);
		printf("학년 : %d\n", std[i].grade);
		printf("반   : %d\n", std[i].clas);
		printf("번호 : %d\n", std[i].num);
		printf("국어 : %.2lf\n", std[i].kor);
		printf("영어 : %.2lf\n", std[i].eng);
		printf("수학 : %.2lf\n", std[i].math);*/
		printf("%d학년 %d반 %d번 %s 국어 : %.2lf, 영어 : %.2lf, 수학 : %.2lf\n", 
			std[i].grade, std[i].clas, std[i].num, std[i].name,
			std[i].kor, std[i].eng, std[i].math);
	}
	if (count == 0) {
		printf("---------------------------------\n");
		printf("저장된 학생 정보가 없습니다.\n");
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