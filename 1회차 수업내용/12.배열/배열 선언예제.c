#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE1 5
int main() {
	/* - 배열 : (같은 의미)같은 자료형을 가진 변수들의 집합
	*  - 반복문을 이용하여 관리하기가 쉽다
	*  - 배열은 데이터가 메모리에 연속적으로 할당이 된다.
	*    => 속도가 빠르다
	*  - 배열 선언
	* 자료형 배열명[크기];
	* 자료형 배열명[크기] = {값1,값2,...값n};
	*  - 크기는 상수
	*  - 배열명[번지]를 이용하여 사용
	*  - 배열의 시작번지는 0번지 
	*  - 배열의 마지막번지는 크기-1번지
	*  - 배열의 이름은 0번지의 주소를 의미
	*  - 배열은 크기를 지정하면 변경이 불가능
	*/
	int arr1[5];
	int arr2[5] = { 1, 2, 3, 4, 5 };
	int arr3[5] = { 0 };//모든 원소의 값을 0으로 초기화
	int size = 5;
	//int arr4[size];//크기에 변수가 와서 에러 발생
	int arr5[SIZE1];
					//안좋은 예		//좋은 예
	arr5[0] = 1;	//사과의 갯수	//1번 학생의 점수
	arr5[1] = 2;	//학생 수		//2번 학생의 점수
	arr5[2] = 3;	//가족의 수		//3번 학생의 점수
	arr5[3] = 4;	//컴퓨터 수		//4번 학생의 점수
	arr5[4] = 5;	//키보드 수		//5번 학생의 점수
	printf("arr5[0]번지의 값 : %d\n", arr5[0]);
	printf("arr5[1]번지의 값 : %d\n", arr5[1]);
	printf("arr5[2]번지의 값 : %d\n", arr5[2]);
	printf("arr5[3]번지의 값 : %d\n", arr5[3]);
	printf("arr5[4]번지의 값 : %d\n", arr5[4]);
	for (int i = 0; i < 5; i++) {
		printf("arr5[%d]번지의 값 : %d\n",i, arr5[i]);
	}

	return 0;
}