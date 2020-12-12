#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//고등학교 학생 정보를 나타내는 구조체
typedef struct Stuent {
	char schoolName[31];
	int grade, class, num;
	char name[13];
}Student;

typedef struct Stuent1 {
	char schoolName[31];
	char name[13];
	int grade, class, num;
}Student1;

void printStudent(Student std);
Student inputStudent();

int main() {
	/* 구조체 초기화는 멤버변수 선언 순서대로 초기화 한다 */
	Student std = { "레이고등학교",1,1,1,"홍길동" };
	printStudent(std);
	/*
	* - 구조체는 4바이트 단위로 저장하기 때문에 구조체의
	*   멤버 변수 순서에 따라 구조체의 크기가 달라질 수 있다*/
	printf("Student구조체 크기 : %d\n", sizeof(Student));
	printf("Student1구조체 크기 : %d\n", sizeof(Student1));
	Student arr[5] = {
		{ "레이고등학교",1,1,1,"홍길동" },
		{ "레이고등학교",1,1,2,"임꺽정" },
		{ "레이고등학교",1,1,3,"유관순" },
		{ "레이고등학교",1,1,4,"이순신" },
		{ "레이고등학교",1,1,5,"김영희" }
	};
	//0번지에 있는 학생 정보 복사
	Student tmp = arr[0];
	for (int i = 0; i < 5; i++) {
		arr[i].grade = 2;
		printStudent(arr[i]);
	}
	//0번지에 있는 학생의 정보를 변경해도 이전 정보인 tmp는 변경되지 않음
	printStudent(tmp);
	tmp = inputStudent();
	printStudent(tmp);
	return 0;
}
Student inputStudent() {
	Student tmp;
	printf("--학생 정보를 입력하세요--\n");
	printf("학교 : ");
	scanf("%s",tmp.schoolName);
	printf("학년 : ");
	scanf("%d", &tmp.grade);
	printf("학반 : ");
	scanf("%d", &tmp.class);
	printf("번호 : ");
	scanf("%d", &tmp.num);
	printf("이름 : ");
	scanf("%s", tmp.name);
	return tmp;
}
void printStudent(Student std) {
	printf("학교명 : %s\n", std.schoolName);
	printf("학년   : %d\n", std.grade);
	printf("학반   : %d\n", std.class);
	printf("번호   : %d\n", std.num);
	printf("이름   : %s\n", std.name);
}