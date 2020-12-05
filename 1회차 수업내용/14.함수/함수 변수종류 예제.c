#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* - ��������(p.198)
*   - �Ϻ� ���������� ����ϴ� ����
*	- ����� ��ġ�� �������� {}���� ������
*	- ������ ����� ������ �������.
* - ��������(p.201)
*	- �Լ��� ������� ���� ��ü���� ����ϴ� ����
*	- ������� �ʴ� ���� ����.
*	- �Լ� �ۿ� ����
*	- ���α׷��� ����Ǹ� ������ �������.
* - ��������(p.204)
*	- ����Ǹ� ���α׷��� ����� �� �������.
*	- ���� ����� �ڷ��� �տ� static�� ���δ�.
* - �ܺ� ����(p.207)
*	- ���� ������Ʈ�ȿ� �ִ� �ٸ� �����̳� ��� ���Ͽ� �ִ� ���� ������ �����ö� ���
*	- ���� ����� �ڷ��� �տ� extern�� ����
* - ���������� ���������� �̸��� ���� ��� ���������� �Ǻ��Ѵ�.
*/
int globalNum = 20;
//���� ������Ʈ��, �ٸ� ���Ͽ� �ִ� externNum�̶�� ������ ������
//�Ʒ� �ܺ� ������ �׽�Ʈ�Ϸ��� ���� ������Ʈ���� int externNum = 20;�� ������ �� 
//�׽�Ʈ �ؾ���.
//extern int externNum;
void localAndGlobalTest() {
	int localNum = 11;
	printf("test : num = %d\n", localNum);
	printf("test : globalNum(����) = %d\n", globalNum);
	int globalNum = 100;
	//�������� globalNum�� ��µǾ� 100�� ��µ�
	printf("test : globalNum(����) = %d\n", globalNum);
}
void localAndStaticTest() {
	/*
	* - ���� ������ �Լ��� ȣ��Ǹ� ������ �����ϰ� �Լ��� ����Ǹ� �������.
	* - ���� ������ ȣ��Ǹ� �ٽ� ������ �����ϱ� ������ ������ ������ ���� ���
	* - ���� ������ �Լ��� ó�� ȣ��Ǹ� ������ �����ϰ�, �Լ��� ����ǵ� ������� �ʴ´�.
	* - ���� ������ ȣ��Ǹ� ������ ���� �������� �ʰ� �̾ �۾��ϱ� ������ ������
	*	�ٸ� ���� ���
	*/
	static int num1 = 10;
	int num2 = 10;
	for (int i = 0; i < 5; i++) {
		printf("static : %d, local : %d\n", num1++, num2++);
	}
}
int main() {
	int localNum = 12;
	printf("main : num = %d\n", localNum);
	printf("main : globalNum = %d\n", globalNum++);
	localAndGlobalTest();
	//���� ���� i�� �ݺ����ȿ����� ��밡���ϰ�, ����� i�� �������
	for (int i = 0; i < 5; i++) {
		printf("%d ", i);
	}
	printf("\n");
	localAndStaticTest();
	localAndStaticTest();
//	printf("externNum = %d\n", externNum);
	return 0;
}