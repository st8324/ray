#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
- ���� ����ü�� rgb���� �̿��Ͽ� ������ �����ϰų�
  ���� �ڵ带 �̿��Ͽ� ������ ������ �� �ִ�.
- ��� : rgb(255,255,255), #ffffff
*/
typedef union Color {
	char rgb[4];
	int code;
}Color;

int main() {
	/* 
	* - ����ü : �� ������ ���� �������� ����ϴ� ��
	*/
	Color white;
	white.rgb[0] = 255;//�Ķ� ��
	white.rgb[1] = 0;//��� ��
	white.rgb[2] = 0;//���� ��
	printf("��� ���� �ڵ� : %x\n", white.code);
	return 0;
}
