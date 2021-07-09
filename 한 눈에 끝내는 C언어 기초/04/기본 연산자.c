#include <stdio.h>

int main()
{
  int a = 10;
  int b = 3;
  
  float c = 1.5;
  float d = 2.5;
  
  printf("덧셈 : ");
  printf("a + b = %d\n", a + b);
  
  printf("뺄셈 : ");
  printf("a - b = %d\n", a - b);
  printf("b - a = %d\n", b - a);
  
  printf("곱셈 : ");
  printf("c * d = %f\n", c * d);  
  
  printf("나눗셈 : ");
  printf("c / d = %f\n", c / d);
  
  printf("나머지 : ");
  printf("a %% b = %d\n", a % b);

  return 0;
}
