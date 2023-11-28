#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main() {
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;
}

/*
	RefSwap.cpp의 코드
문제2
	위의 SwapByRef2 함수를 다음의 형태로 호출하면 컴파일 에러가 발생한다.
	SwapByRef2(23, 45);
	컴파일 에러가 발생하는 이유가 무엇인지 설명해보자.

답
	SwapByRef2의 매개변수의 선언위치에 참조자가 선언되었다. 참조자는 상수를 참조할 수 없기 때문에 매개변수의 인자로는 반드시 변수가 등장해야 한다.
	그래서 상수를 전달하는 SwapByRef2 함수의 호출에는 컴파일 에러가 발생한다.
*/