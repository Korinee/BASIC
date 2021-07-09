#include <stdio.h>

int main()
{
	int input;
	scanf("%d", &input);
	
	int i = 1;
	while(i < 10)
	{
		printf("%d X %d = %d\n", input, i, input * i);
		i++;
	}

	return 0;
}
