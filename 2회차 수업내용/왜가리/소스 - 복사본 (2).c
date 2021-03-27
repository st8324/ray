#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* 변수 : 실제 값을 저장하는 공간
	* int num = 10;
	* 포인터 : 주소를 저장하는 공간
	*  - 배열을 만들 때 사용 : 일반 배열은 배열의 크기를 중간에
	*	 바꿀수 없다. 
	*    - 포인터를 이용하여 생성한 배열은 중간에
	*      크기를 바꿀 수 있습니다.
	*    - 포인터를 이용하여 배열을 생성할 때 변수를 이용하여 
	*      크기를 결정할 수 있다.
	*  - 함수의 매개변수로 사용한다
	* 포인터 선언 방법
	* 자료형 *변수명 = NULL;
	* 자료형 *변수명 = 변수의 주소값;
	* 자료형 *변수명 = 포인터변수;
	*/
	int* pnum1 = NULL;
	int num1 = 10;
	int* pnum2 = &num1;
	int* pnum3 = pnum2;
	printf("&num1 = %x\n", &num1);
	printf("pnum2 = %x\n", pnum2);
	printf("pnum3 = %x\n", pnum3);
	int num2 = 10, num3 = num2;
	printf("num2 = %d, num3 = %d\n", num2, num3);
	num3 = 20;
	printf("num2 = %d, num3 = %d\n", num2, num3);
	/* 포인터 변수가 가지고 있는 주소와 연결된 값을 가져오는 방법
	*  *포인변수명
	*/
	printf("num1   = %d\n", num1);
	printf("*pnum2 = %d\n", *pnum2);
	printf("*pnum3 = %d\n", *pnum3);
	*pnum2 = 20;//pnum2와 연결된 num1의 값이 20으로 변경
	printf("*pnum2를 이용하여 값 변경 후\n");
	printf("num1   = %d\n", num1);
	printf("*pnum2 = %d\n", *pnum2);
	printf("*pnum3 = %d\n", *pnum3);
	/* 대입연산자 =을 쓸때는 자료형을 일치시켜야 한다.
	*   pnum2의 자료형은? int*
	*  *pnum2의 자료형은? int
	*   num1의 자료형은?  int
	*  &num1의 자료형은?  int*
	*  &pnum2의 자료형은? int**
	*/
	return 0;
}