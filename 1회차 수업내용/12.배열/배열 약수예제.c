#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* - 정수 num의 약수를 배열에 저장하는 코드를 작성하세요.
	* - 단, 약수는 최대 10개까지만 저장 가능, 11번재 약수부터는
	*   저장하지 않음
	*/
	int num = 60;
	int arr[10] = { 0 };
	int cnt = 0;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			//배열에 저장
			arr[cnt] = i;
			cnt++;
		}
		if (cnt == 10) {
			break;
		}
	}
	for (int i = 0; i < cnt ; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}