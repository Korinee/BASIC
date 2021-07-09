#include <stdio.h>

int main()
{
	int input;
	scanf("%d", &input); // 입력
	
	int sumFor = 0; // for 문으로 합산할 변수 초기화
	for(int i = 1; i <= input; i++)
	{
		sumFor += i; // 복합 대입 연산자 사용해보세요!
	}
	
	int sumWhile = 0; // while 문으로 합산할 변수 초기화
	int i = 1; // while 문에 사용될 반복자 변수 초기화
	while(i <= input)
	{
		sumWhile += i; // 복합 대입 연산자를 사용해보세요!
		i++; // 증감 연산자를 사용해보세요!
	}
	
	printf("%d %d", sumFor, sumWhile);
}
