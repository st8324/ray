#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - scanf : �ֿܼ��� ������ ����ȭ�� ���ڿ��� �̿��Ͽ� �о���� �Լ�
	*  scanf("���Ĺ���1",�������ּ�1);	
	* �ּҿ����� : &
	* &������ : �������� �ּ�
	*/
	//���� age�� ���̸� �Է¹޴� ����
	int age = 0;
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d",&age);
	printf("���� : %d\n", age);
	
	/* �� ������ �Է¹޾� ����ϴ� ���� */
	int num1 = 0, num2 = 0;
	printf("�� ������ �Է��ϼ���(�� : 1, 2) : ");
	scanf("%d,%d", &num1, &num2);
	printf("�Է¹��� �� ���� : %d, %d\n", num1, num2);
	char ch;
	scanf(" %c", &ch);
	printf("%c\n", ch);
	return 0;
}