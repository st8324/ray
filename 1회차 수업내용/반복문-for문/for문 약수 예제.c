#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* ���� num�� ����� ����ϴ� ����
	* ��� : �������� �� �������� 0�� ��
	* 4�� ��� : 1 2 4
	* 12�� ��� : 1 2 3 4 6 12
	* �ݺ�Ƚ�� : i�� 1���� num���� 1������
	* ��Ģ�� : i�� num�� ����̸� i�� ���
	*		  => num�� i�� ���������� �������� 0�� ���ٸ� i�� ���
	* �ݺ��� ���� �� : ����
	*/
	int num = 12;
	int i;
	for (i = 1; i <= num; i++) {
		if (num % i == 0 ) {
			printf("%d ",i);
		}
	}
	return 0;
}