#include <stdio.h>

int main()
{
	int arr[5];
	for(int i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int sum = 0;
	for(int j=0; j<5; j++)
	{
		sum += arr[j];
	}
	
	printf("%d", sum);

	return 0;
}
