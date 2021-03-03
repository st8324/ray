#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*  
	* 정수 num에 3을 저장한 후 num가 짝수인지
	* 판별하는 코드를 작성하세요.
	* => num를 2로 (나누었을 때 나머지)가 0과 (같다)
	* => num 2 % 0 ==
	* => num % 2 == 0
	* 출력 예시
	* 3은 짝수입니까? 0
	*/
	int num = 6;
	printf("%d은 짝수입니까? %d\n", num, num % 2 == 0);
	return 0;
}