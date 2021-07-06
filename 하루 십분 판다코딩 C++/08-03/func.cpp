#include "Stock.h"

void Stock::buy(int n, float pr) 
{
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) 
{
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) 
{
	share_val = pr;
	set_total();
}
void Stock::show() 
{
	cout << "회사 명 : " << name << endl;
	cout << "주식 수 : " << shares << endl;
	cout << "주가 : " << share_val << endl;
	cout << "주식 총 가치 : " << total_val << endl;
}

// 사용 범위 결정 연산자 ::
Stock::Stock(string co, int n, float pr)
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock() 
{
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

Stock::~Stock()
{
	cout << name << "클래스가 소멸되었습니다.\n";
}
