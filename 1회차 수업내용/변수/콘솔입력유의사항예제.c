#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* ����1���� ���� 1���� �Է¹޾� �Է¹��� ������ ���ڸ� ����ϼ���.
    */
    //������ ������ ������ ������ ����
    int num = 0;
    char ch = 'A';
    //������ �Է�
    printf("���� �Է� : ");
    scanf("%d", &num);
    //���ڸ� �Է�
    printf("���� �Է� : ");
    scanf(" %c", &ch);
    //������ ���ڸ� ���
    printf("�Է¹��� �� : %c, %d\n", ch, num);
    return 0;
}
