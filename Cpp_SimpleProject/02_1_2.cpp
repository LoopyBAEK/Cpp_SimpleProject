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
	RefSwap.cpp�� �ڵ�
����2
	���� SwapByRef2 �Լ��� ������ ���·� ȣ���ϸ� ������ ������ �߻��Ѵ�.
	SwapByRef2(23, 45);
	������ ������ �߻��ϴ� ������ �������� �����غ���.

��
	SwapByRef2�� �Ű������� ������ġ�� �����ڰ� ����Ǿ���. �����ڴ� ����� ������ �� ���� ������ �Ű������� ���ڷδ� �ݵ�� ������ �����ؾ� �Ѵ�.
	�׷��� ����� �����ϴ� SwapByRef2 �Լ��� ȣ�⿡�� ������ ������ �߻��Ѵ�.
*/