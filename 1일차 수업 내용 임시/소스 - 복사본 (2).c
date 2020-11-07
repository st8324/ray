#include <stdio.h>

int main() {
    //자료형 변수명;
    //사과 5개를 저장하기 위한 변수를 선언하세요.
    //appleCount : 선언과 동시에 초기화
    int appleCount = 5;
    //appleCount2: 선언하고, 초기화
    int appleCount2;
    appleCount2 = 5;
    //수학에서 사용하는 pi의 값을 저장하기 위한 변수를 선언하세요.
    double pi = 3.141592;
    //학점이 A,B,C,D,F일 때 학점을 저장하기 위한 변수를 선언하세요.
    char score = 'A';
    //변수 작성 규칙
    //int 1num;//에러 발생 : 첫글자는 숫자가 올 수 없다
    //int @num;//에러 발생 : 특수문자는 _와 $만 가능
    int _num1 = 10;
    int $num2 = 10;
    //예약어 : 기능이 미리 지정된 단어
    //int int;//에러 발생 : 예약어 사용 불가
    //int _num1 = 20;//실행시 에러 발생 : 변수명 중복 불가
    int _Num1 = 10;

    //변수명 작성 관례
    int appleCount3 = 10;//추천 : 카멜표기법
    int APPLECOUNT4 = 20;//비추천 : 변수명은 소문자로
    int a = 30;//비추천 : 의미를 유추하기 힘듬
    const int MAX_STUDENT = 10;//추천 : 상수는 대문자와 _이용
    return 0;
}
