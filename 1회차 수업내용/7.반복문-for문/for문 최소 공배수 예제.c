#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 두 정수 num1과 num2의 최소 공배수를 구하는 예제
	* 10의 배수 : 10 20 30 40 50 60 70 80 90 100 110 120 130 140 150 ...
	* 15의 배수 : 15 30 45 60 75 90 105 120 135 150 ...
	* 10과 15의 공배수 : 30 60 90 120 150 ...
	* 10과 15의 최소 공배수 : 30
	* - 두 수의 최소 공배수는 적어도 두 수의 곱보다는 작거나 같다
	* - 반복횟수 : i는 num1*num2부터 1까지 1씩 감소
	* - 규칙성 : i가 num1의 배수이고, num2의 배수이면 i를 lcm 저장
	*		=>  i를 num1으로 (나누었을 때 나머지)가 0과 (같)(고)
	*			i를 num2로 (나누었을 때 나머지)가 0과 (같다)(면)
	*			i를 lcm 저장
	*		=>	i num1 % 0 == && i num2 % 0 == if
	*			i lcm =
	*		=>	if(i % num1 == 0 && i % num2 == 0)
	*			lcm = i;
	* - 반복문 종료 후 : lcm 출력
	*/
	int num1 = 13, num2 = 15002;
	int i, lcm = 1;
	int cnt = 0;
	for (i = num1 * num2, cnt = 0; i >= 1; i--, cnt++) {
		if (i % num1 == 0 && i % num2 == 0) {
			lcm = i;
		}
	}
	printf("%d와 %d의 최소 공배수 : %d\n", num1, num2, lcm);
	printf("방법1 횟수 : %d\n", cnt);
	//방법2
	for (i = num1 * num2, cnt = 0; i >= num1; i -= num1, cnt++) {
		if (i % num2 == 0) {
			lcm = i;
		}
	}
	printf("%d와 %d의 최소 공배수 : %d\n", num1, num2, lcm);
	printf("방법2 횟수 : %d\n", cnt);
	//방법3
	int tmp1 = num1, tmp2 = num2;
	if (num1 < num2) {
		tmp1 = num2;
		tmp2 = num1;
	}
	for (i = num1 * num2, cnt = 0; i >= tmp1; i -= tmp1, cnt++) {
		if (i % tmp2 == 0) {
			lcm = i;
		}
	}
	printf("%d와 %d의 최소 공배수 : %d\n", num1, num2, lcm);
	printf("방법3 횟수 : %d\n", cnt);
	return 0;
}