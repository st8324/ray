#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum Week {Sun, Mon, Tue, Wed, Tus, Fri, Sat};

int main() {
	/* 
	- ������ : ���� �ǹ̸� �ο��Ͽ� �����ϴ� �� 
	- ������ ����
	enum �������̸� {��1, ��2, ..��n};
	*/
	enum Week day = Sun;//0:�Ͽ���, 1:������, 2:ȭ����, 3: ������, 4:�����, 5:�ݿ���, 6:�����
	switch (day)
	{
	case Sun:	printf("������ �Ͽ���\n");	break;
	case Mon:	printf("������ ������\n");	break;
	case Tue:	printf("������ ȭ����\n");	break;
	case Wed:	printf("������ ������\n");	break;
	case Tus:	printf("������ �����\n");	break;
	case Fri:	printf("������ �ݿ���\n");	break;
	case Sat:	printf("������ �����\n");	break;
	}
	return 0;
}
