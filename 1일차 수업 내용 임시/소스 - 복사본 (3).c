#include <stdio.h>

int main() {
    printf("Hello\n"); 
    printf("4\n"); //4라는 문자열을 출력
    /* 서식문자(p.44~45)
    *  - %d : 정수를 10진수로 표현
    *  - %f : 실수(부동소수점) - float
    *  - %lf: 실수 - double
    *  - %c : 문자
    *  - %s : 문자열
    * \n : 엔터
    * printf는 서식문자 갯수만큼 ,값이 나와야한다.
    */
    printf("%d 입니다\n", 4);
    printf("%4d\n",10);
    printf("%04d\n",9);
    printf("%4d\n",1000);
    printf("%-04d안녕\n", 9);
    printf("%d안녕\n", 9);
    printf("내 형과 누나의 나이는 각각 %d와 %d입니다.\n",25,27);
    //소수점 8째자리까지 출력
    printf("%11.8lf\n", 211.23456789);
    return 0;
}
