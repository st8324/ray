#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* 1���� 10���� ���� ���ϴ� �ڵ带 �ۼ��ϼ���.
	* �ݺ�Ƚ�� : i�� 1���� 10���� 1�� ����
	* ��Ģ�� : sum = sum + i
	* �ݺ��� ���� �� : sum�� ���
	*		sum = 0
	* i=1	sum = sum + 1  : 1
	* i=2	sum = sum + 2  : 3
	* i=3	sum = sum + 3  : 6
	* i=4	sum = sum + 4
	* ...	
	* i=9	sum = sum + 9
	* i=10	sum = sum + 10
	*/
	int i = 0;
	int sum = 0;
	for (i = 1, sum = 0; i <= 10; i++) {
		sum = sum + i;  //sum += i;
		printf("1���� %d������ �� : %d\n", i, sum);
	}
	
	return 0;
}