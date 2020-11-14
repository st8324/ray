#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 평년을 기준으로 달의 마지막 일을 출력하는 예제
	*/
	int month;
	printf("월을 입력하세요 : ");
	scanf("%d", &month);
	switch (month) {
	case 1:	case 3:	case 5:	case 7:	
	case 8:	case 10:case 12:
		printf("%d월은 31일까지 있습니다.\n", month);	
		break;
	case 2:
		printf("%d월은 28일까지 있습니다.\n", month);	
		break;
	case 4:	case 6:	case 9:	case 11:
		printf("%d월은 30일까지 있습니다.\n", month);	
		break;
	default:
		printf("%d월은 없는달입니다.\n", month);
	}
	return 0;
}