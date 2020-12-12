#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2차원 좌표평면의 점을 나타내는 구조체
struct Point{
	int x, y;
};
typedef struct Point Point;

/* 
* 기능 : 점이 주어지면 점의 좌표를 출력하는 함수
* 매개변수 : 점 => Point pt
* 리턴타입 : 없음 => void
* 함수이름 : printPoint
*/
void printPoint(Point pt);

int main() {
	
	/* 
	* - typedef을 이용한 구조체 정의 1
	* struct 구조체명{
	*	멤버변수들;
	* };
	* typedef struct 구조체명 구조체명;
	* 
	* - typedef을 이용한 구조체 정의 2
	* typedef 구조체명{
	*	멤버변수들;
	* }구조체명;
	* 
	* - typedef은 자료형을 재정의, 자료형이 긴경우 짧게 쓰기위해 사용
	*/
	Point pt;
	pt.x = 10;
	pt.y = 10;
	printPoint(pt);
	printPoint(pt);
	return 0;
}
void printPoint(Point pt) {
	printf("(%d,%d)\n", pt.x, pt.y);
}