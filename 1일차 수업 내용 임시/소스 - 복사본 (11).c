#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* 증감 연산자 : ++, --
    *  - 최종적으로 변수의 값이 1증가/1감소
    *  - 증감연산자 위치에 따라서 동작 방식이 달라진다.
    *  - 전위형 : ++변수명, --변수명
    *             증가를 하고 동작을 한다.
    *  - 후위형 : 변수명++, 변수명--
    *             동작을 하고 증가를 한다.
    *  - 증감연산자를 사용할 때 팁
    *   - 전위형과 후위형이 헷갈리는 경우, 동작과 증감을 같이하지 말고
    *     동작과 증감을 따로 해라
    */
    int num1 = 10;
    int num2 = 10;
    
    printf("증가전 num1 = %d, num2 = %d\n", num1, num2);
    printf("증가중 num1 = %d, num2 = %d\n", ++num1, num2++);
    printf("증가후 num1 = %d, num2 = %d\n", num1, num2);
    /*
    int num3 = num1++;
    int num4 = ++num2;
    printf("증가후 num3 = %d, num4 = %d\n", num3, num4);
    */
    int num3 = num1;
    ++num1;
    ++num2;
    int num4 = num2;
    printf("증가후 num3 = %d, num4 = %d\n", num3, num4);
    return 0;
}
