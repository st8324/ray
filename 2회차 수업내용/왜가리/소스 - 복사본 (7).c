#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2���� ��ǥ����� ���� ��Ÿ���� ����ü
typedef struct Point {
	int x, y;
} Point;
//���� ��Ÿ���� ����ü
typedef struct Circle {
	Point center;//�߽���
	int r;//������
}Circle;

int main() {
	//�߽���ǥ 0,0, ������ 5
	Circle c1 = { {0,0}, 5 };
	//�߽���ǥ 4,5, ������ 10
	c1.center.x = 4;
	c1.center.y = 5;
	c1.r = 10;

	printf("���� �߽����� (%d,%d)�̰�, �������� %d�Դϴ�.\n",
		c1.center.x, c1.center.y, c1.r);

	int num = 10;//num�� ���� ����
	printf("num = %d\n", num);//num�� ���� ������

	return 0;
}