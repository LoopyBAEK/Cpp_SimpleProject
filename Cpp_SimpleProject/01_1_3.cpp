#include <iostream>

int main() {
	int num;
	std::cout << "���ڸ� �ϳ� �Է����ּ���.: ";
	std::cin >> num;

	for (int i = 1; i < 10; i++) {
		std::cout << num << " X " << i << " = " << num * i << std::endl;
	}
	return 0;
}