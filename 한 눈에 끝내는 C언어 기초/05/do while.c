#include <stdio.h>

int main()
{
	int number = 0;
	int sum = 0;

	do
	{
		number++;
		sum += number;
	}
	while(0<number && number<10);

	printf("1~10 까지의 합 : %d", sum);

	return 0;
}
