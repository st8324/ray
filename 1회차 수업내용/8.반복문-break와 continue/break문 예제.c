#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* break
	* - switch문에서는 switch를 빠져 나감 
	* - 반복문에서는 반복문을 빠져 나감
	* - 반복문에서는 조건문과 함께 쓰임(필수)
	*/
	int i;
	for (i = 1; ; i++) {
		printf("Hello world\n");
		if (i == 5) {
			break;
		}
	}

	int num1 = 10, num2 = 15;
	int lcm = 1;

	for (i = num1; ; i+=num1) {
		if (i % num2 == 0) {
			lcm = i;
			break;
		}
	}
	printf("%d와 %d의 최소 공배수 : %d\n", num1, num2, lcm);

	return 0;
}