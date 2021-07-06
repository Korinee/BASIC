#include "struct.h"

// 헤더 파일을 여러 파일에 포함시킬 때, 반드시 단 한번만을 포함시켜야 한다.

// 1. 함수 원형
// 2. #define이나 const를 사용하는 기호 상수
// 3. 구조체 선언
// 4. 클래스 선언
// 5. 템플릿 선언
// 6. 인라인 함수

int main()
{
	MyStruct PandaCoding = {
		"Panda",
		26,
	};

	display(PandaCoding);
	return 0;
}
