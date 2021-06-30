#include <iostream>  // 전처리 지시자

/*
c++에서 함수를 사용하고자 한다면...?
반드시 그 함수의 원형을 미리 정의해야 한다.
이는 전처리 지시자에 미리 정의 되어있다.
*/

using namespace std;
// ' ; ' 을 종결자의 역할을 한다.
/*
이 문장을 사용하지 않는다면 
std::cout << "Hello, World!" << std::endl; 
와 같이 사용해야한다.
*/

int main()
{
	// c++ 코드에는 반드시 main함수가 있어야한다.

	cout << "Hello, World!" << endl;
	// cout 는 << 뒤 " " 문장을 출력한다.
	// endl 는 줄바꿈의 역할을 한다.
	// << 는 데이터의 방향(흐름)을 나타낸다.

	return 0;
}
