#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����б� �л� ������ ��Ÿ���� ����ü
typedef struct Stuent {
	char schoolName[31];
	int grade, class, num;
	char name[13];
}Student;

typedef struct Stuent1 {
	char schoolName[31];
	char name[13];
	int grade, class, num;
}Student1;

void printStudent(Student std);
Student inputStudent();

int main() {
	/* ����ü �ʱ�ȭ�� ������� ���� ������� �ʱ�ȭ �Ѵ� */
	Student std = { "���̰���б�",1,1,1,"ȫ�浿" };
	printStudent(std);
	/*
	* - ����ü�� 4����Ʈ ������ �����ϱ� ������ ����ü��
	*   ��� ���� ������ ���� ����ü�� ũ�Ⱑ �޶��� �� �ִ�*/
	printf("Student����ü ũ�� : %d\n", sizeof(Student));
	printf("Student1����ü ũ�� : %d\n", sizeof(Student1));
	Student arr[5] = {
		{ "���̰���б�",1,1,1,"ȫ�浿" },
		{ "���̰���б�",1,1,2,"�Ӳ���" },
		{ "���̰���б�",1,1,3,"������" },
		{ "���̰���б�",1,1,4,"�̼���" },
		{ "���̰���б�",1,1,5,"�迵��" }
	};
	//0������ �ִ� �л� ���� ����
	Student tmp = arr[0];
	for (int i = 0; i < 5; i++) {
		arr[i].grade = 2;
		printStudent(arr[i]);
	}
	//0������ �ִ� �л��� ������ �����ص� ���� ������ tmp�� ������� ����
	printStudent(tmp);
	tmp = inputStudent();
	printStudent(tmp);
	return 0;
}
Student inputStudent() {
	Student tmp;
	printf("--�л� ������ �Է��ϼ���--\n");
	printf("�б� : ");
	scanf("%s",tmp.schoolName);
	printf("�г� : ");
	scanf("%d", &tmp.grade);
	printf("�й� : ");
	scanf("%d", &tmp.class);
	printf("��ȣ : ");
	scanf("%d", &tmp.num);
	printf("�̸� : ");
	scanf("%s", tmp.name);
	return tmp;
}
void printStudent(Student std) {
	printf("�б��� : %s\n", std.schoolName);
	printf("�г�   : %d\n", std.grade);
	printf("�й�   : %d\n", std.class);
	printf("��ȣ   : %d\n", std.num);
	printf("�̸�   : %s\n", std.name);
}