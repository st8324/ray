#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* do while��
	* - ������ 1���� ����ȴ�.
	* - �ٸ� �ݺ����� ���ǽ��� �����̸� 1���� ���� �ȵɼ�
	*   ������, do while���� ������ 1���� ����ȴ�.
	* do{
	*	���๮;
	* }while(���ǽ�);
	*/
	char menu = '4';
	do {
		printf("----�޴�---\n");
		printf("1.����\n");
		printf("2.�ҷ�����\n");
		printf("3.����\n");
		printf("4.����\n");
		printf("-----------\n");
		printf("�޴��� �����ϼ��� : ");
		scanf(" %c", &menu);
	} while (menu != '4');
	/*menu = '1';
	while (menu != '4') {
		printf("----�޴�---\n");
		printf("1.����\n");
		printf("2.�ҷ�����\n");
		printf("3.����\n");
		printf("4.����\n");
		printf("-----------\n");
		printf("�޴��� �����ϼ��� : ");
		scanf(" %c", &menu);
	}*/
	return 0;
}