#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct HighStudent1 {
	char schoolName[41];//�б���(�ִ� �ѱ� 20��) schoolName,
	int grade;//�г� grade, 
	int class;//�� class,
	int num;//��ȣ num,
	char name[21];//�̸�(�ִ� �ѱ� 10��) name
}HighStudent1;
typedef struct HighStudent2 {
	int grade;//�г� grade, 
	int class;//�� class,
	int num;//��ȣ num,
	char name[21];//�̸�(�ִ� �ѱ� 10��) name
	char schoolName[41];//�б���(�ִ� �ѱ� 20��) schoolName,
}HighStudent2;
int main() {
	printf("HighStudent1 ����ü�� ũ�� : %d\n"
		,sizeof(HighStudent1));
	printf("HighStudent2 ����ü�� ũ�� : %d\n"
		, sizeof(HighStudent2));
	return 0;
}