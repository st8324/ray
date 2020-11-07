#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* scanf : 정형화된 값을 콘솔에서 입력받아 변수에 저장하는 함수(기능)
    * 그런데 visual studio에서는 scanf를 그냥 쓰면 에러가 발생
    * 1. 1번째 줄에 #define _CRT_SECURE_NO_WARNINGS를 입력
    * 2. scanf_s를 사용
    */
    int age = 0;
    printf("나이를 입력하세요 : ");
    //변수앞에 &연산자는 주소연산자
    scanf("%d",&age);
    //scanf_s("%d", &age);
    printf("입력한 나이 : %d\n", age);
    
    return 0;
}
