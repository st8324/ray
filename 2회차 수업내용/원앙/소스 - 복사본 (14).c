#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* - �ֿܼ��� ������ �̸��� �Է¹޾� ����ϴ� �ڵ带 �ۼ��ϼ���.
	* - �Է��� �̸��� �����ϱ� ���� ���� �迭�� �ʿ�(�ѱ� �ִ� 10��)
	* - �Է¹ޱ� ���� scanf
	* - %s, �ּ�
	*/
	char name[21];
	printf("�̸� �Է��ϼ��� : ");
	scanf("%s", name);//scanf("%s", &name[0]);
	printf("�̸� : %s\n", name);


	return 0;
}