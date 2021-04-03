#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int min = 1, max = 10;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		int random = (int)((double)rand() / RAND_MAX *
			(max - min + 1 ) + min);
		//int random = rand() % (max - min + 1) + min;
		//A % 10 : 0~9
		//A % (max - min + 1) : 0 ~ max - min
		//A % (max - min + 1)+min : min ~ max
		printf("%d\n", random);
	}
	/*
	* 0 <= rand() < RAND_MAX
	* 0 <= (double)rand() / RAND_MAX < 1
	* 0 <= (double)rand() / RAND_MAX * (max - min + 1) < max - min +1
	* min <= (double)rand() / RAND_MAX * (max - min + 1) + min < max +1
	*/
	return 0;
}