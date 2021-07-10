#include <stdio.h>

int main()
{  
  int arr[10] = {5, 10, 15, 22, 23, 102, 99, 102, 130, 8};
  int odd = 0;
  int even = 0;
  
  for(int i = 0; i < 10; i++)
	{
		if(arr[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
  
  printf("홀수의 갯수는 %d개 입니다.\n", odd);
  printf("짝수의 갯수는 %d개 입니다.\n", even);
  
  return 0;
}
