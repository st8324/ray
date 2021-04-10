#pragma once
typedef struct STUDENT {
	int grade;	//�г�
	int clas;	//��
	int num;		//��ȣ
	double kor;	//���� ����
	double eng;	//���� ����
	double math;	//���� ����
	char name[21];	//�̸�
}STUDENT;
/* ��� : �޴��� �ֿܼ� ����ϴ� �Լ�
*  �Ű����� : ����
*  ����Ÿ�� : ���� =>void
*  �Լ��̸� : printMenu
*/
void printMenu();
/* ��� : �л� �迭���� �л� ������ �ִ��� ������ Ȯ���ϴ� �Լ�
*  �Ű����� : �л��迭, ����� �л� ��, Ȯ���� �л�����
*             => const STUDENT*std, int count, STDUENT tmp
*  ����Ÿ�� : �ִ���(0�̻�) ������(-1) => ���� => int
*  �Լ��̸� : searchStudent
*/
int searchStudent(const STUDENT* std, int count, STUDENT tmp);
/* ��� : �л��˻�����(�г�, ��, ��ȣ)�� �Է¹޾� �Է¹���
*         �л������� �����ִ� �Լ�
*  �Ű����� : ����
*  ����Ÿ�� : �г�,��,��ȣ�� ����� �л����� => STUDENT
*  �Լ��̸� : inputSearchInfo
*/
STUDENT inputSearchInfo();
/* ��� : �г�,��,��ȣ�� ����ִ� �л������� �־����� �ش� �л�
*         ������ �̸�, ����, ����, ���� ������ �߰��ϴ� �Լ�
*  �Ű����� : �г�,��,��ȣ�� ����ִ� �л������� �ּ�(�л� ������ ����)
*             => STUDENT* tmp
*  ����Ÿ�� : ���� => void
*  �Լ��̸� : inputOtherInfo
*/
void inputOtherInfo(STUDENT* tmp);
/* ��� : ����� �л� �������� ����ϴ� �Լ�
*  �Ű����� : �л� ������ => �л� �迭 => STUDENT *std, int count
*  ����Ÿ�� : ���� => void
*  �Լ��̸� : printStudent
*/
void printStudent(STUDENT* std, int count);
/* ��� : �л� �迭���� ���ϴ� ������ �ִ� ������ �����ϴ� �Լ�
*  �Ű����� : �л� �迭=> STUDENT *std, int *count, ������ ��ġ=>int index
*  ����Ÿ�� : ���� => void
*  �Լ��̸� : deleteStudent
*/
void deleteStudent(STUDENT* std, int* count, int index);
/* ��� : ���ϸ��� �־����� �־��� ���Ͽ��� �л� ������ 
*         �о�� �л� �迭�� ������ ��, ����� �л����� ��ȯ�ϴ� 
*         �Լ�
*  �Ű����� : ���ϸ�=>char*filename, �л� �迭 => STUDENT*std
*  ����Ÿ�� : ����� �л���=>����=>int
*  �Լ��̸� : loadFile
*/
int loadFile(char* filename, STUDENT* std);

/* ��� : �л� �������� ���Ͽ� �����ϴ� ���
*  �Ű����� : ���ϸ�=>char * filename 
*             �л������� => STUDENT *std, int count
*  ����Ÿ�� : ����=> void
*  �Լ��̸� : saveFile
*/
void saveFile(char* filename, STUDENT* std, int count);