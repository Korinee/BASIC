#include <stdio.h>

int main()
{
	int tarr[3][4];
	
	// 이차원 배열을 만드는 반복문 입니다.
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			tarr[i][j] = (i+1)*(j+1) ;
		}
	}
	
	// 이차원 배열을 출력하는 반복문 입니다.
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("%d ", tarr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
