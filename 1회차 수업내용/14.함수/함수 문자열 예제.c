#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* ��� : �־��� ���ڿ��� ����ϴ� ���
* �Ű����� : ���ڿ� => char* str
* ����Ÿ�� : ���� => void
* �Լ��̸� : print
*/

void print(char* str) {
	printf("%s\n", str);
}

int main() {
	print("Hello wolrd!");
	return 0;
}