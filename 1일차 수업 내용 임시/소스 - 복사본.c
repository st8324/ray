// 한줄 주석 : //부터 그줄 끝까지 주석처리
/* 여러줄 주석 : 이 사이에 있는 모든 코드가 주석 처리 */
/* stdio.h 파일을 포함시킴
#include는 이미 만들어져 있는 파일을 가져올 때 사용
stdio => standard input/output
표준 입출력과 관련된 기능들을 모아놓은 파일
*/
#include <stdio.h>
//main은 콘솔응용프로그램이 실행되기 위해서 반드시 있어야 하는 함수(기능)
int main() {
    /*
    printf : 정형화된 문자열을 콘솔에 출력하는 함수(기능)
    "" : 문자열
    */
    printf("Hello, world!");
    return 0;
}
