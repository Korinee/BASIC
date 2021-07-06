#include <iostream>
#include "Stock.h"

int main() 
{
	// 추상화와 클래스
	// 데이터형이란 무엇인가?
	// 데이터형을 대상으로 어떠한 연산을 수행할 수 있는가?
	// 추상화란? -> 어떠한 객체를 사실적으로 표현하는 것이 아니라, 공통된 특징을 간결한 방식으로 이해하기 쉽게 표현한 것

	// 1. 클래스 선언
	// 2. 클래스 매서드 정의

	Stock temp;
	temp.acquire("Panda", 100, 1000);
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();

	return 0;

}
