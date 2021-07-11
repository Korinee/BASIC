 #include <stdio.h>

int swapStudent(int* left, int* right)
{
	int temp;
	if(*left > *right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
	}
}

int main()
{
	int left;
	int right;
	scanf("%d", &left);
	scanf("%d", &right);
	
	swapStudent(&left, &right);
	
	printf("왼쪽 : %d, 오른쪽 : %d", left, right);
	
	return 0;
}
