#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* a				ch1='a', ch2='a'~'a' i=0, 'a'���� 'a'+0����
	* ab			ch1='b', ch2='a'~'b' i=1, 'a'���� 'a'+1����
	* abc			ch1='c', ch2='a'~'c' i=2, 'a'���� 'a'+2����
	* abcd			ch1='d', ch2='a'~'d' i=3, 'a'���� 'a'+3����
	* ...
	* abcdef...xyz	ch1='z', ch2='a'~'z' i=25,'a'���� 'a'+25����
	*									      j�� 0���� i���� 'a'+j
	*/
	int i, j;
	for (i = 0; i < 26; i++) {
		for (j = 0; j <= i; j++) {
			printf("%c", 'a' + j);
		}
		printf("\n");
	}
	char ch1, ch2;
	for (ch1 = 'a'; ch1 <= 'z'; ch1++) {
		for (ch2 = 'a'; ch2 <= ch1; ch2++) {
			printf("%c", ch2);
		}
		printf("\n");
	}
	return 0;
}