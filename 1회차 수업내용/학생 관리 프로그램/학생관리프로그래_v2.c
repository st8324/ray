#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <Windows.h>
#include "student.h"

int main() {
	Menu menu = 0;
	int maxCount = 2;
	int nowCount = 0;
	//학생 배열
	Student *std = (Student *)malloc(sizeof(Student) * maxCount);
	//불러오기 기능

	do {
		printMenu();
		scanf("%d", &menu);
		Student tmp;
		switch (menu)
		{
		case ADD:	
			std = insertStuent(std, &nowCount, &maxCount);
			break;
		case MOD:	printf("수정기능\n");	break;
		case DEL:	printf("삭제기능\n");	break;
		case SEA:	
			for (int i = 0; i < nowCount; i++) {
				printf("이름 : %s\n", std[i].name);
			}
			break;
		case ESC:	printf("종료기능\n");	break;
		default:	printf("잘못된기능\n");	break;
		}
		printf("아무키나 누르세요....");
		getchar(); //위에서 메뉴 선택후 입력버퍼에 남은 엔터를 처리하기 위해
		getchar();
		system("cls");
	} while (menu != ESC);
	//저장기능
	if (std != NULL) {
		free(std);
	}
	return 0;
}
