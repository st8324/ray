#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* ������ ���� ��µǵ��� �Լ��� ���弼��.
* 3 x 1 = 3
* 3 x 2 = 6
* 3 x 3 = 9
* 3 x 4 = 12
* 3 x 5 = 15
* ...
* 3 x 9 = 27
* ��� : ���� num�� ���� max�� �־����� num���� max���� ����ϴ� �Լ�
* �Ű����� : ���� num�� ���� max => int num, int max
* ����Ÿ�� : ���� => void
* �Լ��̸� : multable
*/
void multable(int num, int max) {
	for (int i = 1; i <= max; i++) {
		printf("%d x %d = %d\n", num, i, num * i);
	}
}
int main() {
	multable(3, 9);
	return 0;
}