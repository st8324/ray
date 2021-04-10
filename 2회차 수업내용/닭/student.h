#pragma once
typedef struct STUDENT {
	int grade;	//학년
	int clas;	//반
	int num;		//번호
	double kor;	//국어 성적
	double eng;	//영어 성적
	double math;	//수학 성적
	char name[21];	//이름
}STUDENT;
/* 기능 : 메뉴를 콘솔에 출력하는 함수
*  매개변수 : 없음
*  리턴타입 : 없음 =>void
*  함수이름 : printMenu
*/
void printMenu();
/* 기능 : 학생 배열에서 학생 정보가 있는지 없는지 확인하는 함수
*  매개변수 : 학생배열, 저장된 학생 수, 확인할 학생정보
*             => const STUDENT*std, int count, STDUENT tmp
*  리턴타입 : 있는지(0이상) 없는지(-1) => 정수 => int
*  함수이름 : searchStudent
*/
int searchStudent(const STUDENT* std, int count, STUDENT tmp);
/* 기능 : 학생검색정보(학년, 반, 번호)를 입력받아 입력받은
*         학생정보를 돌려주는 함수
*  매개변수 : 없음
*  리턴타입 : 학년,반,번호가 저장된 학생정보 => STUDENT
*  함수이름 : inputSearchInfo
*/
STUDENT inputSearchInfo();
/* 기능 : 학년,반,번호가 들어있는 학생정보가 주어지면 해당 학생
*         정보에 이름, 국어, 영어, 수학 정보를 추가하는 함수
*  매개변수 : 학년,반,번호가 들어있는 학생정보의 주소(학생 정보를 수정)
*             => STUDENT* tmp
*  리턴타입 : 없음 => void
*  함수이름 : inputOtherInfo
*/
void inputOtherInfo(STUDENT* tmp);
/* 기능 : 저장된 학생 정보들을 출력하는 함수
*  매개변수 : 학생 정보들 => 학생 배열 => STUDENT *std, int count
*  리턴타입 : 없음 => void
*  함수이름 : printStudent
*/
void printStudent(STUDENT* std, int count);
/* 기능 : 학생 배열에서 원하는 번지에 있는 정보를 삭제하는 함수
*  매개변수 : 학생 배열=> STUDENT *std, int *count, 삭제할 위치=>int index
*  리턴타입 : 없음 => void
*  함수이름 : deleteStudent
*/
void deleteStudent(STUDENT* std, int* count, int index);
/* 기능 : 파일명이 주어지면 주어진 파일에서 학생 정보를 
*         읽어와 학생 배열에 저장한 후, 저장된 학생수를 반환하는 
*         함수
*  매개변수 : 파일명=>char*filename, 학생 배열 => STUDENT*std
*  리턴타입 : 저장된 학생수=>정수=>int
*  함수이름 : loadFile
*/
int loadFile(char* filename, STUDENT* std);

/* 기능 : 학생 정보들을 파일에 저장하는 기능
*  매개변수 : 파일명=>char * filename 
*             학생정보들 => STUDENT *std, int count
*  리턴타입 : 없음=> void
*  함수이름 : saveFile
*/
void saveFile(char* filename, STUDENT* std, int count);