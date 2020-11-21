#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* 산술 연산자 : + - *(x) /(나누기) %(나머지, 모드)
    *  부호 연산자 : -
    *  나누기
    *   - 정수 / 정수 => 정수 : 소수점이 버려짐
    *   - 정수 / 실수 => 실수
    *   - 실수 / 정수 => 실수
    *   - 실수 / 실수 => 실수
    *  자료형변환 : 변수나 상수의 자료형을 일시적으로 변환
    *   - 변환시키고자 하는 변수나 상수 앞에 (자료형) 을 하면 해당
    *     자료형으로 형변환이 된다.
    *   - int num1 = (int)1.23; => 1.23 실수값이 정수값 1로 변환
    */
    int num1 = 5;
    int num2 = 3;
    double result = 0.0;
    result = num1 + num2;
    printf("%d + %d = %.2lf\n", num1, num2, result);
    result = num1 - num2;
    printf("%d - %d = %.2lf\n", num1, num2, result);
    result = num1 * num2;
    printf("%d * %d = %.2lf\n", num1, num2, result);
    result = (double)num1 / num2;
    printf("%d / %d = %.2lf\n", num1, num2, result);
    result = num1 % num2;
    printf("%d %% %d = %.2lf\n", num1, num2, result);
    /* A % B : A를 B로 나누었을 때 나머지 값
    * => 나머지 연산자는 주로 배수(홀짝), 약수 판별때 사용
    * => ~을 나누었을 때 나머지로 표현되면 나머지 연산자를 떠올려라
    */
    int num3 = -1;
    printf("-num3 = %d\n", -num3);

    return 0;
}
