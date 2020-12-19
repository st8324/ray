#pragma once

typedef enum Menu { ADD = 1, MOD = 2, DEL = 3, SEA = 4, ESC = 5 } Menu;
//����(Score) : �����, �����, ���м���
typedef struct Score {
	int kor;
	int eng;
	int math;
}Score;


//�л�(Stuent) : �б��̸�, �л��̸�, �г�, ��, ��ȣ, ����, ���г⵵
typedef struct Student {
	char schoolName[21];
	char name[21];
	int grade;
	int class;
	int num;
	int year;
	Score score;
}Student;
//�л����� ���α׷� ���� �Լ���
void printMenu();
//�л� ������ �迭�� �߰�
Student* insertStuent(Student *std,int* nowCount,int* maxCount);