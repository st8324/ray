#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2���� ��ǥ����� ���� ��Ÿ���� ����ü
struct Point{
	int x, y;
};
typedef struct Point Point;

/* 
* ��� : ���� �־����� ���� ��ǥ�� ����ϴ� �Լ�
* �Ű����� : �� => Point pt
* ����Ÿ�� : ���� => void
* �Լ��̸� : printPoint
*/
void printPoint(Point pt);

int main() {
	
	/* 
	* - typedef�� �̿��� ����ü ���� 1
	* struct ����ü��{
	*	���������;
	* };
	* typedef struct ����ü�� ����ü��;
	* 
	* - typedef�� �̿��� ����ü ���� 2
	* typedef ����ü��{
	*	���������;
	* }����ü��;
	* 
	* - typedef�� �ڷ����� ������, �ڷ����� ���� ª�� �������� ���
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