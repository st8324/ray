#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 5자리 정수를 입력받아 입력받은 정수를 거꾸로 배열에 저장하고
	* 출력하는 예제
	* 예 : 12345를 입력
	* 54321 출력
	* 예 : 12340를 입력
	* 04321 출력
	* 나머지 연산자를 이용하여 마지막자리를 추출
	* 12345 => 5
	* 1234 => 4
	* 123 => 3
	* 12 => 2
	* 1 => 1
	* 0
	*/
	int num = 12340;
	int tmp = num;
	int nums[5] = { 0 };
	int cnt = 0;//거꾸로 저장된 숫자의 갯수
	while (tmp != 0) {
		nums[cnt] = tmp % 10;
		tmp = tmp / 10;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		printf("%d", nums[i]);
	}
	printf("\n");
	/* 원래 수와 거꾸로된 수를 더한 결과를 출력하는 예제
	* 12345 => 54321
	* 66666
	* 0 + 5 => 5
	* 50 + 4 => 54
	* 540 + 3 => 543
	* 5430 + 2 => 5432
	* 54320 + 1 => 54321
	* 배열에 있는 거꾸로된 값을 하나의 정수로 만듬
	*/
	int revNum = 0;
	for (int i = 0; i < cnt; i++) {
		revNum = revNum*10 + nums[i];
	}
	printf("원래 숫자 : %d\n", num);
	printf("거꾸로숫자: %d\n", revNum);
	printf("합 : %d\n", num + revNum);
	return 0;
}

