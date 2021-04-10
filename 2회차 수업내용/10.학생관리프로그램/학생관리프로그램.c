#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"

int main() {
	/* 
	* 학생관리 프로그램
	* - 기능 정리
	* - 기능 범위
	* - 학생 정보 입력
	*   - 이름, 학년, 반, 번호, 국어, 영어, 수학 성적을 입력
	*   - 성적은 학년에 따라 관리하지 않고 그냥 한 학기만 관리
	*     한다고 가정
	*   - 입력한 학년, 반, 번호와 일치하는 학생이 있는 경우
	*     해당 학생 정보를 추가하지 않음
	* - 학생 정보 출력
	*   - 학생 이름, 학년, 반, 번호, 국어, 영어, 수학 성적을 출력
	*   - 현재까지 추가된 모든 학생 정보를 출력
	* - 학생 정보 수정
	*   - 학생 정보를 수정하기 위해 학년, 반, 번호를 검색하여
	*     학생 정보가 있으면 이름, 국어, 영어, 수학 성적을 수정
	* - 학생 정보 삭제
	*   - 학생 정보를 수정하기 위해 학년, 반, 번호를 검색하여
	*     학생 정보가 있으면 삭제
	*   - 삭제하기전 삭제여부를 한번 더 확인
	* - 프로그램 종료
	* - 저장 기능(프로그램 종료 전에 자동 저장)
	* - 불러오기 기능(프로그램 실행 후 바로 자동 불러오기)
	* - 관리하는 학생수는 최대 300명
	*/
	int menu = 0;
	STUDENT std[300];
	int count = 0;//현재 저장된 학생 수

	STUDENT tmp;//임시로 학생 정보를 저장할 공간
	int index;
	char* filename = "student.txt";
	//불러오기 기능 loadFile
	count = loadFile(filename, std);
	do {
		printMenu();
		scanf("%d", &menu);
		switch (menu) {
		case 1:
			//학년 반 번호를 입력 받음
			tmp = inputSearchInfo();
			//배열에서 해당 정보와 일치하는 학생이 있는지 확인
			index = searchStudent(std,count,tmp);
			
			//일치하는 학생이 있으면 일치하는 학생이 있습니다라고
			//출력하고, 없으면 이름, 국어,영어,수학 성적을 입력후 배열에
			//저장
			if (index != -1 ) {
				printf("일치하는 학생이 있어서 추가할 수 없습니다.\n");
			}
			else {
				inputOtherInfo(&tmp);
				std[count++] = tmp;
			}
			break;
		case 2:
			printStudent(std, count);
			break;
		case 3:
			//검색할 학생의 학년, 반, 번호를 입력
			tmp = inputSearchInfo();
			//입력한 학생 정보가 있는지 확인
			index = searchStudent(std, count, tmp);
			//있으면 수정할 이름, 국어, 영어,수학
			//을 입력받은 후 수정, 없으면 학생정보가 없어 수정할 수
			//없습니다라고 출력
			if (index == -1) {
				printf("일치하는 학생이 없어서 수정할 수 없습니다.\n");
			}
			else {
				inputOtherInfo(&tmp);
				std[index] = tmp;
			}
			break;
		case 4:
			//삭제할 학생 정보를 입력
			tmp = inputSearchInfo();
			//해당 학생 정보를 검색
			index = searchStudent(std, count, tmp);
			//있으면 삭제, 없으면 삭제할 수 없다고 출력
			if (index != -1) {
				deleteStudent(std, &count, index);
			}
			else {
				printf("해당 학생 정보가 없어서 삭제할 수 없습니다.\n");
			}
			break;
		case 5:
			//저장 기능
			saveFile(filename, std, count);
			printf("프로그램을 종료합니다.\n");
			break;
		default:
			printf("잘못된 메뉴입니다.\n");
		}
	} while (menu != 5);
	
	return 0;
}
