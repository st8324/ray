#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* ���� num�� 2�� ����̸� 2�� ������ ����ϰ�
	* �ƴϸ� num�� 3�� ����̸� 3�� ������ ����ϰ�
	* �ƴϸ� num�� 6�� ����̸� 6�� ������ ����ϰ�
	* �ƴϸ� num�� 2,3,6�� ����� �ƴմϴٶ�� ���
	*/
	int num = 6;
	if (num % 6 == 0) {
		printf("%d�� 6�� ���\n", num);
	}
	else if (num % 3 == 0 && num % 6 != 0) {
		printf("%d�� 3�� ���\n", num);
	}
	else if (num % 2 == 0 && num % 6 != 0) {
		printf("%d�� 2�� ���\n", num);
	}
	else {
		printf("%d�� 2,3,6�� ����� �ƴ�\n", num);
	}
	return 0;
}