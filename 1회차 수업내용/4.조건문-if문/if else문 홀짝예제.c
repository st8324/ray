#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* if else�� : ~�ϸ� ...�ϰ� �ƴϸ� ....�ض�
	* ���ǽ��� ���̸� ���๮1�� �����ϰ�, �ƴϸ� 
	* ���๮2�� �����ض�
	* else : ���� else�� ��ġ�� �������� ���� ���
	*        ���ǽ��� �����̸�
	* if(���ǽ�){
	*	���๮1;
	* }else{
	*	���๮2;
	* }
	*/
	int num = 11;
	if (num % 2 == 0) {
		printf("%d�� ¦��\n", num);
	}
	else {
		printf("%d�� Ȧ��\n", num);
	}
	return 0;
}