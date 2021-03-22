#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* - 문자열 : 문자로된 배열
	*  - 정수의 배열의 경우, 우리가 원하는 크기만큼 배열의 크기를
	*    잡으면 됨. 10개의 정수를 저장하기 위해 10개짜리 정수 배열
	*    을 만들면 됨.
	*  - 문자 배열(이하 문자열)의 경우, 영어로 저장하기 위한 크기에
	*    +1을 해야함. 영문자 10자를 저장하기 위해 11개짜리 문자
	*    배열을 만들면 됨
	*  - 문자열의 마지막에는 '\0'라는 문자를 반드시 넣어주어야한다.
	*  - '\0'는 문자열의 끝을 의미
	*  - 배열의 이름은 0번지의 주소
	*/
	//abcd를 저장하기 위한 배열 생성
	char array1[5] = { 'a','b','c','d','\0' };
	//%s는 주소가 필요하고, 해당 주소부터 '\0'를 만날때까지 출력
	printf("%s\n", array1);
	printf("%s\n", &array1[0]);
	printf("%s\n", &array1[1]);
	printf("%s\n", array1+1);
	printf("%c\n", array1[1]);

	char array2[5] = "abcd";
	printf("%s\n", array2);
	printf("%s\n", &array2[0]);
	printf("%s\n", &array2[1]);
	printf("%s\n", array2 + 1);
	printf("%c\n", array2[1]);
	array2[1] = 'e';
	/* 
	* - 배열을 이용하면 한글 표현 가능
	* - 한글 1자는 2바이트
	* - 한글 최대 10자를 저장가능한 배열을 만들고 싶으면
	*   21개짜리 배열을 생성
	*/
	char array3[5] = "안녕";
	printf("%s\n", array3);
	return 0;
}