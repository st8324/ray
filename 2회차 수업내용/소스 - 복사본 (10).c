#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 증감연산자 : 최종적으로 변수의 값이 1 증가/감소 - ++, --
	*   - 전위형 : ++num, --num
	*     - 증가를 하고 동작을 한다.
	*   - 후위형 : num++, num--
	*     - 동작을 하고 증가를 한다.
	*/
	int num1 = 10, num2 = 10;
	//num1을 1증가시키고, 증가된 num1을 num3에 저장, num1=11, num3=11
	int num3 = ++num1;
	//num1 = num1 + 1;
	//int num3 = num1;
	//num2의 값을 num4에 저장하고, num2의 값을 1증가, num2=11,num4=10
	int num4 = num2++;
	//int num4 = num2;
	//num2 = num2 + 1;
	printf("num1 = %d, num3 = %d\n", num1, num3);
	printf("num2 = %d, num4 = %d\n", num2, num4);
	//변수 num5에 1 증가된 num1의 값을 저장하고 싶다
	num1++;//++num1;
	int num5 = num1;
	
	return 0;
}