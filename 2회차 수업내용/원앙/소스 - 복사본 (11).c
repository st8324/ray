#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	*  �л��� ������ �����ϴ� �迭 score�� 30, 40, 55, 100, 90��
	*  ����Ǿ� �ִ�. �̶� ����� �л� ������ ������ ����� ���ϴ�
	*  �ڵ带 �ۼ��ϼ���.
	*/
	int score[5] = { 30, 40, 55, 100, 90 };
	int size = sizeof(score) / sizeof(int);
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += score[i];
	}
	printf("���� : %d\n", sum);
	printf("��� : %.2lf", (double)sum / size);
	return 0;
}