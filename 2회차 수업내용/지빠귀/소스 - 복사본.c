#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* �޷��� ���� �־����� �־��� ���� ���������� ����ϴ� �ڵ带
	* �ۼ��ϼ���.
	* 31�� : 1 3 5 7 8 10 12
	* 30�� : 4 6 9 11
	* 28�� : 2
	* - month�� 1���̸� 31���̶�� ����ϰ�
	*   month�� 2���̸� 28���̶�� ����ϰ�
	*   ...
	*   month�� 12���̸� 31���̶�� ����ϰ�
	*   month�� 1~12���� �ƴϸ� �߸��� ���̶�� ���
	* - month�� 1���̰ų� month�� 3���̰ų� ... month�� 12���̸�
	*   31���̶�� ����ϰ�
	*   month�� 2���̸� 28���̶�� ����ϰ�
	*   month�� 4���̰ų� month�� 6���̰ų�... month�� 11���̸�
	*   30���̶�� ����ϰ�
	*   month�� 1~12���� �ƴϸ� �߸��� ���̶�� ���
	*/
	int month = 13;
	if (month == 1 || month == 3 || month == 5 || month == 7
		|| month == 8 || month == 10 || month == 12) {
		printf("%d���� 31��\n", month);
	}
	else if (month == 2) {
		printf("%d���� 28��\n", month);
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		printf("%d���� 30��\n", month);
	}
	else {
		printf("%d���� ���� ���Դϴ�.\n", month);
	}
	return 0;
}