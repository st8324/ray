#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* �޷��� ���� �־����� �־��� ���� ���������� ����ϴ� �ڵ带
	* �ۼ��ϼ���.
	* 31�� : 1 3 5 7 8 10 12
	* 30�� : 4 6 9 11
	* 28�� : 2
	* - month�� 1�� ������ 31�� ����ϰ�
	*   month�� 2�� ������ 28�� ����ϰ�
	*   ...
	*/
	int month = 3;
	switch (month) {
	case 1:	case 3:	case 5:	case 7:	case 8:	case 10:	case 12:
		printf("%d���� 31���Դϴ�.\n", month);
		break;
	case 2:
		printf("%d���� 28���Դϴ�.\n", month);
		break;
	case 4:	case 6:	case 9:	case 11:
		printf("%d���� 30���Դϴ�.\n", month);
		break;
	default:
		printf("%d���� ���� ���Դϴ�.\n", month);
	}
	return 0;
}