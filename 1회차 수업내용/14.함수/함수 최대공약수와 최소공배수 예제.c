#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
* 기능 : 두 정수가 주어지면 두 정수의 최대 공약수를 알려주는 함수
* 매개변수 : 두 정수 => int num1, int num2
* 리턴타입 : 최대 공약수 => int
* 함수이름 : gcd 
*/
int gcd(int num1, int num2) {
	int res = 1;
	for (int i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			res = i;
		}
	}
	return res;
}
int lcm(int num1, int num2) {
	int res = num1 * num2 / gcd(num1, num2);
	return res;
}
int main() {
	int num1 = 10, num2 = 15;
	int res = gcd(num1,num2);
	
	printf("%d 와 %d의 최대 공약수 :  %d\n", num1, num2, res);
	printf("%d 와 %d의 최소 공배수 :  %d\n", num1, num2, lcm(num1, num2));
	printf("%d 와 %d의 최대 공약수 :  %d\n", 2, 3, gcd(2,3));

	return 0;
}