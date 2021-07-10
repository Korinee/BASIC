#include <stdio.h>

int sumNumbers(int a, int b)
{
	return a+b;
}

int main()
{
	int num1;
	int num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	int result = sumNumbers(num1, num2);
	
  printf("a와 b의 합 : %d", result);

  return 0;
}
