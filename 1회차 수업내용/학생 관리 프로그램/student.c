#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <stdio.h>

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