#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 백준_정렬해보기_단순 정렬 문제
/*
int array[1001];

int main(void)
{
	int number, i, j, min, index, temp;
	scanf("%d", &number);

	for (i = 0; i < number; i++)
	{
		scanf("%d", &array[i]);
	}

	for (i = 0; i < number; i++)
	{
		min = 1001;
		for (j = i; j < number; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (i = 0; i < number; i++)
	{
		printf("%d\n", array[i]);
	}

	return 0;
}*/

// 백준_정렬해보기_세 수 정렬 문제
/*
int array[3];

int main(void)
{
	int  i, j, min, index, temp;

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &array[i]);
	}

	for (i = 0; i < 3; i++)
	{
		min = 1000001;
		for (j = i; j < 3; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d ", array[i]);
	}

	return 0;
}*/

// 백준_정렬해보기_100만 개 정렬 문제 (퀵정렬 이용)
int number, data[1000001];

void quickSort(int* data, int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int key = start;
	int i = start + 1, j = end, temp;

	while (i <= j)
	{
		while (data[i] <= data[key])
		{
			i++;
		}
		while (data[j] >= data[key] && j > start)
		{
			j--;
		}
		if (i > j)
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}

	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main()
{
	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		scanf("%d", &data[i]);
	}

	quickSort(data, 0, number - 1);

	for (int i = 0; i < number; i++)
	{
		printf("%d\n", data[i]);
	}

	return 0;
}
