#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* ����� �������� ���� ������ ���� ����ϴ� ����
	*/
	int month;
	printf("���� �Է��ϼ��� : ");
	scanf("%d", &month);
	switch (month) {
	case 1:	case 3:	case 5:	case 7:	
	case 8:	case 10:case 12:
		printf("%d���� 31�ϱ��� �ֽ��ϴ�.\n", month);	
		break;
	case 2:
		printf("%d���� 28�ϱ��� �ֽ��ϴ�.\n", month);	
		break;
	case 4:	case 6:	case 9:	case 11:
		printf("%d���� 30�ϱ��� �ֽ��ϴ�.\n", month);	
		break;
	default:
		printf("%d���� ���´��Դϴ�.\n", month);
	}
	return 0;
}