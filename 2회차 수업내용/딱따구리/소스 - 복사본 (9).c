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
	fp = fopen("test.txt", "r");
	if (fp == NULL) {
		printf("���� ���⿡ �����߽��ϴ�.\n");
		return 0;
	}
	
	/*fprintf(fp, "Hello\n");
	fprintf(fp, "Hello\n");
	fprintf(fp, "%d-%d-%d\n", 2021, 4, 3);
	fputs("�ȳ��ϼ���\n", fp);
	fputc('a', fp);*/
	/*
	fscanf���� ���ڿ��� �о �迭�� ������ ��
	�о���� ���ڿ��� ���������� �Ѵܾ�ۿ� �ȵ�
	���Ͽ� �ȳ��ϼ���. ���̸��� ����Ǿ� ������
	fscanf�� �ȳ��ϼ���. ������ �о��
	fgets�� �� ������ �о��
	�� ���� ��ü�� �ϰſö��� fgets�� ����ϰ�
	������ �Ǽ��� ���� �Ǵ� �� �ܾ �о�ô��
	fscanf�� ���
	*/
	char buff[1024];
	int year, month, day;
	char ch;
	fgets(buff, 1024, fp);//Hello world\n�� �о��
	printf("%s",buff);
	fscanf(fp, "%s", buff);//Hello�� �о��
	printf("%s\n", buff);
	//���͸� ������ ����-����-���ڸ� �о��
	fscanf(fp, "%d-%d-%d", &year, &month, &day);
	printf("%d�� %d�� %d��\n", year, month, day);
	fscanf(fp, "%s", buff);//���͸� ������ �ȳ��ϼ��並 �о��
	printf("%s\n", buff);
	ch = fgetc(fp);//���͸� �о��
	ch = fgetc(fp);//a�� �о��
	printf("%c\n", ch);
	//���� �ݱ�
	if (fp != NULL) {
		fclose(fp);
	}
	return 0;
}