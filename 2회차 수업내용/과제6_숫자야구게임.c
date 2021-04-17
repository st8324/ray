#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 기능 : 정수 배열에 0번지부터 count개만큼 num가 
*         있는지 없는지 확인하는 함수 
*  매개변수 : 정수배열 => int *arr, 비교할 갯수 : int count 
*             비교할 정수 => int num 
*  리턴타입 : 있느닞 없는지 => 참 또는 거짓 => 정수
*  함수이름 : isDuplicate
*/
int isDuplicate(const int* arr, int count, int num) {
	for (int i = 0; i < count; i++) {
		if (arr[i] == num) {
			return 1;//중복 됨
		}
	}
	return 0;//중복 안됨
}
/* 기능 : 정수 배열에 중복된 수가 있는지 체크하고, 범위에 맞는지 체크하는
*         하여 올바른 배열인지 아닌지 알려주는 함수
*  매개변수 : 정수 배열=>int *arr, int size 
*             범위 => int min, int max
*  리턴타입 : 올바른지 아닌지, 중복되지 않고 범위에 맞는지 아닌지 
*             => 정수 => int 
*  함수이름 : validateArray
* */
int validateArray(int* arr, int size, int min, int max) {
	for (int i = 3 - 1; i > 0; i--) {
		int tmp = arr[i];
		//배열에 저장된 수가 범위에 맞지 않은 수이면
		if (tmp < min || tmp > max) {
			return 0;
		}
		//중복된 수이면
		if (isDuplicate(arr, i, tmp)) {
			return 0;
		}
	}
	return 1;
}
int main() {
	/* 숫자 야구 게임
	* - 1~9사이의 중복되지 않은 세수를 랜덤으로 생성
	* - 사용자가 생성된 랜덤한 수를 맞추는 게임(순서도 일치)
	* - S(스트라이크) : 해당 숫자가 있고, 자리수가 일치
	* - B(볼) : 해당 숫자가 있고, 자리수가 불일치
	* - 3O : 일치하는 숫자가 하나도 없는 경우
	* - 3S : 모든 숫자와 자리수가 일치하는 경우
	* - 예
	*   랜덤한 수 : 1 7 5
	*   입력 : 1 2 3
	*   출력 : 1S
	*   입력 : 1 5 6
	*   출력 : 1S 1B
	*   입력 : 4 9 8
	*   출력 : 3O
	*   입력 : 1 7 5
	*   출력 : 3S
	*   정답입니다.
	* - 랜덤 수 생성
	* - 사용자 입력
	* - 판정
	*/
	/* 
	* - 랜덤한 수 생성(1~9, 중복 제거)
	*   - 3개를 저장할 배열
	* 0 0 0
	* 5 => 0개
	* 5 0 0
	* 5 => 1개
	* 8 => 1개
	* 5 8 0
	* 4 => 2개
	* 5 8 4
	*/
	int com[3] = { 0 }, user[3] = { 0 };
	int min = 1, max = 9;
	//랜덤한 수 생성
	srand(time(NULL));
	//i는 저장된 중복되지 않은 수의 갯수
	for (int i = 0; i < 3; ) {
		int r = rand() % (max - min + 1) + min;
		//중복이 안되면
		if (!isDuplicate(com,i,r)) {
			com[i] = r;
			i++;
		}
	}
	printf("\n");
	//사용자 입력
	while (1) {
		int strike = 0, ball = 0;
		printf("1~9사이의 세 정수를 중복되지 않게 입력하세요(예: 1 2 3) : ");
		for (int i = 0; i < 3; i++) {
			scanf("%d", &user[i]);
		}
		/* 4 5 6
		* 검사 안한 숫자 중 가장 마지막 번지에 있는 숫자 가져옴
		* 6 : 범위 체크
		* 
		*/
		if (!validateArray(user, 3, min, max)) {
			continue;
		}
		//사용자 배열에서 하나 꺼내서 컴퓨터 배열에 있는지 체크
		//여기서 구한 갯수는 ball + strike
		int total = 0;//ball + strike
		for (int i = 0; i < 3; i++) {
			if (isDuplicate(com, 3, user[i])) {
				total++;
			}
		}
		for (int i = 0; i < 3; i++) {
			if (com[i] == user[i]) {
				strike++;
			}
		}
		ball = total - strike;
		if (strike != 0) {
			printf("%dS ", strike);
		}
		if (ball != 0) {
			printf("%dB", ball);
		}
		if (strike == 0 && ball == 0) {
			printf("3O");
		}
		printf("\n");
		if (strike == 3) {
			break;
		}
	}
	printf("정답입니다. 프로그램을 종료합니다.\n");
	return 0;
}