#define _CRT_SECURE_NO_WARNINGS
#include "test.h"

int main() {
	/* 
	* - 사용자 헤더파일 생성하여 사용하는 방법
	* 1. test.h 파일을 생성 후 필요한 함수를 선언한다
	* 2. test.c 파일을 생성 후 test.h파일을 포함시킨 후 
	*	 함수를 구현한다.
	* 3. main함수가 있는 파일에서 test.h 파일을 포함시킨 후
	*	 필요한 함수를 호출하여 사용
	*/
	printTest();
	return 0;
}
