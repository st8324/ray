#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - Hello world�� ���ڿ� ������̼� ���� ������ �� ����.
	*/
	/*
	* //�Ʒ� �ڵ�� Hello world�� ��� �޸𸮿� �־ ������ �Ұ���
	char* arr = "Hello world";
	printf("%s\n", arr);
	arr[0] = 'h';
	printf("%s\n", arr);
	*/
	//�Ʒ� �ڵ�� Hello world�� �迭�� �־ arr�� ���� ������ ����
	char tmp[12] = "Hello world";
	char* arr = tmp;
	printf("%s\n", arr);
	arr[0] = 'h';//tmp[0]='h'; �ڵ�� ����� ����
	printf("%s\n", arr);
	return 0;
}
