#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* ����� �������� �־��� ���� ���������� ����ϴ� ����
	* 31 : 1, 3, 5, 7, 8, 10, 12
	* 30 : 4, 6, 9, 11
	* 28 : 2
	* month�� 1�� ���ų� month��  3�� ���ų� month��  5�� ���ų�
	* month�� 8�� ���ų� 10�� ���ų� 12�� ���ٸ� 
	* 31���Դϴٶ�� ���
	* �ƴϸ� month�� 4�� ���ų� month�� 6�� ���ų� month�� 9�� ���ų�
	* month�� 11�� ���ٸ�
	* 30���Դϴٶ�� ���
	* �ƴϸ� month�� 2�� ���ٸ�
	* 28���Դϴٶ�� ���
	* �ƴϸ�
	* �߸��� ���Դϴٶ�� ���
	*/
	int month = 13;
	if (month == 1 || month == 3 || month == 5 || month == 7 ||
		month == 8 || month == 10 || month == 12) {
		printf("%d�� %d�� ���� �ֽ��ϴ�.\n", month, 31);
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		printf("%d�� %d�� ���� �ֽ��ϴ�.\n", month, 30);
	}
	else if (month == 2) {
		printf("%d�� %d�� ���� �ֽ��ϴ�.\n", month, 28);
	}
	else {
		printf("%d���� ���� ���Դϴ�.\n", month);
	}
	return 0;
}