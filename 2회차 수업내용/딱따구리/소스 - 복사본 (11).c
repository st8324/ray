#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char arr1[21] = "Hello";
	char arr2[21];
	//���ڿ� �Լ� : str***, strn***
	//strcpy : ���ڿ� ����
	//strncpy : ���ڿ��� n�� ����
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	strcpy(arr2, "ȫ�浿");
	printf("%s\n", arr2);
	//strcat : ���ڿ� �̾���̱�
	strcat(arr2, "�� ����");
	printf("%s\n", arr2);

	// strcmp : ���ڿ� ��, ������ 0, �ٸ��� 0�� �ƴ�
	// ���ڿ�A, ���ڿ�B�� ���ߴµ� -1, A�� B���� ���������� ��
	// ���ڿ�A, ���ڿ�B�� ���ߴµ� 1, A�� B���� ���������� ��
	printf("a == a : %d\n", strcmp("a", "a"));
	printf("a == b : %d\n", strcmp("a", "b"));
	printf("b == a : %d\n", strcmp("b", "a"));
	// strstr(A,B) : ���ڿ� A�� ���ڿ� B�� �ִ��� Ȯ���Ͽ� 
	//				������ ���� �ּҸ�, ������ NULL�� ��ȯ
	char str1[21] = "Hello wolrd";
	char str2[21] = "Hi";
	char* pos = strstr(str1, str2);
	printf("%s\n", pos);
	//str1�� str2���ڿ��� � �ִ��� Ȯ���ϴ� ����
	int count = 0;
	pos = str1;
	do {
		pos = strstr(pos, str2);
		if (pos != NULL) {
			count++;
			pos += 1;
		}
	} while (pos != NULL);
	printf("%s���� %s ���ڿ��� %d�� �ֽ��ϴ�.\n"
		, str1, str2, count);
	return 0;
}