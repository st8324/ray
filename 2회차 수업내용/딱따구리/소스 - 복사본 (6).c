#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ����ü : �ϳ��� ������ ��Ÿ���� ���� �������� ����
*/
//struct Point {
//	int x, y;
//};
//typedef struct Point Point;

typedef struct Point {
	int x, y;
}Point;
//�Լ� ������ ����Ÿ�� �Լ���(�Ű�����); ���� �̷���� �κ�
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
/* ��� : ���� �־����� �־��� ���� ��ǥ�� �ֿܼ� ����ϴ� �Լ�
*  �Ű����� : �� => Point pt1
*  ����Ÿ�� : ���� => void
*  �Լ��̸� : printPoint
*/
void printPoint(Point pt1) {
	printf("(%d,%d)\n", pt1.x, pt1.y);
}
/* ��� : ���� ��ǥ�� x,y�� �̵���Ű�� �Լ�
*  �Ű����� : ���� �ּ�, x��ǥ, y��ǥ => Point* pt, int x, int y
*  ����Ÿ�� : ���� => void
*  �Լ��̸� : movePoint1
*/
void movePoint1(Point* pt, int x, int y) {
	pt->x = x;
	pt->y = y;
}
/* ��� : ���� ��ǥ�� x,y�� �̵���Ű�� �Լ�
*  �Ű����� : x��ǥ, y��ǥ =>int x, int y
*  ����Ÿ�� : �� => Point
*  �Լ��̸� : movePoint2
*/
Point movePoint2(int x, int y) {
	Point pt;
	pt.x = x;
	pt.y = y;
	return pt;
}