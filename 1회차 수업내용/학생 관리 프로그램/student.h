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
//�л� ���� ���
void printStudent(Student *std, int nowCount);
//���Ͽ��� �л� ������ �ҷ��ͼ� �л� �迭�� ����
Student* loadFile(const char* fileName,int *nowCount,int *maxCount);
//�л� �迭�� �̿��Ͽ� ������ ���Ͽ� ����
void saveFile(const char* fileName,const Student* std, int nowCount);
