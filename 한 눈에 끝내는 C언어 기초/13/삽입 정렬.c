#include <stdio.h>

int main()
{  
	int arr[10] = {9, 17, 5, 6, 124, 112, 1, 3, 87, 55};
	int length = sizeof(arr)/sizeof(int);

	int j;
	int temp;
	for(int i=1; i<length; i++)
	{
		temp = arr[i];
		j = i-1;
		while(0<=j && temp>arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	
	for(int i=0; i<length; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
