#include <iostream>

using namespace std;

int main()
{
	// char : 작은 문자형

	int		a = 77;  // 아스키코드 : 77 = M
	char		b = a;
	char		c = 'a';

	// null 문자 = '\0' -> 배열에서는 널 문자가 나올때까지 출력한다.
	// " " -> 명시적으로 null문자가 포함되어있다.

	cout << b << endl;
	cout << c << endl;

	// bool : 0 또는 1 ( 0 : false, 1 : true )
	 
	bool		d = 0;
	bool		e = 1;
	bool		f = 10;  // 0 이외의 모든 값을 1로 저장한다.

	cout << d << " " << e << " " << f << endl;

	return 0;
}
