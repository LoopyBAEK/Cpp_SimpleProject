#include <iostream>

int main() {
	char name[100];
	char phone[100];

	std::cout << "�̸��� �Է����ּ���. :";
	std::cin >> name;

	std::cout << "��ȭ��ȣ�� �Է����ּ���. :";
	std::cin >> phone;

	std::cout << "����� �̸��� " << name << "�̰�, ��ȭ��ȣ�� " << phone << " �Դϴ�." << std::endl;
	return 0;
}