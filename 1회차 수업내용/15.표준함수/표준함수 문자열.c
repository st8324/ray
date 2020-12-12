#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	/*
	* - ���ڿ� ���Լ�(strcmp)
	*	- strcmp(���ڿ�1, ���ڿ�2)
	*	- �� ���ڿ��� ���Ͽ� ������ 0, �ٸ��� -1,1�� ��ȯ
	*	- ���ڿ�1�� ���ڿ�2���� ���������� ���̸� -1, �ڸ� 1�� ��ȯ
	*/
	char* str1 = "a2";
	char* str2 = "a1";
	int res = strcmp(str1, str2);

	if (res == 0) {
		printf("%s�� %s�� ���� ���ڿ�\n", str1, str2);
	}
	else if (res == -1) {
		printf("%s�� %s���� ���������� ��\n", str1, str2);
	}
	else {
		printf("%s�� %s���� ���������� ��\n", str1, str2);
	}
	/*
	* - ���ڿ� ���� �Լ�(strcpy)
	*	- strpy(���ڿ�1, ���ڿ�2)
	*	- ���ڿ�2�� ���ڿ�1�� ����
	*/
	char arr1[21] = "Hello";
	char arr2[21] = "";
	strcpy(arr2, arr1);
	printf("������ arr2 = %s\n", arr2);

	/*
	* - ���ڿ� �̾� ���̱� �Լ�(strcat)
	*	- strcat(���ڿ�1, ���ڿ�2)
	*	- ���ڿ�1�� ���ڿ�2�� �����Ͽ� ���ڿ�1�� ����
	*/
	strcpy(arr2, " world!");
	strcat(arr1, arr2);
	printf("�̾� ������ arr1 = %s\n", arr1);
	/*
	* - ���ڿ� ���� �Լ�(strlen)
	*	- strlen(���ڿ�)
	*	- ���ڿ��� ���̸� ������ ��ȯ
	*/
	printf("%s�� ���� : %d\n", arr1, strlen(arr1));

	return 0;
}