#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* - ���� num�� ����� �迭�� �����ϴ� �ڵ带 �ۼ��ϼ���.
	* - ��, ����� �ִ� 10�������� ���� ����, 11���� ������ʹ�
	*   �������� ����
	*/
	int num = 60;
	int arr[10] = { 0 };
	int cnt = 0;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			//�迭�� ����
			arr[cnt] = i;
			cnt++;
		}
		if (cnt == 10) {
			break;
		}
	}
	for (int i = 0; i < cnt ; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}