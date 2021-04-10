#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"

int main() {
	/* 
	* �л����� ���α׷�
	* - ��� ����
	* - ��� ����
	* - �л� ���� �Է�
	*   - �̸�, �г�, ��, ��ȣ, ����, ����, ���� ������ �Է�
	*   - ������ �г⿡ ���� �������� �ʰ� �׳� �� �б⸸ ����
	*     �Ѵٰ� ����
	*   - �Է��� �г�, ��, ��ȣ�� ��ġ�ϴ� �л��� �ִ� ���
	*     �ش� �л� ������ �߰����� ����
	* - �л� ���� ���
	*   - �л� �̸�, �г�, ��, ��ȣ, ����, ����, ���� ������ ���
	*   - ������� �߰��� ��� �л� ������ ���
	* - �л� ���� ����
	*   - �л� ������ �����ϱ� ���� �г�, ��, ��ȣ�� �˻��Ͽ�
	*     �л� ������ ������ �̸�, ����, ����, ���� ������ ����
	* - �л� ���� ����
	*   - �л� ������ �����ϱ� ���� �г�, ��, ��ȣ�� �˻��Ͽ�
	*     �л� ������ ������ ����
	*   - �����ϱ��� �������θ� �ѹ� �� Ȯ��
	* - ���α׷� ����
	* - ���� ���(���α׷� ���� ���� �ڵ� ����)
	* - �ҷ����� ���(���α׷� ���� �� �ٷ� �ڵ� �ҷ�����)
	* - �����ϴ� �л����� �ִ� 300��
	*/
	int menu = 0;
	STUDENT std[300];
	int count = 0;//���� ����� �л� ��

	STUDENT tmp;//�ӽ÷� �л� ������ ������ ����
	int index;
	char* filename = "student.txt";
	//�ҷ����� ��� loadFile
	count = loadFile(filename, std);
	do {
		printMenu();
		scanf("%d", &menu);
		switch (menu) {
		case 1:
			//�г� �� ��ȣ�� �Է� ����
			tmp = inputSearchInfo();
			//�迭���� �ش� ������ ��ġ�ϴ� �л��� �ִ��� Ȯ��
			index = searchStudent(std,count,tmp);
			
			//��ġ�ϴ� �л��� ������ ��ġ�ϴ� �л��� �ֽ��ϴٶ��
			//����ϰ�, ������ �̸�, ����,����,���� ������ �Է��� �迭��
			//����
			if (index != -1 ) {
				printf("��ġ�ϴ� �л��� �־ �߰��� �� �����ϴ�.\n");
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
			//�˻��� �л��� �г�, ��, ��ȣ�� �Է�
			tmp = inputSearchInfo();
			//�Է��� �л� ������ �ִ��� Ȯ��
			index = searchStudent(std, count, tmp);
			//������ ������ �̸�, ����, ����,����
			//�� �Է¹��� �� ����, ������ �л������� ���� ������ ��
			//�����ϴٶ�� ���
			if (index == -1) {
				printf("��ġ�ϴ� �л��� ��� ������ �� �����ϴ�.\n");
			}
			else {
				inputOtherInfo(&tmp);
				std[index] = tmp;
			}
			break;
		case 4:
			//������ �л� ������ �Է�
			tmp = inputSearchInfo();
			//�ش� �л� ������ �˻�
			index = searchStudent(std, count, tmp);
			//������ ����, ������ ������ �� ���ٰ� ���
			if (index != -1) {
				deleteStudent(std, &count, index);
			}
			else {
				printf("�ش� �л� ������ ��� ������ �� �����ϴ�.\n");
			}
			break;
		case 5:
			//���� ���
			saveFile(filename, std, count);
			printf("���α׷��� �����մϴ�.\n");
			break;
		default:
			printf("�߸��� �޴��Դϴ�.\n");
		}
	} while (menu != 5);
	
	return 0;
}
