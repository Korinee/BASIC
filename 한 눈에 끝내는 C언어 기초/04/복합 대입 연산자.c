#include <stdio.h>

int main()
{
  int input;
  scanf("%d", &input);

  input += 5;
  printf("%d\n", input);
  
  input -= 3;
  printf("%d\n", input);
  
  input *= 5;
  printf("%d\n", input);
  
  input /= 7;
  printf("%d\n", input);
  
  input %= 4;
  printf("%d\n", input);
  
  return 0;
}
