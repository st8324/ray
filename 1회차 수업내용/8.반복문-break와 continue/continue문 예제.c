#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* continue
	* - �ݺ������� continue�� ������ Ư����ġ�� ������ �Ѵ�.
	* - for�������� ������ ��ġ��, while�������� ���ǽ� ��ġ��
	*/
	int i, sum = 0;
	//1���� 10���� ¦���� �� : ���1
	for (i = 1,sum = 0; i <= 10; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	printf("1���� 10���� ¦���� �� : %d\n", sum);
	//1���� 10���� ¦���� �� : ���2 - continue �̿�
	for (i = 1, sum = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			continue;
		}
		sum += i;
	}
	printf("1���� 10���� ¦���� �� : %d\n", sum);
	return 0;
}