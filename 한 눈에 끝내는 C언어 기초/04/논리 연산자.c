#include <stdio.h>

int main()
{
  int input;
  scanf("%d", &input);

  printf("AND(논리곱) : input 는 3보다 크다. 그리고 10 보다 작다. : %d\n", 3 < input && input < 10);
  printf("AND(논리곱) : input 는 3보다 크다. 그리고 10 보다 크다. : %d\n", 3 < input && 10 < input);
  
  printf("OR(논리합) : input 는 5 이거나 4이다. : %d\n", input == 5 || input == 4);
  printf("OR(논리합) : input 는 6 이거나 7이다. : %d\n", input == 6 || input == 7);
  
  return 0;
}
