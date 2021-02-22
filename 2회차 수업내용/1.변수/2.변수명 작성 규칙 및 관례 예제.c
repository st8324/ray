#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - 변수명 작성 규칙(p.49)
	*   1. 대소문자를 구별한다.
	*    - int a, A; //a와 A는 서로 다른 변수
	*   2. 같은 이름의 변수를 선언할 수 없다
	*   3. 특수문자는 $와 _만 가능
	*   4. 변수명 시작은 숫자가 올 수 없다
	*    - int 1num;//에러
	*   5. 변수명은 예약어를 사용할 수 없다
	*    - 예약어 : 기능이 지정된 단어, 예로 int
	* 
	* - 변수명 작성 관례(필수는 아니지만 일반적으로 지킴)
	*   1. 변수명은 의미있게 지어라
	*    - int a;//어떤 데이터가 있는지 유추할 수 없음
	*    - int age;//나이를 관리하는 데이터라고 유추할 수 있음
	*   2. 변수명이 여러 단어로 이루어진 경우, 두번째 단어부터 첫글자만
	*      대문자로 한다(카멜 표기법)
	*    - int studentCount;
	*   3. 상수는 대문자로
	*    - const double PI = 3.14;
	*/
	//int 1num; //에러 발생
	int num2;
	//int num2;//실행시 에러
	//int num#;//에러 발생
	int _num;
	int $num;
	//int int;//에러 발생
	int Num2;
	const double PI = 3.14;
	//PI = 4.15;//PI는 상수이기 때문에 에러 발생

	return 0;
}