#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* �������� ��� �����ڰ� �־����� ��� ���� �����
	* ����ϴ� ����
	*/
	int num1, num2;
	char op;
	printf("�� ������ ��� �����ڸ� �Է��ϼ���(��:1 / 2) : ");
	scanf("%d %c %d", &num1, &op, &num2);
	switch (op) {
	case '+':
		printf("%d %c %d = %d\n", num1, op, num2, num1 + num2);
		break;
	case '-':
		printf("%d %c %d = %d\n", num1, op, num2, num1 - num2);
		break;
	case '*':
		printf("%d %c %d = %d\n", num1, op, num2, num1 * num2);
		break;
	case '%':
		printf("%d %c %d = %d\n", num1, op, num2, num1 % num2);
		break;
	case '/':
		printf("%d %c %d = %.2lf\n", num1, op, num2, (double)num1 / num2);
		break;
	default:
		printf("%c�� ��������ڰ� �ƴմϴ�.\n", op);
	}
	return 0;
}