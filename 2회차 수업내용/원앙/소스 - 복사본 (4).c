#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* for(�ʱ�ȭ; ���ǽ�; ������){
	*	���๮;
	* }
	* 
	* while(���ǽ�){
	*	���๮;
	* }
	* 
	* �ʱ�ȭ;
	* while(���ǽ�){
	*	���๮;
	*	������;
	* }
	*/
	
	int i;
	for (i = 1; i <= 5; i++) {
		printf("Hello\n");
	}

	i = 1;
	while (i <= 5) {
		printf("Hello\n");
		i++;
	}

	return 0;
}