#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 11;
	//���� num�� ¦���̸� ¦����� ���
	/*
	if (���� num�� ¦���� ����) {
		¦����� ���;
	}
	if(���� num�� 2�� ����� ����){
		¦����� ���;
	}
	if(���� num�� 2�� �������� �� �������� 0�� ����){
		¦����� ���;
	}
	if(num 2 % 0 == ){
		printf("¦��\n");
	}
	*/
	if (num % 2 == 0) {
		printf("¦��\n");
	}
	//num�� Ȧ���̸� Ȧ����� ���
	if (!(num % 2 == 0)) {
		printf("Ȧ��\n");
	}
	if (num % 2 == 1) {
		printf("Ȧ��\n");
	}
	return 0;
}