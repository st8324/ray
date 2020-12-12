#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - ���� ����(fopen)
	*	- FILE * fopen(const char * fileName,const char* mode);
	*	- fileName : ���ϸ�(Ȯ���� ����)
	*		- �����, ������
	*	- mode : ���� �������� ���
	*		- r : �б�, w : ����, a : �߰�
	*		- + : �б�/����
	*		- t : �ؽ�Ʈ ����
	*		- b : ���̳ʸ� ����
	*	- r : ������ ������ ���� ����
	*	- w : ������ ������ �����ϰ� ���� �����Ͽ� ����
	*	- a : ������ ������ ����, ������ ���� �����Ͽ� ����
	*	- ���� �б⿡ �����ϸ� NULL�� ��ȯ
	* - ���� �ݱ�(fclose)
	*	- fclose(FILE*);
	*	- ������ ����
	*/
	FILE* fp = fopen("input.txt", "r");
	if (fp == NULL) {
		printf("���� ���⿡ �����߽��ϴ�.\n");
		return 0;
	}
	printf("���� ���⿡ �����߽��ϴ�.\n");
	/* 
	* - ���Ͽ��� �о����(fscanf)
	*	- fscanf(FILE*, ���ڿ�,�ּ�);
	*	- fscanf�� ���ڿ��� �о�� �� ���� ������ ���ڿ��� �о��
	* - ���Ͽ��� ���ڿ� �о����(fgets)
	*	- fgets(���ڿ��迭, ũ��, FILE*)
	*	- ���ڿ��� �о���� �Լ��� ���� ���������� �о��
	* - FILE * ��ġ�� stdin�� �Է��ϸ� ǥ���Է����� ��ü�� �� �ִ�
	*	- fscanf�� stdin�� �Է��ϸ� scanfó�� ��� ����
	*	- fgets�� stdin�� �Է��ϸ� getsó�� ��� ����
	*/
	int num;
	char arr[101];
	//fscanf(fp, "%s",  arr);
	//fgets(arr, 101, fp);
	fgets(arr, 101, stdin);
	printf("%s\n",  arr);
	if (fp != NULL) {
		fclose(fp);
	}
	return 0;
}