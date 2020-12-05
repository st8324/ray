#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* - 함수 선언 방법1
*	- main()함수 앞에 함수 선언과 구현을 같이한다.
* - 함수 선언 방법2
*	- main()함수 앞에 함수를 선언하고, main() 함수 뒤에 함수를 구현(정의)한다.
*	- 함수 선언 시 변수명은 쓰지 않고 자료형만 써도된다
*/
//함수 선언 방법2
int sum(int , int );
//double sum(double, double);
int main() {
	printf("%d\n", sum(1, 2));
	//printf("%.1lf\n", sum(1.1, 2.2));
	return 0;
}
int sum(int num1, int num2) {
	return num1 + num2;
}
/*
* - 아래는 함수 오버로딩에 의해 가능한 함수이다.(단 C++에서 가능, C에서는 에러)
* - 함수 오버로딩
*	- 동일한 이름의 함수가 2개 이상인 경우
*	- 1. 매개변수의 갯수가 다른 경우 가능
*	- 2. 매개변수의 자료형이 다른 경우 가능
*/
/*
double sum(double num1, double num2) {
	return num1 + num2;
}
*/