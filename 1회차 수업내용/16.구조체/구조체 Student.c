#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����б� �л� ������ ��Ÿ���� ����ü
typedef struct Stuent {
	char schoolName[31];
	int grade, class, num;
	char name[13];
}Student;

void printStudent(Student std) {
	printf("�б��� : %s\n", std.schoolName);
	printf("�г�   : %d\n", std.grade);
	printf("�й�   : %d\n", std.class);
	printf("��ȣ   : %d\n", std.num);
	printf("�̸�   : %s\n", std.name);
}

int main() {
	/* ����ü �ʱ�ȭ�� ������� ���� ������� �ʱ�ȭ �Ѵ� */
	Student std = { "���̰���б�",1,1,1,"ȫ�浿" };
	printStudent(std);
	return 0;
}
