#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* ���� if��(��ø if��) : if�� ���๮ �ȿ� if���� ���ִ�
	*  ����
	* if(���ǽ�1){
	*	if(���ǽ�2){
	*		���๮1;
	*	}
	* }
	*/
	int num = 6;
	if (num % 2 == 0 && num % 3 != 0) {
		printf("%d�� 2�� ���\n",num);
	}
	else if (num % 3 == 0 && num % 2 != 0) {
		printf("%d�� 2�� ���\n",num);
	}
	else if (num % 2 == 0 && num % 3 == 0) {
		printf("%d�� 6�� ���\n",num);
	}
	else {
		printf("%d�� 2,3,6�� ����� �ƴ�\n",num);
	}

	if (num % 2 == 0) {
		if (num % 3 == 0) {
			printf("%d�� 6�� ���\n", num);
		}
		else {
			printf("%d�� 2�� ���\n", num);
		}
	}
	else if (num % 3 == 0) {
		printf("%d�� 3�� ���\n", num);
	}
	else {
		printf("%d�� 2,3,6�� ����� �ƴ�\n", num);
	}

	return 0;
}