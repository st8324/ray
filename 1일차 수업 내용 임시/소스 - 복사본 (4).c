#include <stdio.h>

int main() {
    int brotherAge = 25;
    int sisterAge = 27;
    printf("형의 나이 : %d, 누나의 나이 : %d\n", brotherAge, sisterAge);
    int num = 10;
    //서식문자에 맞지않은 값을 넣으면 원하는 결과가 나오지 않음
    printf("실수 : %lf\n",num);
    char op = '+';
    printf("문자 : %c\n", op);
    //문자를 정수로 출력하면 해당 문자의 아스키코드값이 나옴
    //c언어에서 char는 아스키코드표로 문자들이 정해져 있음
    printf("문자 : %d\n", op);
    char ch = 'A';
    printf("%c %c %c\n",ch,ch+1,ch+2);
    return 0;
}
