#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* �ݺ����� �̿��Ͽ� a���� z���� ����ϴ� ����
	*/
	char ch = 'a';
	int i;
	for (i = 0; i < 26; i++) {
		printf("%c", ch + i);
	}
	i = 0;
	printf("\n");
	while (ch <= 'z') {
		printf("%c", ch++);
	}
	return 0;
}