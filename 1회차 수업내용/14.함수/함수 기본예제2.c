#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* ������ ���� ��µǵ��� �ϳ��� �Լ��� ���弼��
* *****
* *******
* -----
* *****?????
* ��� : ���ڿ� ������ �־����� ���ڸ� �־��� ������ ��ŭ ����ϴ� �Լ�
* �Ű����� : ����,���� =>char ch, int cnt 
* ����Ÿ�� : ���� =>void
* �Լ��̸� : print3
*/
/*
* ��� : *****�� ����ϴ� �Լ�
* �Ű����� : ���� 
* ����Ÿ�� : ���� =>void
* �Լ��̸� : print1
*/
void print1() {
	printf("*****");
}
/*
* ��� : ������ �־����� *�� ������ ��ŭ ����ϴ� �Լ�
* �Ű����� : ���� => int cnt 
* ����Ÿ�� : ���� =>void
* �Լ��̸� : print2
*/
void print2(int cnt) {
	for (int i = 0; i < cnt; i++) {
		printf("*");
	}
}
/*
* ��� : ���ڿ� ������ �־����� ���ڸ� �־��� ������ ��ŭ ����ϴ� �Լ�
* �Ű����� : ����,���� =>char ch, int cnt 
* ����Ÿ�� : ���� =>void
* �Լ��̸� : print3
*/
void print3(char ch, int cnt) {
	for (int i = 0; i < cnt; i++) {
		printf("%c",ch);
	}
}
int main() {
	print3('*',5);
	printf("\n");
	print3('*', 7);
	printf("\n");
	print3('-', 5);
	printf("\n");
	print3('*', 5);
	print3('?', 5);
	return 0;
}