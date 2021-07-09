#include <stdio.h>

int main()
{
	char ch[30];
	scanf("%s", ch);
	
	int legth = 0;
	
	for(int i = 0; ch[i] != 0; i++)
		legth += 1;
	
	printf("%d", legth);

	return 0;
}
