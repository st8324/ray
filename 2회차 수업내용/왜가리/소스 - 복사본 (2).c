#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* ���� : ���� ���� �����ϴ� ����
	* int num = 10;
	* ������ : �ּҸ� �����ϴ� ����
	*  - �迭�� ���� �� ��� : �Ϲ� �迭�� �迭�� ũ�⸦ �߰���
	*	 �ٲܼ� ����. 
	*    - �����͸� �̿��Ͽ� ������ �迭�� �߰���
	*      ũ�⸦ �ٲ� �� �ֽ��ϴ�.
	*    - �����͸� �̿��Ͽ� �迭�� ������ �� ������ �̿��Ͽ� 
	*      ũ�⸦ ������ �� �ִ�.
	*  - �Լ��� �Ű������� ����Ѵ�
	* ������ ���� ���
	* �ڷ��� *������ = NULL;
	* �ڷ��� *������ = ������ �ּҰ�;
	* �ڷ��� *������ = �����ͺ���;
	*/
	int* pnum1 = NULL;
	int num1 = 10;
	int* pnum2 = &num1;
	int* pnum3 = pnum2;
	printf("&num1 = %x\n", &num1);
	printf("pnum2 = %x\n", pnum2);
	printf("pnum3 = %x\n", pnum3);
	int num2 = 10, num3 = num2;
	printf("num2 = %d, num3 = %d\n", num2, num3);
	num3 = 20;
	printf("num2 = %d, num3 = %d\n", num2, num3);
	/* ������ ������ ������ �ִ� �ּҿ� ����� ���� �������� ���
	*  *���κ�����
	*/
	printf("num1   = %d\n", num1);
	printf("*pnum2 = %d\n", *pnum2);
	printf("*pnum3 = %d\n", *pnum3);
	*pnum2 = 20;//pnum2�� ����� num1�� ���� 20���� ����
	printf("*pnum2�� �̿��Ͽ� �� ���� ��\n");
	printf("num1   = %d\n", num1);
	printf("*pnum2 = %d\n", *pnum2);
	printf("*pnum3 = %d\n", *pnum3);
	/* ���Կ����� =�� ������ �ڷ����� ��ġ���Ѿ� �Ѵ�.
	*   pnum2�� �ڷ�����? int*
	*  *pnum2�� �ڷ�����? int
	*   num1�� �ڷ�����?  int
	*  &num1�� �ڷ�����?  int*
	*  &pnum2�� �ڷ�����? int**
	*/
	return 0;
}