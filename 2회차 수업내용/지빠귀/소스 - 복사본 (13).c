#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - break 
	*   - switch���� ���� ������ ����
	*   - �ݺ����� ���� ������ ����(if���� �Բ� ����)
	*/
	int i = 0;
	for (i = 1; i <= 5; i++) {
		printf("Hello\n");
		if (i == 3) {
			break;
		}
	}
	return 0;
}