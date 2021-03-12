

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  /* 
	* - 두 정수와 산술 연산자를 입력받아 산술연산 결과를 출력하는
	*   코드를 작성하세요. 단, switch문으로 작성하세요.
	*/
  int num1 , num2;
  char op;
  printf("두 정수와 산술 연산자를 입력하세요(예 : 1 + 2) : ");
  scanf("%d %c %d", &num1, &op, &num2);
  switch(op){
    case '+': 
      printf("%d %c %d = %d\n", num1, op, num2, num1 +num2);
      break;
    case '-': 
      printf("%d %c %d = %d\n", num1, op, num2, num1 +num2);
      break;
    case '*': 
      printf("%d %c %d = %d\n", num1, op, num2, num1 +num2);
      break;
    case '%': 
      printf("%d %c %d = %d\n", num1, op, num2, num1 +num2);
      break;
    case '/': 
      printf("%d %c %d = %.2lf\n", num1, op, num2, (double)num1 / num2);
      break;
  }
  return 0;
}