#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	*  - switch문은 어떤 변수나 식이 특정한 몇개의 값들을 사용할
	*  때 주로 사용한다.
	*  - 산술연산예제, 달력예제
	* switch(변수){
	* case 값1:	//변수가 값1과 같다면 실행문1을 실행
	*			//if(변수 == 값1)
	*	실행문1;
	*	break;
	* case 값2://변수가 값1과 같지않고 변수가 값2와 같다면 
	*		   //else if(변수 == 값2)
	*	실행문2;//실행문2를 실행
	*	break;
	* default: //변수가 값1과 값2와 같지 않다면 실행문3을 실행
	*		   //else
	*	실행문3;
	* }
	*/
	int num = 4;
	switch (num % 2) {
	case 0:
		printf("%d는 짝수\n", num);
		break;
	case 1:
		printf("%d는 홀수\n", num);
		break;
	}
	return 0;
}