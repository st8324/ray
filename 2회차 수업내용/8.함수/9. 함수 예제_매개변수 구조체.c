#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 구조체 : 하나의 정보를 나타내기 위한 변수들의 집합
*/
//struct Point {
//	int x, y;
//};
//typedef struct Point Point;

typedef struct Point {
	int x, y;
}Point;
//함수 선언은 리턴타입 함수명(매개변수); 으로 이루어진 부분
void printPoint(Point pt);
void movePoint1(Point* pt, int x, int y);
Point movePoint2(int x, int y);

int main() {
	Point pt = { 1,2 };
	printPoint(pt);
	movePoint1(&pt, 10, 20);
	printPoint(pt);
	pt = movePoint2(30, 40);
	printPoint(pt);
	return 0;
}
/* 기능 : 점이 주어지면 주어진 점의 좌표를 콘솔에 출력하는 함수
*  매개변수 : 점 => Point pt1
*  리턴타입 : 없음 => void
*  함수이름 : printPoint
*/
void printPoint(Point pt1) {
	printf("(%d,%d)\n", pt1.x, pt1.y);
}
/* 기능 : 점의 좌표를 x,y로 이동시키는 함수
*  매개변수 : 점의 주소, x좌표, y좌표 => Point* pt, int x, int y
*  리턴타입 : 없음 => void
*  함수이름 : movePoint1
*/
void movePoint1(Point* pt, int x, int y) {
	pt->x = x;
	pt->y = y;
}
/* 기능 : 점의 좌표를 x,y로 이동시키는 함수
*  매개변수 : x좌표, y좌표 =>int x, int y
*  리턴타입 : 점 => Point
*  함수이름 : movePoint2
*/
Point movePoint2(int x, int y) {
	Point pt;
	pt.x = x;
	pt.y = y;
	return pt;
}