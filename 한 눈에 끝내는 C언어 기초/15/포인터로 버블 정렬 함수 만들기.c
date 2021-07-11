#include <stdio.h>

void bubbleSort(int* arr, int length)
{
	int temp;	
	for(int i=0; i<length-1; i++)
	{
		for(int j=0; j<length-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}		
	}
}

int main()
{
	int arr[10];
	int length=sizeof(arr)/sizeof(int);
	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}

	bubbleSort(arr, length);

	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
