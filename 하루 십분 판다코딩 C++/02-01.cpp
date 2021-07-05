#include <iostream>

using namespace std;

int main()
{
	// 1. 변수란? 변할 수 있는 수
	// cf) 상수 : 변할 수 없는 수

	/*
	1. 변수의 자료형
	2. 변수의 이름
	3. 변수가 어디에 저장되는가 (메모리 영역)? -> "&" 주소 연산자를 사용하여 알 수 있다.
	*/

	/*
	<변수선언 규칙>
	1. 숫자로 시작할 수 없다. -> int 88aaa;
	2. c++에서 사용하고 있는 키워드는 사용 불가하다. -> int return;
	3. white space를 사용할 수 없다. -> int aa aa;
	*/

	int		a;  // 선언
	a = 7;  // 대입

	int		b = 3; // 초기화 (변수 선언과 대입을 동시)

	a = 5;
	b = 10;

	// 변수는 사용되기 이전에 정의되야한다.

	cout << "a = " << a << " b = " << b << endl;

	return 0;
}
