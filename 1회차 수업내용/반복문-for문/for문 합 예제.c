#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 1���� 10������ ���� ���ϴ� ����
	*		sum = 0
	* i=1	sum = 0 + 1
	* i=2	sum = 0 + 1 + 2
	* i=3	sum = 0 + 1 + 2 + 3
	* ...
	* i=10	sum = 0 + 1 + 2 + 3 + ... + 10
	*		sum0 = 0
	* i=1	sum1 = sum0 + 1
	* i=2	sum2 = sum1 + 2
	* i=3	sum3 = sum2 + 3
	* ...
	* i=10	sum10= sum9 + 10
	*		sum = 0
	* i=1	sum = sum + 1
	* i=2	sum = sum + 2
	* i=3	sum = sum + 3
	* ...
	* i=10	sum = sum + 10
	*		sum = sum + i;
	* �ݺ�Ƚ�� : i�� 1���� 10���� 1�� ����
	* ��Ģ�� : sum = sum + i;
	* �ݺ��� ���� �� : sum�� ���
	*/
	int i, sum = 0;
	for (i = 1; i <= 10; i++) {
		//sum = sum + i;
		sum += i;
	}
	printf("1���� 10���� �� : %d\n", sum);
	return 0;
}