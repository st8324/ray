#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 이차원 배열과 문자열
	*/
	char arr[5][21] = {
		"Hello world",
		"Hi",
		"Ray",
		"ABCDE",
		"FGHIJK"
	};
	int sentenceSize = sizeof(arr) / sizeof(arr[0]);//행의 갯수(문장 갯수)
	int maxLength = sizeof(arr[0]) / sizeof(char);//열의 갯수(문장의 최대길이)
	printf("문장의 갯수 : %d, 한 문장의 최대 길이 : %d\n"
		, sentenceSize, maxLength);
	for (int i = 0; i < sentenceSize; i++) {
		printf("%s\n", arr[i]);
	}

	return 0;
}
