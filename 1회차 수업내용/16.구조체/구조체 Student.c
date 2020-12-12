#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//고등학교 학생 정보를 나타내는 구조체
typedef struct Stuent {
	char schoolName[31];
	int grade, class, num;
	char name[13];
}Student;

void printStudent(Student std) {
	printf("학교명 : %s\n", std.schoolName);
	printf("학년   : %d\n", std.grade);
	printf("학반   : %d\n", std.class);
	printf("번호   : %d\n", std.num);
	printf("이름   : %s\n", std.name);
}

int main() {
	/* 구조체 초기화는 멤버변수 선언 순서대로 초기화 한다 */
	Student std = { "레이고등학교",1,1,1,"홍길동" };
	printStudent(std);
	return 0;
}
