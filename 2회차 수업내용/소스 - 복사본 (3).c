#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* printf : ����ȭ�� ���ڿ��� �ֿܼ� ���
	* printf("���Ĺ���",������);
	* - ���Ĺ��ڴ� �׸�ĭ�̶�� ����
	* - ���Ĺ��� ������ŭ ,������ ������ŭ ���;���
	*/
	int num = 15;
	printf("num = %d\n",num);
	char ch1 = 'a', ch2 = 97;
	printf("ch1 = %c, ch2 = %c\n", ch1 ,ch2);
	printf("ch1 = %d, ch2 = %d\n", ch1, ch2);
	float nums1 = 3.12345678;
	double nums2 = 3.12345678;
	printf("nums1 = %f, num2 = %f\n", nums1, nums2);
	/* 
	* - printf���� �Ҽ��� �Ʒ��ڸ� �����ϴ� ���
	*   - %�� f���̿� .���ڸ� �Է��ϸ� ���ڸ�ŭ �Ҽ��� �ڸ��� ����
	*   - �⺻ �Ҽ��� �ڸ��� 6�ڸ�
	*/
	printf("nums1 = %.2f, num2 = %.2f\n", nums1, nums2);
	printf("nums1 = %.8f, num2 = %.8f\n", nums1, nums2);
	/* 
	* - printf���� ������ �ڸ� �����ϴ� ���
	*   - %�� d���̿� ���ڸ� �Է��ϸ� �ش��ϴ� �ڸ���ŭ ������ �Ҵ���
	*     �� ������ ������ �Ѵ�
	*   - ���ھտ� 0�� ������ �� ������ 0���� ä��
	*/
	printf("num = %d!!!!\n", num);
	printf("num = %5d!!!!\n", num);
	printf("num = %1d!!!!\n", num);
	printf("num = %05d!!!!\n", num);
	printf("num = %-5d!!!!\n", num);
	return 0;
}