#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int num3 = 20;
void print() {
	int num2 = 20;
	for (int k = 0; k < 3; k++) {
		printf("%d\n", num2);
	}
}
int main() {
	int num = 10;
	for (int i = 0; i < 3; i++) {
		printf("%d\n", num);
	}
	print();
	//변수 num(11~17),i(12~14),num2(5~8), k(6~8), num3(3~끝까지)의 범위는?
	return 0;
}