#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* �� ���� num1�� num2�� �ּ� ������� ���ϴ� ����
	* 10�� ��� : 10 20 30 40 50 60 70 80 90 100 110 120 130 140 150 ...
	* 15�� ��� : 15 30 45 60 75 90 105 120 135 150 ...
	* 10�� 15�� ����� : 30 60 90 120 150 ...
	* 10�� 15�� �ּ� ����� : 30
	* - �� ���� �ּ� ������� ��� �� ���� �����ٴ� �۰ų� ����
	* - �ݺ�Ƚ�� : i�� num1*num2���� 1���� 1�� ����
	* - ��Ģ�� : i�� num1�� ����̰�, num2�� ����̸� i�� lcm ����
	*		=>  i�� num1���� (�������� �� ������)�� 0�� (��)(��)
	*			i�� num2�� (�������� �� ������)�� 0�� (����)(��)
	*			i�� lcm ����
	*		=>	i num1 % 0 == && i num2 % 0 == if
	*			i lcm =
	*		=>	if(i % num1 == 0 && i % num2 == 0)
	*			lcm = i;
	* - �ݺ��� ���� �� : lcm ���
	*/
	int num1 = 13, num2 = 15002;
	int i, lcm = 1;
	int cnt = 0;
	for (i = num1 * num2, cnt = 0; i >= 1; i--, cnt++) {
		if (i % num1 == 0 && i % num2 == 0) {
			lcm = i;
		}
	}
	printf("%d�� %d�� �ּ� ����� : %d\n", num1, num2, lcm);
	printf("���1 Ƚ�� : %d\n", cnt);
	//���2
	for (i = num1 * num2, cnt = 0; i >= num1; i -= num1, cnt++) {
		if (i % num2 == 0) {
			lcm = i;
		}
	}
	printf("%d�� %d�� �ּ� ����� : %d\n", num1, num2, lcm);
	printf("���2 Ƚ�� : %d\n", cnt);
	//���3
	int tmp1 = num1, tmp2 = num2;
	if (num1 < num2) {
		tmp1 = num2;
		tmp2 = num1;
	}
	for (i = num1 * num2, cnt = 0; i >= tmp1; i -= tmp1, cnt++) {
		if (i % tmp2 == 0) {
			lcm = i;
		}
	}
	printf("%d�� %d�� �ּ� ����� : %d\n", num1, num2, lcm);
	printf("���3 Ƚ�� : %d\n", cnt);
	return 0;
}