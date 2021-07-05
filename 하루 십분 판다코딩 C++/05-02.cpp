#include <iostream>

using namespace std;

int main()
{
	// 논리 표현식
	// 논리합, 논리곱, 논리부정 연산자

	// 논리합 : ||
	// 좌항과 우항 둘 중 하나만 참이어도 참

	// 논리곱 : &&
	// 좌항과 우항 모두 참이어야 참

	// 논리부정 연산자 : !
	// ! (표현식)에서 표현식이 참이라면 거짓

	cout << "당신의 나이를 입력하십시오 : ";
	int age;
	cin >> age;

	if (age < 0 || age > 100)
		cout << "거짓말 하시면 안됩니다.\n";
	else if (20 <= age && age <= 29)
		cout << "당신은 20대 이군요?\n";
	else
		cout << "당신의 나이를 잘 모르겠습니다.\n";

	return 0;
}
