#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ��� : ����(���ϸ�)�� ���� ��� �� ������ ���� �ּҸ� �˷��ִ� 
*         �Լ�, ���⿡ �����ϸ� NULL�� �˷���
*  �Ű����� : char * filename, char * mode : ���ϸ�, ��� 
*  ����Ÿ�� : FILE* : ���� ����ü�� �ּ�
*  �Լ��̸� : fopen
*/
//FILE* fopen(const char* filename, const char* mode);

int main() {
	FILE *fp;
	//���� ����
	fp = fopen("test.txt", "w");
	if (fp == NULL) {
		printf("���� ���⿡ �����߽��ϴ�.\n");
		return 0;
	}

	fprintf(fp, "Hello world\n");
	fprintf(fp, "Hello\n");
	fprintf(fp, "%d-%d-%d\n", 2021, 4, 3);
	fputs("�ȳ��ϼ���\n", fp);
	fputc('a', fp);

	//���� �ݱ�
	if (fp != NULL) {
		fclose(fp);
	}
	return 0;
}