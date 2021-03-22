#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	*  학생의 성적을 저장하는 배열 score에 30, 40, 55, 100, 90이
	*  저장되어 있다. 이때 저장된 학생 성적의 총점과 평균을 구하는
	*  코드를 작성하세요.
	*/
	int score[5] = { 30, 40, 55, 100, 90 };
	int size = sizeof(score) / sizeof(int);
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += score[i];
	}
	printf("총합 : %d\n", sum);
	printf("평균 : %.2lf", (double)sum / size);
	return 0;
}