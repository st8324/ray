#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* - 5�� �л��� ���� ������ �Է¹޾� ����ϴ� ����(0~100) 
	* - 5�� �л��� ������ ����� ���ϴ� ����
	*/
	int korScore[5] = { 0 };
	int sum = 0;
	double avg = 0.0;
	for (int i = 0; i < 5; i++) {
		printf("�л�%d�� ���� : ", i + 1);
		scanf("%d", korScore + i);
		sum += korScore[i];
	}
	avg = sum / 5.0;//5�� �ȵǰ� 5.0���� �ؾ���
	printf("���� : %d\n", sum);
	printf("��� : %.2lf\n", avg);
	return 0;
}