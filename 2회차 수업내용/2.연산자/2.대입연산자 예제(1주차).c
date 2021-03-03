#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - 대입연산자 : =
	*    - =을 기준으로 오른쪽에 있는 값을 왼쪽에 저장
	*    - =을 기준으로 왼쪽에는 변수명 1개만 와야한다.
	*    - =을 비교연산자 ==와 혼동하지 말자
	*/
	//값 0을 num1에 저장
	int num1 = 0;
	//num1+5의 계산 결과를 num2에 저장
	int num2 = num1 + 5;

	num1 = 4;
	//5 = num1;//안됨
	return 0;
}
© 2021 GitHub, Inc.