#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char arr1[21] = "Hello";
	char arr2[21];
	//문자열 함수 : str***, strn***
	//strcpy : 문자열 복사
	//strncpy : 문자열을 n개 복사
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	strcpy(arr2, "홍길동");
	printf("%s\n", arr2);
	//strcat : 문자열 이어붙이기
	strcat(arr2, "은 의적");
	printf("%s\n", arr2);

	// strcmp : 문자열 비교, 같으면 0, 다르면 0이 아님
	// 문자열A, 문자열B를 비교했는데 -1, A가 B보다 사전순으로 앞
	// 문자열A, 문자열B를 비교했는데 1, A가 B보다 사전순으로 뒤
	printf("a == a : %d\n", strcmp("a", "a"));
	printf("a == b : %d\n", strcmp("a", "b"));
	printf("b == a : %d\n", strcmp("b", "a"));
	// strstr(A,B) : 문자열 A에 문자열 B가 있는지 확인하여 
	//				있으면 시작 주소를, 없으면 NULL을 반환
	char str1[21] = "Hello wolrd";
	char str2[21] = "Hi";
	char* pos = strstr(str1, str2);
	printf("%s\n", pos);
	//str1에 str2문자열이 몇개 있는지 확인하는 예제
	int count = 0;
	pos = str1;
	do {
		pos = strstr(pos, str2);
		if (pos != NULL) {
			count++;
			pos += 1;
		}
	} while (pos != NULL);
	printf("%s에는 %s 문자열이 %d개 있습니다.\n"
		, str1, str2, count);
	return 0;
}