#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - �� ������ ��Ģ������(+,-,/,*)�� �Է��Ͽ� ����ϴ� �ڵ带 
	*    �ۼ��ϼ���.
	*  - �Է� ���� : 1 + 2 : �׸�ĭ �׸�ĭ �׸�ĭ
	*     �׸�ĭ : ���Ĺ���
	*  - ��� ���� : 1 + 2
	*/
	int num1 = 0, num2 = 0;
	char operator = '+';
	printf("�� ������ ��Ģ�����ڸ� �Է��ϼ���(�� : 1 + 2) : ");
	scanf("%d %c %d", &num1, &operator, &num2);
	printf("%d %c %d\n", num1, operator, num2);
	return 0;
}