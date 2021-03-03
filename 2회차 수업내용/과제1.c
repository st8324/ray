#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 과제 : 위 예제를 활용하여 두 정수를 입력받고, 입력받은 두 정수의
	*		  모든 산술연산 결과를 출력하는 코드를 작성하세요.
	* 입력 예시 : 7 2
	* 7 + 2 = 9
	* 7 - 2 = 5
	* 7 * 2 = 14
	* 7 / 2.00 = 3.50
	* 7 % 2 = 1
	*/
	int num1 = 0, num2 = 0;
	printf("두 정수를 입력하세요(예:7 2) : ");
	scanf("%d %d",&num1 ,&num2);
	
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %.2f\n", num1, num2, (double)num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);
	return 0;
}