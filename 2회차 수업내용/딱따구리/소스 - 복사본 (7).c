#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//- 지역 변수 앞에 const를 붙이면 상수가 되고,
//- 매개 변수 중 포인터 변수 앞에 const를 붙이면 해당 함수안에서 
//  해당 포인터 변수를 상수취급한다.
void printArray(const int* arr, int size) {
	for(int i = 0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[10] = { 1,2,3,4,5 };
	printArray(arr, 10);
	printArray(arr, 10);
	return 0;
}