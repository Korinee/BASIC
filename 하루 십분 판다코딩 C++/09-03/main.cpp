#include<iostream>
#include"time.h"
using namespace std;

int main()
{
	// << 연산자 오버로딩

	Time t1(3, 45);

	t1.show();

	cout << t1;

	return 0;
}
