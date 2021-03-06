

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  /* 
	* - 두 정수의 최소 공배수를 구하는 코드를 작성하세요.
	* - 2의 배수 : 2, 4, 6, 8, 10, ...
	* - 공배수 : 공통으로 있는 배수
	* - 4와 6의 공배수 : 12, 24, 36, 48, ...
	* - 4와 6의 최소 공배수 : 12
	* 반복횟수 : i는 1부터 num1 * num2까지 1씩 증가
	* 규칙성   : i가 num1의 배수이고, i가 num2의 배수이면
	*            변수 lcm에 i를 저장하고 반복문을 빠져나감
	*			=> i를 num1으로 나누었을 때 나머지가 0과 같고
	*			   i를 num2로 나누었을 때 나머지가 0과 같다면
	*			   lcm에 i를 저장하고 반복문 종료
	* 반복문종료: lcm 출력
	*/
  int num1 = 4, num2 = 6;
  int i, lcm = num1 * num2;
  //방법1
  for(i = 1; i<= num1 * num2; i++){
    if(i % num1 == 0 && i % num2 == 0){
      lcm = i;
      break;
    }
  }
  printf("%d와 %d의 최소 공배수 : %d\n", num1, num2, lcm);
  //방법2
  for(i = num1; i<= num1 * num2; i += num1){
    if(i % num2 == 0){
      lcm = i;
      break;
    }
  }
  printf("%d와 %d의 최소 공배수 : %d\n", num1, num2, lcm);

  return 0;
}