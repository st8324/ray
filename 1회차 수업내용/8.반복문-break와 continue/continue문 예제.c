#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* continue
	* - 반복문에서 continue를 만나면 특정위치로 점프를 한다.
	* - for문에서는 증감식 위치로, while문에서는 조건식 위치로
	*/
	int i, sum = 0;
	//1부터 10까지 짝수의 합 : 방법1
	for (i = 1,sum = 0; i <= 10; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	printf("1부터 10까지 짝수의 합 : %d\n", sum);
	//1부터 10까지 짝수의 합 : 방법2 - continue 이용
	for (i = 1, sum = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			continue;
		}
		sum += i;
	}
	printf("1부터 10까지 짝수의 합 : %d\n", sum);
	return 0;
}