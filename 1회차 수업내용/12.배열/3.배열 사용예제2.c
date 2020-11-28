#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 배열에 원하는 정수를 입력받아 저장하는 예제*/
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		printf("정수를 입력하세요 : ");
		//scanf("%d", &arr[i]);/i번지에 정수를 저장
		//arr + i : i번지의 주소를 의미
		scanf("%d", arr + i);//i번지에 정수를 저장
	}
	for (int i = 0; i < 5; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("0번지의 주소 : %p\n", &arr[0]);
	printf("배열의 이름  : %p\n", arr);
	return 0;
}