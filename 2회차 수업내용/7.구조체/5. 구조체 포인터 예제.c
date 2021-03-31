#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct Point {
	int x, y;
}Point;
int main() {
	Point pt1 = { 5,5 };
	Point* ppt1 = &pt1;
	ppt1->x = 10;
	ppt1->y = 20;
	printf("(%d, %d)\n", pt1.x, pt1.y);
	(*ppt1).x = 30;
	(*ppt1).y = 40;
	printf("(%d, %d)\n", pt1.x, pt1.y);

	int num1 = 1;
	int* pnum1 = &num1;
	*pnum1 = 2;


	return 0;
}