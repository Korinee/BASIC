#include <stdio.h>

int main()
{
	for(int i=0; i<5; i++)
	{
		// 공백 문자는 첫 줄부터 4, 3, 2, 1, 0개 출력돼야 합니다.
		for(int j=5; j-i>1; j--)
		{
			printf(" ");
		}
		
		// 별은 첫 줄부터 1, 3, 5, 7, 9개 출력돼야 합니다.
		for(int k=0; k<i*2+1; k++)
		{
			printf("*");
		}
		
		printf("\n");
	}

	return 0;
}
