#include <stdio.h>

int main()
{
  int a;
  int b;
  float c;
  float d;
  
  printf("정수 a 입력 : ");
  scanf("%d", &a);
  printf("입력받은 정수 a : %d\n", a);
  
  printf("실수 c 입력 : ");
  scanf("%f", &c);
  printf("입력받은 실수 c : %f\n", c);
  
  printf("정수 b 와 실수 d 입력 : ");
  scanf("%d %f", &b, &d);
  printf("입력받은 b d : %d %f\n", b, d);
  
  return 0;
}
