#include <iostream>

using namespace std;

/*
int main()
{
	// 기존
	char a[10] = { 'a', 'b', 'c', 'd', 'e' };
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;
	return 0;
}*/

int main()
{
	// 반복문이란?
	// 1. 반복문에 사용할 카운터의 값을 초기화
	// 2. 반복문을 진행할 것인지 '조건 검사'
	// 3. 반복문 몸체를 수행
	// 4. 카운터의 값을 변화

	for (int i = 0; i < 5; i++)
	{
		cout << i << "번째입니다." << endl;
	}

	cout << "---------------" << endl;

	for (int j = 5; j > 0; j--)
	{
		cout << j << "번째입니다." << endl;
	}

	cout << "---------------" << endl;

	// 증가 연산자, 감소 연산자

	int a = 10;
	int b = 10;

	cout << "a는 " << a << ", b는 " << b << endl;
	cout << "a++는 " << a++ << endl;
	cout << "++b는 " << ++b << endl;
	cout << "a는 " << a << ", b는 " << b << endl;

	// < : 작다
	// <+ : 작거나 같다
	// > : 크다
	// >= : 크거나 같다
	// == : 같다
	// != : 같지 않다

	return 0;
}
