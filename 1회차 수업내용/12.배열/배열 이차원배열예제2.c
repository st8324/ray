#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - ������ �迭�� ���ڿ�
	*/
	char arr[5][21] = {
		"Hello world",
		"Hi",
		"Ray",
		"ABCDE",
		"FGHIJK"
	};
	int sentenceSize = sizeof(arr) / sizeof(arr[0]);//���� ����(���� ����)
	int maxLength = sizeof(arr[0]) / sizeof(char);//���� ����(������ �ִ����)
	printf("������ ���� : %d, �� ������ �ִ� ���� : %d\n"
		, sentenceSize, maxLength);
	for (int i = 0; i < sentenceSize; i++) {
		printf("%s\n", arr[i]);
	}

	return 0;
}
