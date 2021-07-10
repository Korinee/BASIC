#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);	
	int temp;

	temp = a;
	a = b;
	b = temp;

	printf("a : %d\n", a);
	printf("b : %d", b);	

	return 0;
}
