#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - 0~9������ ���� 10���� �ֿܼ��� �Է¹޾� �Է¹��� ���ڰ� 
	*    ���� � �Էµƴ��� Ȯ���ϴ� �ڵ带 �ۼ��ϼ���.
	*  - �� : 1 1 2 2 3 4 5 9 0 1
	*  - 0 : 1
	*    1 : 3
	*    2 : 2
	*    3 : 1
	*    4 : 1
	*    5 : 1
	*    6 : 0
	*    7 : 0
	*    8 : 0
	*    9 : 1
	*    
	*/
	int num;
	int arr[10] = { 0 };
	
	for (int i = 0; i < 10; i++) {
		printf("���� �Է�(0~9) : ");
		scanf("%d", &num);
		arr[num] = arr[num] + 1;//arr[num]++;//arr[num] += 1;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d : %d��\n", i, arr[i]);
	}
	//1 1 2 2 3 4 5 9 0 1
	return 0;
}