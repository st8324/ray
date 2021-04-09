#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 기능 : 두 정수가 주어지면 두 정수의 값을 바꾸는 함수 
*  매개변수 : 두 정수 => int num1, int num2
*  리턴타입 : 없음 => void
*  함수이름 : swap1
*/
/* 매개변수가 일반   변수인 경우 원본이 변하지 않음 
*  매개변수가 포인터 변수인 경우 원본이 변할수 있음
*/
void swap1(int num1, int num2) {
	//printf("num1 = %d, num2 = %d\n", num1, num2);
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
	//printf("num1 = %d, num2 = %d\n", num1, num2);
}
/* 포인터 변수 : 주소를 저장하는 변수 
*  일반 변수 : 값을 저장하는 변수
*  포인터 사용하는 상황
*  1. 동적할당을 통해 배열 생성
*  2. 함수의 매개변수 
*/
void swap2(int* num1, int* num2) {
	int tmp = *num1;//num1 : int *, tmp : int, &num1 : int **
	*num1 = *num2;
	*num2 = tmp;
}
int main() {
	int num1 = 10, num2 = 20;
	printf("num1 = %d, num2 = %d\n", num1, num2);
	swap2(&num1, &num2);
	printf("num1 = %d, num2 = %d\n", num1, num2);
	return 0;
}