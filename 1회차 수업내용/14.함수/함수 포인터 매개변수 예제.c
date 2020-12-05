#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* 기능 : 두 정수를 교환하는 함수
* 매개변수 : 두 정수 => int num1, int num2
* 리턴타입 : 없음 => void
* 함수이름 : swap1
*/
void swap1(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
	printf("swap1 : num1 = %d, num2 = %d\n", num1, num2);
}
void swap2(int* num1, int* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
	printf("swap1 : num1 = %d, num2 = %d\n", *num1, *num2);
}
/*
int* createArr(int size) {
	int* arr = (int*)malloc(sizeof(int) * size);
	return arr;
}
*/
int main() {
	int num1 = 3, num2 = 5;
	printf("main  : num1 = %d, num2 = %d\n", num1, num2);
	//swap1(num1, num2);
	swap2(&num1, &num2);
	printf("main  : num1 = %d, num2 = %d\n", num1, num2);
	
	/*
	int* arr = createArr(3);
	for (int i = 0; i < 3; i++) {
		arr[i] = i;
		printf("%d\n", arr[i]);
	}
	if(arr != NULL){
		free(arr);
	}
	*/
	return 0;
}