#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2차원 좌표평면의 점을 나타내는 구조체
struct Point
{
	int x, y;
};
int main() {
	
	/* 
	* - 구조체 : 하나의 정보를 나타내기 위해 모아놓은 변수들의 집합
	* - 배열 : 같은 의미를 가지는 같은 자료형 변수들의 집합
	* - 구조체 정의 : main함수 앞에 정의
	* struct 구조체명{
	*	멤버변수들;
	* };
	* - 구조체 선언
	* struct 구조체명 변수명;
	* - 구조체 멤버 변수 호출
	* 변수명.멤버변수명;
	*/
	struct Point pt;
	pt.x = 10;
	pt.y = 10;
	printf("(%d,%d)\n", pt.x, pt.y);
	return 0;
}