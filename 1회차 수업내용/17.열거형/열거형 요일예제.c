#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum Week {Sun, Mon, Tue, Wed, Tus, Fri, Sat};

int main() {
	/* 
	- 열거형 : 값에 의미를 부여하여 나열하는 것 
	- 열거형 정의
	enum 열거형이름 {값1, 값2, ..값n};
	*/
	enum Week day = Sun;//0:일요일, 1:월요일, 2:화요일, 3: 수요일, 4:목요일, 5:금요일, 6:토요일
	switch (day)
	{
	case Sun:	printf("오늘은 일요일\n");	break;
	case Mon:	printf("오늘은 월요일\n");	break;
	case Tue:	printf("오늘은 화요일\n");	break;
	case Wed:	printf("오늘은 수요일\n");	break;
	case Tus:	printf("오늘은 목요일\n");	break;
	case Fri:	printf("오늘은 금요일\n");	break;
	case Sat:	printf("오늘은 토요일\n");	break;
	}
	return 0;
}
