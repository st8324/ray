#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 5�ڸ� ������ �Է¹޾� �Է¹��� ������ �Ųٷ� �迭�� �����ϰ�
	* ����ϴ� ����
	* �� : 12345�� �Է�
	* 54321 ���
	* �� : 12340�� �Է�
	* 04321 ���
	* ������ �����ڸ� �̿��Ͽ� �������ڸ��� ����
	* 12345 => 5
	* 1234 => 4
	* 123 => 3
	* 12 => 2
	* 1 => 1
	* 0
	*/
	int num = 12340;
	int tmp = num;
	int nums[5] = { 0 };
	int cnt = 0;//�Ųٷ� ����� ������ ����
	while (tmp != 0) {
		nums[cnt] = tmp % 10;
		tmp = tmp / 10;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		printf("%d", nums[i]);
	}
	printf("\n");
	/* ���� ���� �Ųٷε� ���� ���� ����� ����ϴ� ����
	* 12345 => 54321
	* 66666
	* 0 + 5 => 5
	* 50 + 4 => 54
	* 540 + 3 => 543
	* 5430 + 2 => 5432
	* 54320 + 1 => 54321
	* �迭�� �ִ� �Ųٷε� ���� �ϳ��� ������ ����
	*/
	int revNum = 0;
	for (int i = 0; i < cnt; i++) {
		revNum = revNum*10 + nums[i];
	}
	printf("���� ���� : %d\n", num);
	printf("�Ųٷμ���: %d\n", revNum);
	printf("�� : %d\n", num + revNum);
	return 0;
}

