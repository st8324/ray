#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	/* ��ǻ�Ͱ� 100������ ���ڸ� �������� �����ϸ�, ����ڴ� �ش�
	*  ���ڸ� ���ߴ� ����
	*  ����ڰ� �ش� ���ڸ� �����߸� �ش� ���ں��� ū�� ��������
	*  �˷��־ ���ߵ��� ����
	*  ���� : ��ǻ�� ���� ���� 30
	*  ����� �Է� : 50
	*  ��ǻ�� : down
	*  ����� �Է� : 25
	*  ��ǻ�� : up
	*  ����� �Է� : 33
	*  ��ǻ�� down
	*  ����� �Է� : 30
	*  �����Դϴ�.!!
	*/
	srand(time(NULL));
	int min = 1, max = 100;
	int random = rand() % (max - min + 1) + min;
	int answer = 0;
	do {
		printf("����� �Է�(1~100) : ");
		scanf("%d", &answer);
		if (answer > random) {
			printf("down\n");
		}
		else if (answer < random) {
			printf("up\n");
		}
	} while (random != answer);
	printf("�����Դϴ�.\n");
	return 0;
}