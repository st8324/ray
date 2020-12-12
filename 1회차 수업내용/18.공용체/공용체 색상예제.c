#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
- 색상 공용체로 rgb값을 이용하여 색상을 지정하거나
  색상 코드를 이용하여 색상을 지정할 수 있다.
- 흰색 : rgb(255,255,255), #ffffff
*/
typedef union Color {
	char rgb[4];
	int code;
}Color;

int main() {
	/* 
	* - 공용체 : 한 공간을 여러 변수들이 사용하는 것
	*/
	Color white;
	white.rgb[0] = 255;//파랑 값
	white.rgb[1] = 0;//녹색 값
	white.rgb[2] = 0;//빨강 값
	printf("흰색 색상 코드 : %x\n", white.code);
	return 0;
}
