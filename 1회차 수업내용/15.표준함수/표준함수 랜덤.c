#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	/* 
	* - rand() : 랜덤한 정수를 만드는 함수(stdlib.h)
	*/
	srand(time(NULL));
	int min = 1, max = 10;
	for (int i = 0; i < 5; i++) {
		/* 
		* A % 10 : 0~9
		* A % (max - min + 1) : 0~(max-min) 
		* A % (max - min + 1) + min : (0+min) ~ (max-min+min)=>min~max
		*/
		int r = rand() % (max - min + 1) + min;
		printf("%d\n",r);
	}
	return 0;
}
