#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* scanf : ����ȭ�� ���� �ֿܼ��� �Է¹޾� ������ �����ϴ� �Լ�(���)
    * �׷��� visual studio������ scanf�� �׳� ���� ������ �߻�
    * 1. 1��° �ٿ� #define _CRT_SECURE_NO_WARNINGS�� �Է�
    * 2. scanf_s�� ���
    */
    int age = 0;
    printf("���̸� �Է��ϼ��� : ");
    //�����տ� &�����ڴ� �ּҿ�����
    scanf("%d",&age);
    //scanf_s("%d", &age);
    printf("�Է��� ���� : %d\n", age);
    
    return 0;
}
