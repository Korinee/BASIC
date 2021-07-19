#include <iostream>
#include <algorithm>

using namespace std;

/*
bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	int a[10] = { 9, 3, 5, 4, 1, 10, 8, 6, 7, 2 };
	sort(a, a + 10, compare);

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ' ';
	}

	return 0;
}*/

class Student
{
public:
	string name;
	int score;

	Student(string name, int score)
	{
		this->name = name;
		this->score = score;
	}
	// 정렬 기준은 '점수가 작은 순서'
	bool operator <(Student& student)
	{
		return this->score > student.score;
	}
};

int main(void)
{
	Student students[] =
	{
		Student("박경민",100),
		Student("이정욱", 93),
		Student("최원준", 97),
		Student("장준호", 87),
		Student("유찬", 92)
	};
	sort(students, students + 5);
	
	for (int i = 0; i < 5; i++)
	{
		cout << students[i].name << ' ';
	}
}
