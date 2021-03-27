#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2차원 좌표평면의 점을 나타내는 구조체
typedef struct Point {
	int x, y;
} Point;
//원을 나타내는 구조체
typedef struct Circle {
	Point center;//중심점
	int r;//반지름
}Circle;

int main() {
	//중심좌표 0,0, 반지름 5
	Circle c1 = { {0,0}, 5 };
	//중심좌표 4,5, 반지름 10
	c1.center.x = 4;
	c1.center.y = 5;
	c1.r = 10;

	printf("원의 중심점은 (%d,%d)이고, 반지름은 %d입니다.\n",
		c1.center.x, c1.center.y, c1.r);

	int num = 10;//num에 값을 설정
	printf("num = %d\n", num);//num의 값을 가져옴

	return 0;
}