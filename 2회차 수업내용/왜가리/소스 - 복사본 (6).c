#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct HighStudent {
	char schoolName[41];//�б���(�ִ� �ѱ� 20��) schoolName,
	int grade;//�г� grade, 
	int class;//�� class,
	int num;//��ȣ num,
	char name[21];//�̸�(�ִ� �ѱ� 10��) name
}HighStudent;

int main() {
	/* ����л� ����ü�� ����� ������.
	* - �б���(�ִ� �ѱ� 20��) schoolName,
	*   �г� grade, 
	*   �� class, 
	*   ��ȣ num, 
	*   �̸�(�ִ� �ѱ� 10��) name
	*   ���� �̷���� HighStudent ����ü�� �����غ�����.
	* - �б����� ���ϰ�, 1�г�, 2��, 3��, ȫ�浿 �л������� 
	*   ��ü�� ���� �ֿܼ� ����غ�����.
	*/
	HighStudent std = { "���ϰ�",1,2,3,"ȫ�浿" };
	printf("%s���б�, %d�г� %d�� %d�� %s\n",
		std.schoolName, std.grade, std.class, std.num, std.name);
	HighStudent arr[10] = {
		{ "���ϰ�",1,1,1,"ȫ�浿" },
		{ "���ϰ�",1,1,2,"������" },
		{ "���ϰ�",1,1,3,"�Ӳ���" } };
	for (int i = 0; i < 3; i++) {
		printf("%s���б�, %d�г� %d�� %d�� %s\n",
			arr[i].schoolName, arr[i].grade, arr[i].class, 
			arr[i].num, arr[i].name);
	}
	return 0;
}