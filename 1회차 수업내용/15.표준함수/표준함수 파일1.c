#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 파일 열기(fopen)
	*	- FILE * fopen(const char * fileName,const char* mode);
	*	- fileName : 파일명(확장자 포함)
	*		- 상대경로, 절대경로
	*	- mode : 파일 열기위한 모드
	*		- r : 읽기, w : 쓰기, a : 추가
	*		- + : 읽기/쓰기
	*		- t : 텍스트 파일
	*		- b : 바이너리 파일
	*	- r : 파일이 없으면 열기 실패
	*	- w : 파일이 있으면 삭제하고 새로 생성하여 열기
	*	- a : 파일이 있으면 열고, 없으면 새로 생성하여 열기
	*	- 파일 읽기에 실패하면 NULL을 반환
	* - 파일 닫기(fclose)
	*	- fclose(FILE*);
	*	- 파일을 닫음
	*/
	FILE* fp = fopen("input.txt", "r");
	if (fp == NULL) {
		printf("파일 열기에 실패했습니다.\n");
		return 0;
	}
	printf("파일 열기에 성공했습니다.\n");
	/* 
	* - 파일에서 읽어오기(fscanf)
	*	- fscanf(FILE*, 문자열,주소);
	*	- fscanf는 문자열을 읽어올 때 띄어쓰기 전까지 문자열을 읽어옴
	* - 파일에서 문자열 읽어오기(fgets)
	*	- fgets(문자열배열, 크기, FILE*)
	*	- 문자열을 읽어오는 함수로 한줄 마지막까지 읽어옴
	* - FILE * 위치에 stdin을 입력하면 표준입력으로 대체할 수 있다
	*	- fscanf에 stdin을 입력하면 scanf처럼 사용 가능
	*	- fgets에 stdin을 입력하면 gets처럼 사용 가능
	*/
	int num;
	char arr[101];
	//fscanf(fp, "%s",  arr);
	//fgets(arr, 101, fp);
	fgets(arr, 101, stdin);
	printf("%s\n",  arr);
	if (fp != NULL) {
		fclose(fp);
	}
	return 0;
}