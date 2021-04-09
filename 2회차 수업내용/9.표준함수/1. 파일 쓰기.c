#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 기능 : 파일(파일명)을 모드로 열어서 연 파일의 시작 주소를 알려주는 
*         함수, 열기에 실패하면 NULL을 알려줌
*  매개변수 : char * filename, char * mode : 파일명, 모드 
*  리턴타입 : FILE* : 파일 구조체의 주소
*  함수이름 : fopen
*/
//FILE* fopen(const char* filename, const char* mode);

int main() {
	FILE *fp;
	//파일 열기
	fp = fopen("test.txt", "w");
	if (fp == NULL) {
		printf("파일 열기에 실패했습니다.\n");
		return 0;
	}

	fprintf(fp, "Hello world\n");
	fprintf(fp, "Hello\n");
	fprintf(fp, "%d-%d-%d\n", 2021, 4, 3);
	fputs("안녕하세요\n", fp);
	fputc('a', fp);

	//파일 닫기
	if (fp != NULL) {
		fclose(fp);
	}
	return 0;
}