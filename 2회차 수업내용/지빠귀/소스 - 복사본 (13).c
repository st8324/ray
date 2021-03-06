#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - break 
	*   - switch문을 빠져 나가는 역할
	*   - 반복문을 빠져 나가는 역할(if문과 함께 쓰임)
	*/
	int i = 0;
	for (i = 1; i <= 5; i++) {
		printf("Hello\n");
		if (i == 3) {
			break;
		}
	}
	return 0;
}