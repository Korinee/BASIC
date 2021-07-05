#include <iostream>

using namespace std;

int main()
{
	 // while문, do while문

	 // 관계표현식 없이 사용 가능
	// 카운터값 선언 없이 사용 가능
	// do while문은 무조건 한번은 실행

	string str = "Panda";
	bool a = true;
	bool b = false;
	int i = 0;

	while (str[i] != '\0')
	{
		cout << str[i] << endl;
		i++;
	}

	cout << "---------------" << endl;

	while (b)
	{
		cout << "helllo\n";
	}

	cout << "---------------" << endl;

	bool j = false;
	do {
		cout << "while문 입니다.\n";
	} while (j);

	return 0;
}
