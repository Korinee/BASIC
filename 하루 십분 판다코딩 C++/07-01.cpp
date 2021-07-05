#include <iostream>

using namespace std;

/*
inline float square(float x) { return x * x;  }
int main()
{
	// 인라인 함수
	// 일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
	// 인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
	// 컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드로 대체
	int a = 5;
	cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는?" << endl;
	float b = square(a);
	cout << b << endl;
	return 0;
}*/


const int SIZE = 8;

int sumArr(int*, int n = 1);

int main() 
{

	// 디폴트 매개변수

	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64 };
	int sum = sumArr(arr);

	cout << "함수의 총 합은 " << sum << "입니다." << endl;
	return 0;
}

int sumArr(int* arr, int n) 
{
	int total = 0;

	for (int i = 0; i < n; i++)
		total += arr[i];

	return total;
}
