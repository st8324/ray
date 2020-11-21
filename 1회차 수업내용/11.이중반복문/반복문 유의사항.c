#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* 무한루프 : 초기화, 조건식, 증감식을 잘못지정하여 반복문이
	*			 종료되지 않는 현상
	* for( ; ; ) {
	* }
	* 반 무한루프 : 무한루프는 아니지만 무한루프처럼 무수히 많이
	*			    실행하는 현상
	* for(int i=1; i<=10; i--){
	* }
	* 한번도 실행 안됨
	* for(int i=1; i>=10; i++){
	* }
	*  - 반복문 초기화 부분에 변수를 선언하면 해당 변수는
	*    반복문안에서만 사용할 수 있다.
	*/
	for (int i = 1; i <= 5; i++) {
		printf("Hello wolrd\n");
	}
	//에러 발생 : i는 반복문안에서 선언해서 거기에서만 사용 가능
	//printf("%d\n", i);
	
	return 0;
}