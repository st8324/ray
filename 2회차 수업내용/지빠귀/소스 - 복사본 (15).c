#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* - continue(p.96)
	*   - Ư�� ��ġ�� �ǳ� ��
	*   - for�������� ������ ��ġ��, while�������� ���ǽ�����
	*     �̵�
	*   - if���� ���� ����
	* - ¦�� ����ϴ� ���� : Ȧ���� �����ϰ� ���
	*/
	int i = 0;
	for (i = 1 ; i <= 100 ; i++ ) {
		if (i % 2 == 1) {
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}