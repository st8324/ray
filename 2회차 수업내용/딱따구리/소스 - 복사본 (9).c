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
	fp = fopen("test.txt", "r");
	if (fp == NULL) {
		printf("파일 열기에 실패했습니다.\n");
		return 0;
	}
	
	/*fprintf(fp, "Hello\n");
	fprintf(fp, "Hello\n");
	fprintf(fp, "%d-%d-%d\n", 2021, 4, 3);
	fputs("안녕하세요\n", fp);
	fputc('a', fp);*/
	/*
	fscanf에서 문자열을 읽어서 배열에 저장할 때
	읽어오는 문자열은 공백전까지 한단어밖에 안됨
	파일에 안녕하세요. 제이름은 저장되어 있으면
	fscanf는 안녕하세요. 까지만 읽어옴
	fgets는 한 문장을 읽어옴
	한 문장 전체를 일거올때는 fgets를 사용하고
	정수나 실수나 문자 또는 한 단어를 읽어올대는
	fscanf를 사용
	*/
	char buff[1024];
	int year, month, day;
	char ch;
	fgets(buff, 1024, fp);//Hello world\n을 읽어옴
	printf("%s",buff);
	fscanf(fp, "%s", buff);//Hello를 읽어옴
	printf("%s\n", buff);
	//엔터를 버리고 숫자-숫자-숫자를 읽어옴
	fscanf(fp, "%d-%d-%d", &year, &month, &day);
	printf("%d년 %d월 %d일\n", year, month, day);
	fscanf(fp, "%s", buff);//엔터를 버리고 안녕하세요를 읽어옴
	printf("%s\n", buff);
	ch = fgetc(fp);//엔터를 읽어옴
	ch = fgetc(fp);//a를 읽어옴
	printf("%c\n", ch);
	//파일 닫기
	if (fp != NULL) {
		fclose(fp);
	}
	return 0;
}