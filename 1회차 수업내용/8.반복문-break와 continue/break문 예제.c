#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* break
	* - switch�������� switch�� ���� ���� 
	* - �ݺ��������� �ݺ����� ���� ����
	* - �ݺ��������� ���ǹ��� �Բ� ����(�ʼ�)
	*/
	int i;
	for (i = 1; ; i++) {
		printf("Hello world\n");
		if (i == 5) {
			break;
		}
	}

	int num1 = 10, num2 = 15;
	int lcm = 1;

	for (i = num1; ; i+=num1) {
		if (i % num2 == 0) {
			lcm = i;
			break;
		}
	}
	printf("%d�� %d�� �ּ� ����� : %d\n", num1, num2, lcm);

	return 0;
}