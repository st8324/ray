#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* 다음과 같이 출력되도록 함수를 만드세요.
* 3 x 1 = 3
* 3 x 2 = 6
* 3 x 3 = 9
* 3 x 4 = 12
* 3 x 5 = 15
* ...
* 3 x 9 = 27
* 기능 : 정수 num와 정수 max가 주어지면 num단을 max까지 출력하는 함수
* 매개변수 : 정수 num와 정수 max => int num, int max
* 리턴타입 : 없음 => void
* 함수이름 : multable
*/
void multable(int num, int max) {
	for (int i = 1; i <= max; i++) {
		printf("%d x %d = %d\n", num, i, num * i);
	}
}
int main() {
	multable(3, 9);
	return 0;
}