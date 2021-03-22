#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - 구구단 7단 출력을 while문을 이용하여 작성하세요. */
	int i = 1;
	while ( i <= 9 ) {
		printf("%d x %d = %d\n", 7, i , 7 * i );
		i++;
	}

	return 0;
}