#include <iostream>
#ifndef TIMEH
#define TIMEH

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	void show();
	~Time();
	friend Time operator*(int n, Time& t) 
	{
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time 
{
	// 1. 파생 클래스형의 객체 안에는 기초 클래스형의 데이터 멤버들이 저장된다.
	// 2. 파생 클래스형의 객체는 기초 클래스형의 매서드들을 사용할 수 있다.
	// 3. 파생 클래스는 자기 자신의 생성자를 필요로 한다.
	// 4. 파생 클래스는 부가적인 데이터 멤버들과 멥버 함수들을 임의로 추가할 수 있다.

private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void print();

};
#endif // !TIMEH
