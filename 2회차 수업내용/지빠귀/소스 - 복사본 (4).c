#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* 달력의 월이 주어지면 주어진 월의 마지막일을 출력하는 코드를
	* 작성하세요.
	* 31일 : 1 3 5 7 8 10 12
	* 30일 : 4 6 9 11
	* 28일 : 2
	* - month가 1과 같으면 31일 출력하고
	*   month가 2와 같으면 28일 출력하고
	*   ...
	*/
	int month = 3;
	switch (month) {
	case 1:	case 3:	case 5:	case 7:	case 8:	case 10:	case 12:
		printf("%d월은 31일입니다.\n", month);
		break;
	case 2:
		printf("%d월은 28일입니다.\n", month);
		break;
	case 4:	case 6:	case 9:	case 11:
		printf("%d월은 30일입니다.\n", month);
		break;
	default:
		printf("%d월은 없는 달입니다.\n", month);
	}
	return 0;
}