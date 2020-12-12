#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	/*
	* - 문자열 비교함수(strcmp)
	*	- strcmp(문자열1, 문자열2)
	*	- 두 문자열을 비교하여 같으면 0, 다르면 -1,1을 반환
	*	- 문자열1이 문자열2보다 사전순으로 앞이면 -1, 뒤면 1을 반환
	*/
	char* str1 = "a2";
	char* str2 = "a1";
	int res = strcmp(str1, str2);

	if (res == 0) {
		printf("%s와 %s는 같은 문자열\n", str1, str2);
	}
	else if (res == -1) {
		printf("%s가 %s보다 사전순으로 앞\n", str1, str2);
	}
	else {
		printf("%s가 %s보다 사전순으로 뒤\n", str1, str2);
	}
	/*
	* - 문자열 복사 함수(strcpy)
	*	- strpy(문자열1, 문자열2)
	*	- 문자열2를 문자열1에 복사
	*/
	char arr1[21] = "Hello";
	char arr2[21] = "";
	strcpy(arr2, arr1);
	printf("복사후 arr2 = %s\n", arr2);

	/*
	* - 문자열 이어 붙이기 함수(strcat)
	*	- strcat(문자열1, 문자열2)
	*	- 문자열1에 문자열2를 연결하여 문자열1에 저장
	*/
	strcpy(arr2, " world!");
	strcat(arr1, arr2);
	printf("이어 붙인후 arr1 = %s\n", arr1);
	/*
	* - 문자열 길이 함수(strlen)
	*	- strlen(문자열)
	*	- 문자열의 길이를 정수로 반환
	*/
	printf("%s의 길이 : %d\n", arr1, strlen(arr1));

	return 0;
}