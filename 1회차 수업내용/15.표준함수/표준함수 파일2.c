#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	FILE* fp = fopen("input.txt", "w");
	if (fp == NULL) {
		printf("���� ���⿡ �����߽��ϴ�.\n");
		return 0;
	}
	printf("���� ���⿡ �����߽��ϴ�.\n");
	/* 
	* - ���� ����
	*	- fprintf(FILE*, ���ڿ�);
	*	- fputs(���ڿ�, FILE*);
	*/
	//fprintf(fp, "%d %s", 100, "�ȳ��ϼ���");
	fputs("�ȳ��ϼ���", fp);
	if (fp != NULL) {
		fclose(fp);
	}
	return 0;
}