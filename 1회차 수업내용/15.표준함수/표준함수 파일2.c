#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	FILE* fp = fopen("input.txt", "w");
	if (fp == NULL) {
		printf("파일 열기에 실패했습니다.\n");
		return 0;
	}
	printf("파일 열기에 성공했습니다.\n");
	/* 
	* - 파일 쓰기
	*	- fprintf(FILE*, 문자열);
	*	- fputs(문자열, FILE*);
	*/
	//fprintf(fp, "%d %s", 100, "안녕하세요");
	fputs("안녕하세요", fp);
	if (fp != NULL) {
		fclose(fp);
	}
	return 0;
}