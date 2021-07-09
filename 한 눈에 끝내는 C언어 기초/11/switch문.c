#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
			printf("메뉴 출력");
			break;
		case 2:
			printf("추가");
			break;
		case 3:
			printf("수정");
			break;
		case 4:
			printf("삭제");
			break;
		case 5:
			printf("종료");
			break;
		default:
			printf("올바른 번호를 입력하세요.");
			break;
	}	
	
	return 0;
}
