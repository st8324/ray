#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* ������ 7���� ����ϴ� ����
	* 7 x 1 = 7
	* 7 x 2 = 14
	* ..
	* 7 x 9 = 63
	* �ݺ�Ƚ�� : i�� 1���� 9���� 1������
	* ��Ģ�� : 7 x i = 7*i�� ���
	* �ݺ��� ���� �� : ����
	*/
	int i;
	int num = 7;
	printf("���ϴ� ���� �Է��ϼ��� : ");
	scanf("%d", &num);
	for (i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", num, i, num * i);
	}
	return 0;
}