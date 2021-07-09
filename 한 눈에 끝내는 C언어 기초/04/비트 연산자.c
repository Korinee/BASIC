#include <stdio.h>
int main()
{
	unsigned char input;
	scanf("%hhu", &input);
	
	unsigned char a = input & 6;
	unsigned char b = input | 6;
	unsigned char c = input ^ 6;
	unsigned char d = ~input;
	
	printf("%d ", a);	
	printf("%d ", b);
	printf("%d ", c);
	printf("%d", d);
	
	return 0;
}
