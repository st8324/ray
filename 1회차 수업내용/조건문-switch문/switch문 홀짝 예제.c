#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	*  - switch���� � ������ ���� Ư���� ��� ������ �����
	*  �� �ַ� ����Ѵ�.
	*  - ������꿹��, �޷¿���
	* switch(����){
	* case ��1:	//������ ��1�� ���ٸ� ���๮1�� ����
	*			//if(���� == ��1)
	*	���๮1;
	*	break;
	* case ��2://������ ��1�� �����ʰ� ������ ��2�� ���ٸ� 
	*		   //else if(���� == ��2)
	*	���๮2;//���๮2�� ����
	*	break;
	* default: //������ ��1�� ��2�� ���� �ʴٸ� ���๮3�� ����
	*		   //else
	*	���๮3;
	* }
	*/
	int num = 4;
	switch (num % 2) {
	case 0:
		printf("%d�� ¦��\n", num);
		break;
	case 1:
		printf("%d�� Ȧ��\n", num);
		break;
	}
	return 0;
}