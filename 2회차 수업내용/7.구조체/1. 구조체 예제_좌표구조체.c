#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef unsigned int uint;

struct Point1 {
	int x, y;
};
typedef struct Point1 Point1;

typedef struct Point2 {
	int x, y;
}Point2;

int main() {
	/* 배열 : (동일한 의미) 동일한 자료형을 가진 변수들의 집합 
	*  구조체 : 하나의 정보를 표현하기 위한 변수들의 집합
	*  => c++에서는 클래스로 확장
	*  고등학생 : 학교명(문자열), 학년(정수), 반(정수), 번호(정수)
	*            , 이름(문자열)
	* 구조체 선언은 일반적으로 main()위에 선언
	* - 구조체 선언 방법1
	* struct 구조체명{
	*	자료형1 변수명1;
	*	자료형2 변수명2;
	* };
	* - 구조체 사용 방법1
	* struct 구조체명 변수명; 
	* 
	* 
	* - 구조체 선언 방법2
	* typedef struct 구조체명{
	*	자료형1 변수명1;
	*	자료형2 변수명2;
	* }구조체명;
	* - 구조체 사용 방법2
	* 구조체명 변수명;
	* 
	* 객체 : 구조체를 통해 만들어진 변수
	*
	* 구조체의 멤버변수 접근 방법
	* 객체명.멤버변수명 
	* 
	* 구조체 초기화 방법(객체 생성시 가능)
	* 구조체명 객체명 = {값1, 값2}
	*/
	struct Point1 pt1;
	Point2 pt2 = {4, 5};
	pt1.x = 0;
	pt1.y = 0;
	printf("pt1의 좌표 : (%d, %d)\n", pt1.x, pt1.y);
	printf("pt2의 좌표 : (%d, %d)\n", pt2.x, pt2.y);
	return 0;
}