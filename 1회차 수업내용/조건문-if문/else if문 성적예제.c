#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* p.147
	* else if��
	* ���ǽ�1�� ���̸� ���๮1�� �����ϰ�,
	* �ƴ� ���߿� ���ǽ�2�� ���̸� ���๮2�� �����ϰ�,
	* �ƴϸ� ���๮3�� ����
	* if(���ǽ�1){
	*	���๮1;
	* }
	* //���ǽ�1�� �����̰�, ���ǽ�2�� ���̸�
	* else if(���ǽ�2){
	*	���๮2;
	* }
	* //���ǽ�1�� ���ǽ�2�� �����̸�
	* else{
	*	���๮3;
	* }
	*/
	/*
	* score�� 91���̻��̰� 100�������̸� A��� ����ϰ�
	* score�� 81���̻��̰� 90�������̸� B��� ����ϰ�
	* score�� 71���̻��̰� 80�������̸� C��� ����ϰ�
	* score�� 61���̻��̰� 70�������̸� D��� ����ϰ�
	* score�� 0���̻��̰� 60�������̸� F��� ����ϰ�
	* �ƴϸ� �߸��� ������� ���
	*/
	int score = 90;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);
	if (score >= 91 && score <= 100) {
		printf("%d�� A\n", score);
	}
	else if(score >= 81 && score <= 90) {
		printf("%d�� B\n", score);
	}
	else if (score >= 71 && score <= 80) {
		printf("%d�� C\n", score);
	}
	else if (score >= 61 && score <= 70) {
		printf("%d�� D\n", score);
	}
	else if (score >= 0 && score <= 60) {
		printf("%d�� F\n", score);
	}
	else {
		printf("%d�� �߸��� ����\n", score);
	}
	/*
	* ������ ������ �ذ��ϱ� ���� else if���� �̿��� 
	* �ڵ�� if���� �̿��� �ڵ��� �������� ��Ƚ���̴�.
	*/
	return 0;
}