#include <stdio.h>
int main()
{
	unsigned char input;	
	scanf("%hhu", &input);
	
	unsigned mul16 = input << 4;
	unsigned div8 = input >> 3;
	
	printf("%hhu ", mul16);
	printf("%hhu", div8);
	
	return 0;
}
