#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ��� : ���� �迭�� 0�������� count����ŭ num�� 
*         �ִ��� ������ Ȯ���ϴ� �Լ� 
*  �Ű����� : �����迭 => int *arr, ���� ���� : int count 
*             ���� ���� => int num 
*  ����Ÿ�� : �ִ��� ������ => �� �Ǵ� ���� => ����
*  �Լ��̸� : isDuplicate
*/
int isDuplicate(const int* arr, int count, int num) {
	for (int i = 0; i < count; i++) {
		if (arr[i] == num) {
			return 1;//�ߺ� ��
		}
	}
	return 0;//�ߺ� �ȵ�
}
/* ��� : ���� �迭�� �ߺ��� ���� �ִ��� üũ�ϰ�, ������ �´��� üũ�ϴ�
*         �Ͽ� �ùٸ� �迭���� �ƴ��� �˷��ִ� �Լ�
*  �Ű����� : ���� �迭=>int *arr, int size 
*             ���� => int min, int max
*  ����Ÿ�� : �ùٸ��� �ƴ���, �ߺ����� �ʰ� ������ �´��� �ƴ��� 
*             => ���� => int 
*  �Լ��̸� : validateArray
* */
int validateArray(int* arr, int size, int min, int max) {
	for (int i = 3 - 1; i > 0; i--) {
		int tmp = arr[i];
		//�迭�� ����� ���� ������ ���� ���� ���̸�
		if (tmp < min || tmp > max) {
			return 0;
		}
		//�ߺ��� ���̸�
		if (isDuplicate(arr, i, tmp)) {
			return 0;
		}
	}
	return 1;
}
int main() {
	/* ���� �߱� ����
	* - 1~9������ �ߺ����� ���� ������ �������� ����
	* - ����ڰ� ������ ������ ���� ���ߴ� ����(������ ��ġ)
	* - S(��Ʈ����ũ) : �ش� ���ڰ� �ְ�, �ڸ����� ��ġ
	* - B(��) : �ش� ���ڰ� �ְ�, �ڸ����� ����ġ
	* - 3O : ��ġ�ϴ� ���ڰ� �ϳ��� ���� ���
	* - 3S : ��� ���ڿ� �ڸ����� ��ġ�ϴ� ���
	* - ��
	*   ������ �� : 1 7 5
	*   �Է� : 1 2 3
	*   ��� : 1S
	*   �Է� : 1 5 6
	*   ��� : 1S 1B
	*   �Է� : 4 9 8
	*   ��� : 3O
	*   �Է� : 1 7 5
	*   ��� : 3S
	*   �����Դϴ�.
	* - ���� �� ����
	* - ����� �Է�
	* - ����
	*/
	/* 
	* - ������ �� ����(1~9, �ߺ� ����)
	*   - 3���� ������ �迭
	* 0 0 0
	* 5 => 0��
	* 5 0 0
	* 5 => 1��
	* 8 => 1��
	* 5 8 0
	* 4 => 2��
	* 5 8 4
	*/
	int com[3] = { 0 }, user[3] = { 0 };
	int min = 1, max = 9;
	//������ �� ����
	srand(time(NULL));
	//i�� ����� �ߺ����� ���� ���� ����
	for (int i = 0; i < 3; ) {
		int r = rand() % (max - min + 1) + min;
		//�ߺ��� �ȵǸ�
		if (!isDuplicate(com,i,r)) {
			com[i] = r;
			i++;
		}
	}
	printf("\n");
	//����� �Է�
	while (1) {
		int strike = 0, ball = 0;
		printf("1~9������ �� ������ �ߺ����� �ʰ� �Է��ϼ���(��: 1 2 3) : ");
		for (int i = 0; i < 3; i++) {
			scanf("%d", &user[i]);
		}
		/* 4 5 6
		* �˻� ���� ���� �� ���� ������ ������ �ִ� ���� ������
		* 6 : ���� üũ
		* 
		*/
		if (!validateArray(user, 3, min, max)) {
			continue;
		}
		//����� �迭���� �ϳ� ������ ��ǻ�� �迭�� �ִ��� üũ
		//���⼭ ���� ������ ball + strike
		int total = 0;//ball + strike
		for (int i = 0; i < 3; i++) {
			if (isDuplicate(com, 3, user[i])) {
				total++;
			}
		}
		for (int i = 0; i < 3; i++) {
			if (com[i] == user[i]) {
				strike++;
			}
		}
		ball = total - strike;
		if (strike != 0) {
			printf("%dS ", strike);
		}
		if (ball != 0) {
			printf("%dB", ball);
		}
		if (strike == 0 && ball == 0) {
			printf("3O");
		}
		printf("\n");
		if (strike == 3) {
			break;
		}
	}
	printf("�����Դϴ�. ���α׷��� �����մϴ�.\n");
	return 0;
}