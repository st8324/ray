#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* �ݺ��� : ��Ģ���ִ� �۾��� �ݺ������� �� �� ��� 
	*  - �ݺ�Ƚ��
	*  - ��Ģ��
	*  - �ݺ��� ���� ��
	* ���� �ݺ��� : �ݺ����� ���๮���� �ݺ����� ������ ��� ���
	*/
	/* 
	* �ݺ����� �̿��Ͽ� a~z���� ����ϴ� ������ �ۼ��غ�����.
	* abcde...xyz
	* - �ݺ�Ƚ�� : ���� ch�� a���� z���� 1�� ����
	* - ��Ģ�� : ���� ch�� ���
	*/
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++) {
		printf("%c", ch);
	}
	/* �ݺ����� �̿��Ͽ� ������ ���� ����ϴ� ������ �ۼ��غ�����
	* a
	* ab
	* abc
	* abcd
	* ...
	* abcdef...xyz
	*/
	printf("\n");
	char ch2 = 'a';
	char lastCh = 'a';
	for (lastCh = 'a' ; lastCh <= 'z' ; lastCh++ ) {
		for (ch2 = 'a'; ch2 <= lastCh; ch2++) {
			printf("%c", ch2);
		}
		printf("\n");
	}
	
	return 0;
}