#include <stdio.h>

int main()
{
	int arr[10] = {1032, 99, 1004, 234, 452, 8, 922, 445, 246, 2048};
	int min = arr[0];

	for(int i = 1; i < 10; i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}

	printf("배열 안에서 가장 작은 수는 %d입니다.\n", min);

	return 0;
}
