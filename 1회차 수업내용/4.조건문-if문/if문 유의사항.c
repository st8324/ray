#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//if���� ���๮�� 1���� ������ {}�� ������ �� �ִ�.
	int num = 2;
	if (num % 2 == 0)//; ���� ;�� ���� �ʵ��� ����
		printf("%d�� ¦��\n", num);
	else
		printf("%d�� Ȧ��\n", num);
	//if�� �� ()���� ;�� ��������
	//else�� �׻� �տ� if���� �ʿ�� �Ѵ�.
	return 0;
}