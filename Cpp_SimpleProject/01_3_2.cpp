#include <iostream>

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc()
{
	return 10;
}

// 함수 오버로딩의 조건을 만족해서 컴파일은 된다. 그러나 다음과 같이 인자를 전달하지 않으면서 함수를 호출하는 경우,
// 두 함수 모두 호출조건을 만족하기 때문에 컴파일 에러가 발생한다.
// SimpleFunc();