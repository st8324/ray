#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* 연산자
	*  - 연산자의 종류를 알고 결과를 예측할 수 있다.
	* 1. 산술연산자(+,-,*,/,%) : p.53
	*  1 / 2 => 0
	*  1 / 2.0 => 0.5
	*  - / 연산자
	*    - 정수 / 정수 => 정수(소수점이 버려짐)
	*    - 정수 / 실수 => 실수
	*    - 실수 / 정수 => 실수
	*    - 실수 / 실수 => 실수
	*  - /연산을 할 때 두 수가 정수이면 하나를 실수로 바꿔야한다
	*  - /연산을 할 때 두 수가 정수이면 하나를 실수로 자료형을 변환해야한다
	*  - 자료형변환 : 변수나 값의 자료형을 일시적으로 변환
	*    자료형을 바꾸고자 하는 값 앞에 바꾸려는 자료형을 ()와 함께 쓴다
	*/
	int num1 = 5, num2 = 2;
	printf("%f\n", 1 / (double)2);
	printf("%f\n", num1 / (double)num2);

	double res = num1 / (double)num2;
	printf("%f\n", res);
	
	/* - % : 나머지 연산자(모드 연산자) 
	*    - A % B : A를 B로 나누었을 때 나머지
	*    - C언어에서 %연산자는 정수 % 정수만 가능
	*    - 5 % 3 => 2(0보다 크거나 같고 5보다 작거나 같은 정수)
	*    - 5 % 10 => 5
	*    - 홀짝 판별, 배수판별, 약수 판별
	*    - %연산자를 말로 표현하면 나누었을 때 나머지에 해당
	*  - /와 %는 0으로 나눌 수 없다
	*/
	printf("5 %% 3 = %d\n", 5 % 3);
	printf("5 %% 10 = %d\n", 5 % 10);

	int num3 = 5, num4 = 3;
	printf("%d + %d = %d\n", num3, num4, num3 + num4);
	printf("%d - %d = %d\n", num3, num4, num3 - num4);
	printf("%d * %d = %d\n", num3, num4, num3 * num4);
	printf("%d / %.2f = %.2f\n", num3, (double)num4, num3 / (double)num4);
	printf("%d %% %d = %d\n", num3, num4, num3 % num4);
	return 0;
}