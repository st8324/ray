#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* ����(�Ǽ�)�� �־����� �־��� ������ �´� ������ ����ϴ� �ڵ带
	* �ۼ��ϼ���.
	* A : 90�̻�~100����
	* B : 80�̻�~90�̸�
	* C : 70�̻�~80�̸�
	* D : 60�̻�~70�̸�
	* F : 0�̻�~60�̸�
	* �߸��� �����Դϴ� : 0�̸�, 100�ʰ�
	* - score�� 90������ ũ�ų� ���� score�� 100���� �۰ų� ������
	*   A��� ����ϰ�
	*   score�� 80������ ũ�ų� ���� score�� 90���� ������
	*   B��� ����ϰ�
	*   ...
	*   score�� 0���� �۰ų� score�� 100���� ũ��
	*   (score�� 0���� ũ�ų� ���� 100���� �۰ų� ������ ������)
	*   �߸��� �����̶�� ���
	*/
	int score = 59;
	if (score >= 90  && score <= 100) {
		printf("%d���� A����\n", score);
	}
	else if (score >= 80 && score < 90) {
		printf("%d���� B����\n", score);
	}
	else if (score >= 70 && score < 80) {
		printf("%d���� C����\n", score);
	}
	else if (score >= 60 && score < 70) {
		printf("%d���� D����\n", score);
	}
	else if (score >= 0 && score < 60) {
		printf("%d���� F����\n", score);
	}
	//else if (score < 0 || score > 100) {
	else{
		printf("%d���� �ùٸ� ������ �ƴմϴ�.\n", score);
	}
	return 0;
}