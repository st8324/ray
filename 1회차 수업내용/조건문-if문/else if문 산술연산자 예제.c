#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* �� ���� num1,num2�� ���� op�� ��������ڰ� 
	* �־����� �־��� ������� ����� ����ϼ���.
	* num1 = 1, num2 = 2, op = '/' �־����ٸ�
	* ����� 1 / 2 = 0.5�� ��µǵ��� �ϼ���.
	* 
	* op�� '+'�� ���ٸ� 1 + 2 = 3���� ����ϰ�
	* �ƴϸ� op�� '-'�� ���ٸ� 1 - 2 = -1���� ����ϰ�
	* �ƴϸ� op�� '*'�� ���ٸ� 1 * 2 = 2���� ����ϰ�
	* �ƴϸ� op�� '/'�� ���ٸ� 1 / 2 = 0.5���� ����ϰ�
	* �ƴϸ� op�� '%'�� ���ٸ� 1 % 2 = 1���� ����ϰ�
	* �ƴϸ� �߸��� �����ڶ�� ���
	* 
	*/
	int num1 = 1, num2 = 2;
	char op = '/';
	printf("�� ������ ��� �����ڸ� �Է��ϼ���(��:1 / 2) : ");
	scanf("%d %c %d", &num1, &op, &num2);
	if (op == '+' ) {
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
	}
	else if (op == '-') {
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
	}
	else if (op == '*') {
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
	}
	else if (op == '%') {
		printf("%d %% %d = %d\n", num1, num2, num1 % num2);
	}
	else if (op == '/') {
		printf("%d / %d = %.2lf\n", num1, num2, (double)num1 / num2);
	}
	else {
		printf("%c�� ��� �����ڰ� �ƴմϴ�.\n", op);
	}
	return 0;
}