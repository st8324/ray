#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* while��
	* while(���ǽ�){
	*	���๮;
	* }
	* 
	* �ʱ�ȭ;
	* while(���ǽ�){
	*	���๮;
	*	������;
	* }
	* - for������ �ۼ��� �ڵ�� while������ �ۼ��� �� �ִ�.(�ݴ뵵 ����)
	* - �ַ� ���� �����ϰ� �����ϴ� ���� for���� ���� ����.
	* - �ַ� �ݺ�Ƚ���� �������ִ� ��� for���� ���� ����.
	* - for���� ���ǽ��� �������������� while���� ���ǽ��� ������ �� ����
	*/
	int i;
	i = 1;
	while (i <= 5) {
		//i�� 1,2,3,4,5�϶� ���
		printf("Hello world!\n");
		i++;
	}
	printf("============\n");
	i = 1;
	while (i++ <= 5) {
		//i�� 2,3,4,5,6�� �� ���
		printf("Hello world!\n");
	}
	i = 1;
	while (i <= 9) {
		printf("7 x %d = %d\n", i, 7 * i);
		i++;
	}
	char ch = 'a';
	while (ch != 'z') {
		printf("���ڸ� �Է��ϼ���(�����Ϸ��� z�� �Է�) : ");
		scanf(" %c", &ch);
	}
	return 0;
}