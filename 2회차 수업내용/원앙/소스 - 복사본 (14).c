#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* - 콘솔에서 본인의 이름을 입력받아 출력하는 코드를 작성하세요.
	* - 입력한 이름을 저장하기 위한 문자 배열이 필요(한글 최대 10자)
	* - 입력받기 위해 scanf
	* - %s, 주소
	*/
	char name[21];
	printf("이름 입력하세요 : ");
	scanf("%s", name);//scanf("%s", &name[0]);
	printf("이름 : %s\n", name);


	return 0;
}