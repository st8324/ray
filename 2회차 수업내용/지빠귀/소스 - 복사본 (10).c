#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* a���� z���� �ݺ����� �̿��Ͽ� ����ϴ� �ڵ带 �ۼ��ϼ���.
	*/
	char ch = 'a';
	int i = 0;
	//'a', 0, 96,
	for (i = 0; i < 26 ;i++ ) {
		printf("%c ", ch + i);
	}
	printf("\n");
	for (i = ch; i <= 'z' ; i++) {
		printf("%c ", i);
	}
	return 0;
}