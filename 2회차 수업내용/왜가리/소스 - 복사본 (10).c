#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef union Color {
	unsigned char rgb[4];
	unsigned int code;
}Color;
int main() {
	Color c = { 0 };
	c.rgb[2] = (unsigned int)255;
	c.rgb[1] = (unsigned int)0;
	c.rgb[0] = (unsigned int)0;
	//c : 00000000 11111111 00000000 00000000
	printf("�������� ���� �ڵ� : #%X\n", c.code);

	return 0;
}