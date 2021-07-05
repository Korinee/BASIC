#include <iostream>

using namespace std;

/*
int main()
{
	// 공용체 (union) : 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있다.
	
	union MyUnion
	{
		int		intVal;
		long		longVal;
		float		floatVal;
	};
	
	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;  // 3
	test.longVal = 33;
	cout << test.intVal << endl;  // 33
	cout << test.longVal << endl;  // 33
	test.floatVal = 3.3;
	cout << test.intVal << endl;  //쓰레기값
	cout << test.longVal << endl;  // 쓰레기값
	cout << test.floatVal << endl;  // 3.3
	return 0;
}*/

int main()
{
	// 열거체 (enum) : 기호 상수를 만드는 것에 대한 또다른 방법

	enum spectrum { red, orange, yellow, green,
	blue, violet, indigo, ultraviolet };

	// spectrum을 새로운 데이터형 이름으로 만든다.
	// red, orange, ... 0 에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만든다.
	
	spectrum a = orange;

	cout << a << endl;

	int		b;
	b = blue;  // blue = 4
	b = blue + 3;
	
	cout << b << endl;

	return 0;
}
