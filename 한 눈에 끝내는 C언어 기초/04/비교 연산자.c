#include <stdio.h>

int main()
{
	int input;
	scanf("%d", &input);

	printf("input 는 5와 같습니까? %d\n", input == 5);  // 같으므로 1(참)
	printf("input 는 4와 같습니까? %d\n", input == 4);  // 같지 않으므로 0(거짓)

	printf("input 는 5와 다릅니까? %d\n", input != 5); // 같으므로 0(거짓)
	printf("input 는 4와 다릅니까? %d\n", input != 4); // 같지 않으므로 1(참)

	printf("input 가 4보다 큽니까? %d\n", 4 < input);    // 크므로 1(참)
	printf("input 가 5보다 큽니까? %d\n", 5 < input);    // 크지 않으므로 0(거짓)
	printf("input 가 10보다 큽니까? %d\n", 10 < input);   // 크지 않으므로 0(거짓)

	printf("input 가 10보다 작습니까? %d\n", input < 10); // 작으므로 1(참)
	printf("input 가 5보다 작습니까? %d\n", input < 5);   // 작지 않으므로 0(거짓)
	printf("input 가 4보다 작습니까? %d\n", input < 4);  // 작지 않으므로 0(거짓)

	printf("input 가 5보다 크거나 같습니까? %d\n", 5 <= input); // 크거나 같으므로 1(참)
	printf("input 가 5보다 작거나 같습니까? %d\n", input <= 5); // 작거나 같으므로 1(참)

	return 0;
}
