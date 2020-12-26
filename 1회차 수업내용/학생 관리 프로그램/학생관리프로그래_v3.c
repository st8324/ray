#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <Windows.h>
#include "student.h"

int main() {
	Menu menu = 0;
	int maxCount = 300;
	int nowCount = 0;
	//학생 배열
	Student *std = (Student *)malloc(sizeof(Student) * maxCount);
	char* fileName = "student.txt";
	//불러오기 기능
	std = loadFile(fileName, &nowCount, &maxCount);
	
	do {
		printMenu();
		scanf("%d", &menu);
		Student tmp;
		switch (menu)
		{
		case ADD:	std = insertStuent(std, &nowCount, &maxCount);	break;
		case MOD:	
			tmp = inputSearchStudent("---수정할 학생정보 입력---\n");
			if (!modifyStudent(std, nowCount, tmp)) {
				printf("-------------------------\n");
				printf("해당 학생정보가 없습니다.\n");
				printf("-------------------------\n");
			}
			break;
		case DEL:	
			printf("삭제기능\n");	
			break;
		case SEA:	printStudent(std, nowCount);					break;
		case ESC:	break;
		default:	printf("잘못된기능\n");	break;
		}
		printf("아무키나 누르세요....");
		getchar(); //위에서 메뉴 선택후 입력버퍼에 남은 엔터를 처리하기 위해
		getchar();
		system("cls");
	} while (menu != ESC);
	//저장기능
	saveFile(fileName, std, nowCount);
	if (std != NULL) {
		free(std);
	}
	printf("\n-------------------------\n");
	printf("프로그램을 종료합니다....");
	printf("\n-------------------------\n");
	return 0;
}
