#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 5��¥�� �迭�� �����Ͽ� 5���� ���� ������ �Է� �޾� �迭��
	*   ������ �� ����ϴ� ����
	* �迭�� : score
	* ũ�� : 5
	* ����
	*/
	int score[5] = { 0 };
	int size = sizeof(score) / sizeof(int);
	for (int i = 0; i < size; i++) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < size; i++) {
		printf("���� : %d\n", score[i]);
	}

	
	return 0;
}