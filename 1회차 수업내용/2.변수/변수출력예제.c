#include <stdio.h>

int main() {
    int brotherAge = 25;
    int sisterAge = 27;
    printf("���� ���� : %d, ������ ���� : %d\n", brotherAge, sisterAge);
    int num = 10;
    //���Ĺ��ڿ� �������� ���� ������ ���ϴ� ����� ������ ����
    printf("�Ǽ� : %lf\n",num);
    char op = '+';
    printf("���� : %c\n", op);
    //���ڸ� ������ ����ϸ� �ش� ������ �ƽ�Ű�ڵ尪�� ����
    //c���� char�� �ƽ�Ű�ڵ�ǥ�� ���ڵ��� ������ ����
    printf("���� : %d\n", op);
    char ch = 'A';
    printf("%c %c %c\n",ch,ch+1,ch+2);
    return 0;
}
