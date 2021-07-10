#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	for (int i=2; i<=num; i++)
	{
		int count = 0;
		for (int j=2; j<=i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		
		if(count==1)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
