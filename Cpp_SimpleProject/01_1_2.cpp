#include <iostream>

int main() {
	char name[100];
	char phone[100];

	std::cout << "이름을 입력해주세요. :";
	std::cin >> name;

	std::cout << "전화번호를 입력해주세요. :";
	std::cin >> phone;

	std::cout << "당신의 이름은 " << name << "이고, 전화번호는 " << phone << " 입니다." << std::endl;
	return 0;
}