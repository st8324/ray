#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - ���� ������
	*   - ������ �ٿ�����
	*   - A = A ������ B;
	*   - A ������= B;
	*   - ��
	*     A = A + B => A += B
	*/
	int res = 3;
	res += 3;// res = res + 3;
	printf("%d\n", res);
	return 0;
}