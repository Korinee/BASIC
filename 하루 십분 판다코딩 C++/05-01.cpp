#include <iostream>

using namespace std;

int main()
{
	// 분기 구문 : if 구문

	if (false)
	{
		cout << "조건이";
		cout << " 참입니다." << endl;
	}

	else
	{
		cout << "조건이";
		cout << " 거짓입니다." << endl;
	}

	cout << "---------------" << endl;

	if (false)
	{
		cout << "#1" << endl;
	}

	else
	{
		if (true)
			cout << "#2" << endl;
		else
			cout << "#1" << endl;
	}

	cout << "프로그램이 종료되었습니다.";

	return 0;
}
