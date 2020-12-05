#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* - 지역변수(p.198)
*   - 일부 지역에서만 사용하는 변수
*	- 선언된 위치를 기준으로 {}안이 범위다
*	- 범위를 벗어나면 변수는 사라진다.
* - 전역변수(p.201)
*	- 함수와 상관없이 파일 전체에서 사용하는 변수
*	- 사용하지 않는 것이 좋다.
*	- 함수 밖에 선언
*	- 프로그램이 종료되면 변수는 사라진다.
* - 정적변수(p.204)
*	- 선언되면 프로그램이 종료될 때 사라진다.
*	- 변수 선언시 자료형 앞에 static을 붙인다.
* - 외부 변수(p.207)
*	- 같은 프로젝트안에 있는 다른 파일이나 헤더 파일에 있는 전역 변수를 가져올때 사용
*	- 변수 선언시 자료형 앞에 extern을 붙임
* - 전역변수와 지역변수의 이름이 같은 경우 지역변수로 판별한다.
*/
int globalNum = 20;
//같은 프로젝트안, 다른 파일에 있는 externNum이라는 변수를 가져옴
//아래 외부 변수를 테스트하려면 같은 프로젝트에서 int externNum = 20;을 선언한 후 
//테스트 해야함.
//extern int externNum;
void localAndGlobalTest() {
	int localNum = 11;
	printf("test : num = %d\n", localNum);
	printf("test : globalNum(전역) = %d\n", globalNum);
	int globalNum = 100;
	//지역변수 globalNum일 출력되어 100이 출력됨
	printf("test : globalNum(지역) = %d\n", globalNum);
}
void localAndStaticTest() {
	/*
	* - 지역 변수는 함수가 호출되면 변수를 생성하고 함수가 종료되면 사라진다.
	* - 따라서 다음에 호출되면 다시 변수를 생성하기 때문에 이전과 동일한 값이 출력
	* - 정적 변수는 함수가 처음 호출되면 변수를 생성하고, 함수가 종료되도 사라지지 않는다.
	* - 따라서 다음에 호출되면 변수를 새로 생성하지 않고 이어서 작업하기 때문에 이전과
	*	다른 값을 출력
	*/
	static int num1 = 10;
	int num2 = 10;
	for (int i = 0; i < 5; i++) {
		printf("static : %d, local : %d\n", num1++, num2++);
	}
}
int main() {
	int localNum = 12;
	printf("main : num = %d\n", localNum);
	printf("main : globalNum = %d\n", globalNum++);
	localAndGlobalTest();
	//지역 변수 i는 반복문안에서만 사용가능하고, 벗어나면 i는 사라진다
	for (int i = 0; i < 5; i++) {
		printf("%d ", i);
	}
	printf("\n");
	localAndStaticTest();
	localAndStaticTest();
//	printf("externNum = %d\n", externNum);
	return 0;
}