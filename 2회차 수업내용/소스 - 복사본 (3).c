#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 
	* printf : 정형화된 문자열을 콘솔에 출력
	* printf("서식문자",변수명);
	* - 서식문자는 네모칸이라고 생각
	* - 서식문자 갯수만큼 ,변수명도 갯수만큼 나와야함
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
	* - printf에서 소수점 아래자리 조절하는 방법
	*   - %와 f사이에 .숫자를 입력하면 숫자만큼 소수점 자리가 결정
	*   - 기본 소수점 자리는 6자리
	*/
	printf("nums1 = %.2f, num2 = %.2f\n", nums1, nums2);
	printf("nums1 = %.8f, num2 = %.8f\n", nums1, nums2);
	/* 
	* - printf에서 정수형 자리 조절하는 방법
	*   - %와 d사이에 숫자를 입력하면 해당하는 자리만큼 공간을 할당한
	*     뒤 오른쪽 정렬은 한다
	*   - 숫자앞에 0을 넣으면 빈 공간을 0으로 채움
	*/
	printf("num = %d!!!!\n", num);
	printf("num = %5d!!!!\n", num);
	printf("num = %1d!!!!\n", num);
	printf("num = %05d!!!!\n", num);
	printf("num = %-5d!!!!\n", num);
	return 0;
}