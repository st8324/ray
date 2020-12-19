#pragma once

typedef enum Menu { ADD = 1, MOD = 2, DEL = 3, SEA = 4, ESC = 5 } Menu;
//성적(Score) : 국어성적, 영어성적, 수학성적
typedef struct Score {
	int kor;
	int eng;
	int math;
}Score;


//학생(Stuent) : 학교이름, 학생이름, 학년, 반, 번호, 성적, 입학년도
typedef struct Student {
	char schoolName[21];
	char name[21];
	int grade;
	int class;
	int num;
	int year;
	Score score;
}Student;
//학생관리 프로그램 관련 함수들
void printMenu();
//학생 정보를 배열에 추가
Student* insertStuent(Student *std,int* nowCount,int* maxCount);