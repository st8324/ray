#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* �迭�� ���ϴ� ������ �Է¹޾� �����ϴ� ����*/
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		printf("������ �Է��ϼ��� : ");
		//scanf("%d", &arr[i]);/i������ ������ ����
		//arr + i : i������ �ּҸ� �ǹ�
		scanf("%d", arr + i);//i������ ������ ����
	}
	for (int i = 0; i < 5; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("0������ �ּ� : %p\n", &arr[0]);
	printf("�迭�� �̸�  : %p\n", arr);
	return 0;
}