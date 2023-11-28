#include <iostream>
using namespace std;

void PlusOne(int& num) {
	num++;
}

void SwapSign(int& num) {
	num *= -1;
}

int main() {
	int num = 10;

	cout << "num: " << num << endl;
	PlusOne(num);
	cout << "1 증가 후 num: " << num << endl;
	SwapSign(num);
	cout << "부호가 바뀐 num: " << num << endl;
	return 0;
}