#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - ������ 7�� ����� while���� �̿��Ͽ� �ۼ��ϼ���. */
	int i = 1;
	while ( i <= 9 ) {
		printf("%d x %d = %d\n", 7, i , 7 * i );
		i++;
	}

	return 0;
}