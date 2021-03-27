#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct HighStudent {
	char schoolName[41];//학교명(최대 한글 20자) schoolName,
	int grade;//학년 grade, 
	int class;//반 class,
	int num;//번호 num,
	char name[21];//이름(최대 한글 10자) name
}HighStudent;

int main() {
	/* 고등학생 구조체를 만들어 보세요.
	* - 학교명(최대 한글 20자) schoolName,
	*   학년 grade, 
	*   반 class, 
	*   번호 num, 
	*   이름(최대 한글 10자) name
	*   으로 이루어진 HighStudent 구조체를 생성해보세요.
	* - 학교명이 북일고, 1학년, 2반, 3번, 홍길동 학생정보를 
	*   객체로 만들어서 콘솔에 출력해보세요.
	*/
	HighStudent std = { "북일고",1,2,3,"홍길동" };
	printf("%s등학교, %d학년 %d반 %d번 %s\n",
		std.schoolName, std.grade, std.class, std.num, std.name);
	HighStudent arr[10] = {
		{ "북일고",1,1,1,"홍길동" },
		{ "북일고",1,1,2,"유관순" },
		{ "북일고",1,1,3,"임꺽정" } };
	for (int i = 0; i < 3; i++) {
		printf("%s등학교, %d학년 %d반 %d번 %s\n",
			arr[i].schoolName, arr[i].grade, arr[i].class, 
			arr[i].num, arr[i].name);
	}
	return 0;
}