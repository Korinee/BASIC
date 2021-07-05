#include <iostream>

using namespace std;

/*
int main()
{
    // 변수 선언 과정
    int         val = 3;
    cout << &val << endl;
    // c++ : 객체지향 프로그래밍
    // 컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.
    // - 배열 생성 하고 싶다면,
    // 재래적 절차적 프로그래밍 -> 배열의 크기가 미리결정
    // 객체지향 프로그래밍 -> 배열의 크기를 실행 시간 결정
    return 0;
}*/

/*
int main()
{
    // 변수 선언 과정
    // 포인터 : 사용할 주소에 이름을 붙인다.
    // 즉, 포인터는 포인터의 이름이 주소를 나타낸다.
    // 간접값 연산자, 간접 참조 연산자 *
    int* a;  // c style
    int* b;  // c++ style
    int* c, d;  // c는 포인터 변수, d는 int형 변수
    return 0;
}*/

/*
int main() 
{
    int a = 6;
    int* b;  // 정수가 아닌 위치값을 저장한다.
    b = &a;
    cout << "a의 값 " << a << endl;
    cout << "*b의 값 " << *b << endl;
    cout << "a의 주소 " << &a << endl;
    cout << "*b의 주소 " << b << endl;
    *b = *b + 1;
    cout << "이제 a의 값은 " << a << endl;
    return 0;
}*/

/*
int main()
{
    // new 연산자
    // 어떤 데이터형을 원하는지 new 연산자에게 알려주면, new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아내고 그 블록의 주소를 리턴한다.
    int a;
    int* b = &a;
    int* pointer = new int;
    return 0;
}*/

/*
int main()
{
    // delete 연산자
    // 사용한 메모리를 다시 메모리 폴로 환수
    // 환수된 메모리는 프로그램의 다른 부분이 다시 사용
    // 사용법
    // 1. new로 대입하지 않은 메모리는 delet로 해제할 수 없다.
    // 2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
    // 3. new[ ] 로 메모리를 대입할 경우 delete[ ] 로 해제한다.
    // 4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다. 
   
    int* ps = new int;
    // 메모리 사용
    delete ps;
    return 0;
}*/

int main() 
{
    double* p3 = new double[3];  // double형 데이터 3개를 저장할 수 있는 공간을 대입한다.
    p3[0] = 0.2;        // p3을 배열 이름처럼 취급한다.
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 + 1;        // 포인터를 증가시킨다.

    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << "\n.";

    p3 = p3 - 1;        // 다시 시작 위치를 지시한다.
    delete[] p3;        // 배열 메모리를 해제한다.
    // cin.get();

    return 0;
}
