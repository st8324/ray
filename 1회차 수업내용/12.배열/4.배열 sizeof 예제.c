#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* - �迭�� ũ�⸦ ���ϴ� ����(sizeof�Լ��� �̿�)
	* - sizeof(����/�ڷ���) : ����/�ڷ����� ũ�⸦ ����Ʈ�� �˷���
	*/
	int arr[5] = { 0 };
	int num = 0;
	int size = sizeof(arr) / sizeof(int);
	printf("����   num�� ũ�� : %d\n", sizeof(num));
	printf("�ڷ��� int�� ũ�� : %d\n", sizeof(int));
	printf("�迭   arr�� ũ�� : %d\n", sizeof(arr));
	printf("�迭�� ����       : %d\n", size);
	return 0;
}