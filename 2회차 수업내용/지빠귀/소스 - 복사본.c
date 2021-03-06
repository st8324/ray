#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* 달력의 월이 주어지면 주어진 월의 마지막일을 출력하는 코드를
	* 작성하세요.
	* 31일 : 1 3 5 7 8 10 12
	* 30일 : 4 6 9 11
	* 28일 : 2
	* - month가 1월이면 31일이라고 출력하고
	*   month가 2월이면 28일이라고 출력하고
	*   ...
	*   month가 12월이면 31일이라고 출력하고
	*   month가 1~12월이 아니면 잘못된 달이라고 출력
	* - month가 1월이거나 month가 3월이거나 ... month가 12월이면
	*   31일이라고 출력하고
	*   month가 2월이면 28일이라고 출력하고
	*   month가 4월이거나 month가 6월이거나... month가 11월이면
	*   30일이라고 출력하고
	*   month가 1~12월이 아니면 잘못된 달이라고 출력
	*/
	int month = 13;
	if (month == 1 || month == 3 || month == 5 || month == 7
		|| month == 8 || month == 10 || month == 12) {
		printf("%d월은 31일\n", month);
	}
	else if (month == 2) {
		printf("%d월은 28일\n", month);
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		printf("%d월은 30일\n", month);
	}
	else {
		printf("%d월은 없는 달입니다.\n", month);
	}
	return 0;
}