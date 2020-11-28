#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 포인터 변수 : 주소를 저장하는 변수
	*   =>간접적으로 접근
	* - 변수 : 값을 저장
	* - 포인터변수를 활용하는 예
	*	- 크기 변경이 가능한 배열을 만들고 싶을 때
	*	- 함수에서 매개변수의 값을 변경하고 싶을 때
	* - 포인터 변수 선언 방법
	* 자료형 *변수명;
	* 자료형 *변수명 = NULL;
	* 자료형 *변수명 = &변수;
	* 자료형 *변수명 = 포인터변수;
	* - &는 비트논리 AND연산자, 주소 연산자
	*	- & 앞뒤로 변수가 나오면 비트논리 AND
	*	- & 뒤에만 변수가 나오면 주소 연산자
	* - 포인터 변수에 상수값을 넣으면 안됨
	*	- 해당 주소에 중요한 데이터가 있을 수 있기 때문에
	* - 포인터변수는 포인터 변수와 연결된 변수에 값을 확인할 수 있다
	*	- *포인터변수명
	*/
	int num = 10;
	int* pnum1 = NULL;
	int* pnum2 = &num;
	int* pnum3 = pnum2;
	printf("pnum2와 연결된 변수의 값 : %d\n", *pnum2);
	printf("pnum2의 값 : %p\n", pnum2);
	printf("num의 주소 : %p\n", &num);
	/*
	* num의 자료형은? int
	* pnum2의 자료형은? int*
	* *pnum2의 자료형은? int
	* &num의 자료형은? int *
	* &pnum2의 자료형은? int**
	*/
	return 0;
}
