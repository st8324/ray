#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - �迭�� �� Ž�� ���� 
	* - �迭 arr1�� �迭 arr2�� ���Ͽ� ���� ������ ������ �ľ��ϴ� ����
	*/
	int arr1[5] = { 2,4,6,8,10 };
	int arr2[5] = { 2,3,4,5,6 };
	int size = sizeof(arr1) / sizeof(int);
	int cnt = 0;//��ġ�ϴ� ������ ����
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr1[i] == arr2[j]) {
				cnt++;
				break;
			}
			//printf("i = %d, j = %d\n", i, j);
		}
	}
	printf("�� �迭�� %d�� �����ϴ�.\n", cnt);
	return 0;
}