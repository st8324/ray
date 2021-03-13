#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - continue
	*  - for문에서는 증감식으로 이동
	*  - while문에서는 조건식으로 이동
	*/
	char menu = '1';
	while (menu != '4') {
		printf("메뉴\n");
		printf("1. 학생 검색\n");
		printf("2. 학생 추가\n");
		printf("3. 학생 삭제\n");
		printf("4. 종료\n");
		printf("메뉴를 입력하세요 : ");
		scanf(" %c", &menu);

		if (menu != '1' && menu != '2' && menu != '3' && menu != '4') {
			continue;
		}
		printf("------------------\n");
		printf("기능 실행중입니다.\n");
		printf("------------------\n");
	}

	return 0;
}