#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	if(num > 10 && num % 2 == 0)
	{
		printf("%d(은)는 10 초과의 짝수입니다.", num);
	}
	else if(num > 10)
	{
		printf("%d(은)는 10 초과의 홀수입니다.", num);
	}
	else if(num <= 10 && num % 2 == 0)
	{
		printf("%d(은)는 10 이하의 짝수입니다.", num);
	}
	else
	{
		printf("%d(은)는 10 이하의 홀수입니다.", num);
	}
}
