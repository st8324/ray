#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* ���� num�� �Ҽ��̸� �Ҽ���� ���, �ƴϸ� �Ҽ��� �ƴ϶�� ���
	* �ϴ� ����
	* - �Ҽ� : ����� 2���� ��
	* - ��� : ����� �������� ��
	* - �ݺ�Ƚ�� : i�� 1���� num���� 1�� ����
	* - ��Ģ�� : i�� num�� ����̸� ����� ���� cnt�� 1 ����
	* - �ݺ��� ���� �� : cnt�� 2�̸� ������ ���,
	*					 �ƴϸ� ����� �ƴ϶�� ���
	*/
	int i, cnt = 0, num = 5;
	for ( num = 2 ; num <= 100 ; num++) {
		//num�� �Ҽ��̸� ����ϴ� �ڵ�
		for (i = 1, cnt = 0 ; i <= num; i++) {
			if (num % i == 0) {
				cnt++;
			}
		}
		if (cnt == 2) {
			printf("%d ", num);
		}
	}

	


	return 0;
}