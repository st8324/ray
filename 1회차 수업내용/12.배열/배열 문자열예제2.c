#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char arr[11]="abcdefghij";
	arr[4] = '\0';
	printf("%s\n", arr);//0�������� '\0'�� ���������� ���
	printf("%s\n", arr + 1);//1�������� '\0'�� ���������� ���
	printf("%s\n", arr + 5);//5�������� '\0'�� ���������� ���
	arr[10] = 'k';
	printf("%s\n", arr + 5);//5�������� '\0'�� ���������� ���
	return 0;
}
