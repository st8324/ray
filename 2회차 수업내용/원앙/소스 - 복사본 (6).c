#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - continue
	*  - for�������� ���������� �̵�
	*  - while�������� ���ǽ����� �̵�
	*/
	char menu = '1';
	while (menu != '4') {
		printf("�޴�\n");
		printf("1. �л� �˻�\n");
		printf("2. �л� �߰�\n");
		printf("3. �л� ����\n");
		printf("4. ����\n");
		printf("�޴��� �Է��ϼ��� : ");
		scanf(" %c", &menu);

		if (menu != '1' && menu != '2' && menu != '3' && menu != '4') {
			continue;
		}
		printf("------------------\n");
		printf("��� �������Դϴ�.\n");
		printf("------------------\n");
	}

	return 0;
}