#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - �迭�� �� Ž�� ���� 
	* - �迭 arr�� ���� num�� ���� �ִ��� ������(������ �ٸ���) Ȯ���ϴ� ����
	*/
	int arr[5] = { 2,4,6,8,10 };
	int num = 5;
	int size = sizeof(arr) / sizeof(int);
	int i = 0;
	for (i = 0; i < size; i++) {
		if (arr[i] == num) {
			break;
		}
	}
	//��ġ�ϴ� ���� ��ã���� �� i�� ���� 5
	//��ġ�ϴ� ���� ã���� �� i�� ���� 5���� �۴�
	if (i < size) {
		printf("%d�� �迭 %d������ �ִ� ���Դϴ�.\n", num, i);
	}
	else {
		printf("%d�� �迭�� ���� ���Դϴ�.\n", num);
	}
	return 0;
}