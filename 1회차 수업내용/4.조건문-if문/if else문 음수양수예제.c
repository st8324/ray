#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* ���� num�� ����̸� ������ ����ϰ� �����̸�
	* ������� ����ϴ� �ڵ带 �ۼ��ϼ���.
	* ��, 0�� ������ ���
	* num�� 0���� ũ�ų� ������ ������ ����ϰ�,
	* �ƴϸ� ������� ���
	
	if (num�� 0���� ũ�ų� ����) {
		������ ���;
	}
	else {
		������� ���;
	}*/
	int num = 0;
	if (num >= 0) {
		printf("%d�� ���\n", num);
	}
	else {
		printf("%d�� ����\n", num);
	}
	return 0;
}