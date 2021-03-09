#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - continue(p.96)
	*   - 특정 위치로 건너 뜀
	*   - for문에서는 증감식 위치로, while문에서는 조건식으로
	*     이동
	*   - if문과 같이 쓰임
	* - 짝수 출력하는 예제 : 홀수를 제외하고 출력
	*/
	int i = 0;
	for (i = 1 ; i <= 100 ; i++ ) {
		if (i % 2 == 1) {
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}