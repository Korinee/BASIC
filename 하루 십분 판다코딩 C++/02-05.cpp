#include <iostream>

using namespace std;

/*
int main()
{
	// + : 두 개의 피연산자의 합을 계산한다.
	// - : 첫 번째 피연산자에서 두 번째 피연산자의 차를 계산한다.
	// * : 두 개의 피연산자의 곱을 계산한다.
	// /  : 첫 번째 피연산자에서 두 번째 피연산자를 나눈다. 두 개의 피연산자가 모두 정수이면 결과값은 '몫'이다.
	// % : 첫 번째 피연산자를 두 번째 피연산자로 나누어 나머지를 구한다. 부동 소수점( 실수 )는 사용할 수 없다.
	int		a = 10;
	int		b = 3;
	int		c = a + b;
	int		d = a - b;
	int		e = a * b;
	int		f = a / b;
	int		g = a % b;
	cout << "c : " << c << endl;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;
	cout << "f : " << f << endl;
	cout << "g : " << g << endl;
	// c++가 복잡한 산술 연산을 수행할 수 있을까? -> 있다.
	int		i = 10;
	int		j = 3;
	int		k = 5;
	int		multiple = i / j * k;
	cout << multiple;
	return 0;
}*/

int main()
{
	// auto
	// 만약 float 0을 저장하려는데 auto를 사용한다면 int로 저장되기 때문에 오류를 발생할 수 있다.

	auto		n = 100;  // int
	auto		x = 1.5;  // float
	auto		y = 1.3e12L;  // long long

	return 0;
}
