#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 문자 배열 => 문자열
	* - char 배열명[크기] = {'문자1','문자2', ...};
	* - char arr[10] = {'H','e','l','l','o'};
	* - char 배열명[크기] = "문자열";
	* - char arr[10] = "Hello";
	* - 문자열 전체를 초기화하는 것은 배열 선언과 동시에만 가능
	* - 문자열은 최대 글자 + 1개짜리 배열을 만들어야한다.
	* - 문자 최대 10자를 저장하는 배열을 만들려면 11개짜리 배열을
	*	만들어야 한다.
	* - 왜냐하면 문자열 마지막이넨 '\0'라는 문자열이 반드시 들어가야한다.
	* - %s를 이용하여 출력하는 경우 시작번지부터 하나씩 출력하여 '\0'라는
	*   문자열을 만날때까지 출력
	* - 한글은 한 글자가 2바이트, 한글 최대 N글자를 저장하려면
	*   2*N+1개 짜리 배열을 생성
	*/
	char arr1[12] = "Hello world";
	char arr2[11];//한글 최대 5자
	//arr2 = "Hello";//에러 발생
	arr2[0] = 'H';//선언 이후에 값을 넣으려면 하나씩 넣어줘야한다.
	//printf("%s", arr1);
	printf("배열에 저장할 문자열 입력 : ");
	scanf("%s", arr2);
	printf("%s\n", arr2);
	return 0;
}