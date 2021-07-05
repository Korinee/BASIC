#include <iostream>
#include <cstring>

using namespace std;

/*
int main()
{
	const int Size = 15;
	char name1[Size];  // 비어있는 배열
	char name2[Size] = "C++programing";  // 문자열 상수로 초기화된 배열
    cout << "안녕하세요! 저는 " << name2;
    cout << "입니다! 성함이 어떻게 되시나요?\n";
    //cin >> name1;  // cin : 사용자로부터 입력받아 오른쪽 배열에 저장
    // cin 으로 입력을 받을때 공백 이후 문자는 무시한다. -> cin.getline or cin.get
    cin.getline(name1, Size);
    cout << "음, " << name1 << "씨, 당신의 이름은 ";
    cout << strlen(name1) << " 자입니다만\n";
    cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";
    cout << "이름이" << name1[0] << "자로 시작하는군요.\n";
    name2[3] = '\0';                // set to null character
    cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
    cout << name2 << endl;
	return 0;
}*/

int main()
{
    // c++에서 문자열을 다루는 방법 중 하나인 string
    // c 스타일로 string 객체를 초기화할 수 있다.
    //cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
    //cout를 사용하여 string 객체를 디스플레이 할 수 있다.
    // 배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 없다.

    char char1[20];
    char char2[20] = "jauar";
    string str1;  // 배열의 사이즈를 지정하지 않아도 된다.
    string str2 = "panda";
    // char1 = char2; // 틀리다.
    str1 = str2; // 맞다.

    cout << str1 << endl;
    // string은 배열 전체를 옮길 수 있다.

    return 0;
}
