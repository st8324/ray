#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 결합 연산자
	*   - 연산자 줄여쓰기
	*   - A = A 연산자 B;
	*   - A 연산자= B;
	*   - 예
	*     A = A + B => A += B
	*/
	int res = 3;
	res += 3;// res = res + 3;
	printf("%d\n", res);
	return 0;
}