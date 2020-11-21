#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 평년을 기준으로 주어진 월의 마지막일을 출력하는 예제
	* 31 : 1, 3, 5, 7, 8, 10, 12
	* 30 : 4, 6, 9, 11
	* 28 : 2
	* month가 1과 같거나 month가  3과 같거나 month가  5와 같거나
	* month가 8과 같거나 10과 같거나 12와 같다면 
	* 31일입니다라고 출력
	* 아니면 month가 4와 같거나 month가 6과 같거나 month가 9와 같거나
	* month가 11과 같다면
	* 30일입니다라고 출력
	* 아니면 month가 2와 같다면
	* 28일입니다라고 출력
	* 아니면
	* 잘못된 월입니다라고 출력
	*/
	int month = 13;
	if (month == 1 || month == 3 || month == 5 || month == 7 ||
		month == 8 || month == 10 || month == 12) {
		printf("%d월 %d일 까지 있습니다.\n", month, 31);
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		printf("%d월 %d일 까지 있습니다.\n", month, 30);
	}
	else if (month == 2) {
		printf("%d월 %d일 까지 있습니다.\n", month, 28);
	}
	else {
		printf("%d월은 없는 달입니다.\n", month);
	}
	return 0;
}