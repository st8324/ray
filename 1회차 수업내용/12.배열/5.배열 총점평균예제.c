#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	* - 5명 학생의 국어 점수를 입력받아 출력하는 예제(0~100) 
	* - 5명 학생의 총점과 평균을 구하는 예제
	*/
	int korScore[5] = { 0 };
	int sum = 0;
	double avg = 0.0;
	for (int i = 0; i < 5; i++) {
		printf("학생%d의 성적 : ", i + 1);
		scanf("%d", korScore + i);
		sum += korScore[i];
	}
	avg = sum / 5.0;//5는 안되고 5.0으로 해야함
	printf("총점 : %d\n", sum);
	printf("평균 : %.2lf\n", avg);
	return 0;
}