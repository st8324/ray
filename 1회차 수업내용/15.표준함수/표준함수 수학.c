#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
	/* 
	* - �����Լ�(pow)
	*	- pow(�Ǽ�a, �Ǽ�b)
	*	- a�� b����
	* - ���밪(abs)
	*	- abs(����)
	*	- ������ ���밪
	* - ��Ʈ(sqrt)
	*	- sqrt(�Ǽ�)
	*	- �Ǽ��� ��Ʈ��
	*/
	printf("2�� 3���� : %d\n", (int)pow(2, 3));
	printf("-3�� ���밪 : %d\n", abs(-3));
	printf("��Ʈ 25 : %.2lf\n", sqrt(25));
	printf("��Ʈ 2  : %.2lf\n", sqrt(2));
	return 0;
}