#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* - ��ǻ�� ���� 3���� �Է�
	* - ��, �ߺ����� ���� ����, 1~9������ ����
	* - ����� ���� 3���� �Է�
	* - �Է��� ����� ���ڿ� �°� S�� B�� O�� �Ǻ�
	* - ��Ģ
	*	- S : ���ڿ� ��ġ�� ���� ���
	*	- B : ���ڴ� ������ ��ġ�� �ٸ� ���
	*	- 3O : ��ġ�ϴ� ���ڰ� ���� ���
	* - ��
	*	- ��ǻ�� ���� 1 9 3
	*	- ����� ���� 1 2 3
	*	- 2S
	*	- ����� ���� 3 7 9
	*	- 2B
	*	- ����� ���� 4 5 6
	*	- 3O
	*	- ����� ���� 1 3 9
	*	- 1S2B
	*	- ����� ���� 1 9 3
	*	- 3S
	*	- �����Դϴ�.
	*/
	int com[3] = { 0 }, user[3] = { 0 };
	int strike = 0, ball = 0;
	/* ������ �������� �ڵ� �����ؾ��ϴµ� ���� ������ �� ����� ���� �Է����� ��*/
	printf("�ߺ����� ���� �� ���� �Է��ϼ���(1~9) : ");
	for (int i = 0; i < 3; i++) {
		scanf("%d", com + i);
	}
	while (strike != 3) {
		strike = 0;
		ball = 0;
		/* ����� ���� �Է� */
		printf("�ߺ����� ���� �� ���� �Է��ϼ���(1~9) : ");
		for (int i = 0; i < 3; i++) {
			scanf("%d", user + i);
		}
		/* ��Ʈ����ũ �Ǻ� */
		for (int i = 0; i < 3; i++) {
			if (com[i] == user[i]) {
				strike++;
			}
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i == j) {
					continue;
				}
				if (com[i] == user[j]) {
					ball++;
				}
			}
		}
		if (strike != 0) {
			printf("%dS", strike);
		}
		if (ball != 0) {
			printf("%dB", ball);
		}
		if (strike == 0 && ball == 0) {
			printf("3O");
		}
		printf("\n");
	}
	return 0;
}