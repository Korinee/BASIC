#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	if(n % 2 == 0)
	{
		printf("입력받은 정수는 짝수입니다.");
	}
	else
	{
		printf("입력받은 정수는 홀수입니다.");
	}

  return 0;
}
