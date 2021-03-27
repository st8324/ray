#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct HighStudent1 {
	char schoolName[41];//학교명(최대 한글 20자) schoolName,
	int grade;//학년 grade, 
	int class;//반 class,
	int num;//번호 num,
	char name[21];//이름(최대 한글 10자) name
}HighStudent1;
typedef struct HighStudent2 {
	int grade;//학년 grade, 
	int class;//반 class,
	int num;//번호 num,
	char name[21];//이름(최대 한글 10자) name
	char schoolName[41];//학교명(최대 한글 20자) schoolName,
}HighStudent2;
int main() {
	printf("HighStudent1 구조체의 크기 : %d\n"
		,sizeof(HighStudent1));
	printf("HighStudent2 구조체의 크기 : %d\n"
		, sizeof(HighStudent2));
	return 0;
}