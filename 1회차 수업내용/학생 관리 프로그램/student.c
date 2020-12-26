#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <stdio.h>
#include <malloc.h>
#include <string.h>

void printMenu() {
	printf("-------메뉴-----\n");
	printf("1.학생 추가\n");
	printf("2.학생 수정\n");
	printf("3.학생 삭제\n");
	printf("4.학생 확인\n");
	printf("5.학생 종료\n");
	printf("---------------\n");
	printf("메뉴를 선택하세요 : ");
}
Student* insertStuent(Student* std, int* nowCount, int* maxCount) {
	Student tmp;
	//학생 정보를 입력 받음
	printf("학교 : ");
	scanf("%s", tmp.schoolName);
	printf("이름 : ");
	scanf("%s", tmp.name);
	printf("입학년도 : ");
	scanf("%d", &tmp.year);
	printf("학년 : ");
	scanf("%d", &tmp.grade);
	printf("학반 : ");
	scanf("%d", &tmp.class);
	printf("번호 : ");
	scanf("%d", &tmp.num);
	printf("국어 : ");
	scanf("%d", &tmp.score.kor);
	printf("영어 : ");
	scanf("%d", &tmp.score.eng);
	printf("수학 : ");
	scanf("%d", &tmp.score.math);
	//입력받은 학생 정보를 배열에 추가
	std[(*nowCount)++] = tmp;
	//현재 학생수가 최대학생수와 같으면 크기를 늘려줘야함
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
		printf("학교     : %s\n", std[i].schoolName);
		printf("이름     : %s\n", std[i].name);
		printf("입학년도 : %d\n", std[i].year);
		printf("학년     : %d\n", std[i].grade);
		printf("학반     : %d\n", std[i].class);
		printf("번호     : %d\n", std[i].num);
		printf("국어     : %d\n", std[i].score.kor);
		printf("영어     : %d\n", std[i].score.eng);
		printf("수학     : %d\n", std[i].score.math);
		printf("--------------------\n");
	}
}
Student* loadFile(const char *fileName, int* nowCount, int* maxCount) {
	FILE *fp = fopen(fileName, "r");
	//파일 열기에 실패하면 *maxCount개만큼 배열을 생성하여 반환
	if (fp == NULL) {
		return (Student*)malloc(sizeof(Student) * *maxCount);
	}
	//파일 열기에 성공하면
	//저장된 학생 수
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
	//fprintf(fp, "저장된 학생수\n");
	fprintf(fp, "%d\n", nowCount);
	//fprintf(fp, "학교명\t이름\t입학년도\t학년\t반\t번호\t국어\t영어\t수학\n");
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
	printf("입학년도 : ");
	scanf("%d", &tmp.year);
	printf("학년 : ");
	scanf("%d", &tmp.grade);
	printf("학반 : ");
	scanf("%d", &tmp.class);
	printf("번호 : ");
	scanf("%d", &tmp.num);
	return tmp;
}

int modifyStudent(Student* std, int nowCount, Student s) {
	for (int i = 0; i < nowCount; i++) {
		if (s.year == std[i].year && s.grade == std[i].grade &&
			s.class == std[i].class && s.num == std[i].num) {
			printf("이름 : ");
			scanf("%s", s.name);
			printf("국어 : ");
			scanf("%d", &s.score.kor);
			printf("영어 : ");
			scanf("%d", &s.score.eng);
			printf("수학 : ");
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