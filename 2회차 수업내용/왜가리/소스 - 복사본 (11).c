#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum Season {
	SPRING = 1, SUMMER = 2, FALL = 3, WINTER = 4
}Season;

int main() {
	/* 
	* 열거형은 정수에 의미를 부여하고 싶을 때 사용
	*/
	/* 계절을 입력받아 입력받은 계절을 출력하는 예제 */
	Season s;
	printf("계절을 입력하세요 (봄:1, 여름:2, 가을:3, 겨울:4): ");
	scanf("%d", &s);
	switch (s)	{
	case SPRING:	printf("선택한 계절은 봄입니다.\n");		break;
	case SUMMER:	printf("선택한 계절은 여름입니다.\n");	break;
	case FALL:	printf("선택한 계절은 가을입니다.\n");	break;
	case WINTER:	printf("선택한 계절은 겨울입니다.\n");	break;
	}

	return 0;
}