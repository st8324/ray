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
//학생 정보 출력
void printStudent(Student *std, int nowCount);
//파일에서 학생 정보를 불러와서 학생 배열에 저장
Student* loadFile(const char* fileName,int *nowCount,int *maxCount);
//학생 배열을 이용하여 정보를 파일에 저장
void saveFile(const char* fileName,const Student* std, int nowCount);
//수정/삭제할 학생정보를 입력하여 학생정보를 만드는 함수
Student inputSearchStudent(const char*str);
//수정할 학생을 찾아서 학생 정보를 수정하는 함수
int modifyStudent(Student* std, int nowCount, Student s);
//삭제할 학생을 찾아서 학생 정보를 삭제하는 함수
int deleteStudent(Student* std, int* nowCount, Student s);