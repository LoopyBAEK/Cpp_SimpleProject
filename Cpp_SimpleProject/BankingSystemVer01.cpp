#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

void ShowMenu();		// 메뉴 출력
void MakeAccount();		// 계좌개설을 위한 함수
void DepositMoney();	// 입   금
void WithdrawMoney();	// 출   금
void ShowAllAccInfo();	// 계좌정보 전체 출력

typedef struct Account {
	// 계좌ID
	int accountId;
	// 이름
	char name[20];
	// 잔액
	int money;
} Account;

// 계좌 정보 저장할 배열
Account list[100];

// 고객 수 저장할 변수
int mem = 0;

int main()
{
	// 선택한 번호
	int num = 0;

	while (1)
	{
		ShowMenu();
		cout << "선택 :";
		cin >> num;
		cout << std::endl;

		switch (num)
		{
		case 1:
			MakeAccount();
			break;

		case 2:
			DepositMoney();
			break;

		case 3:
			WithdrawMoney();
			break;

		case 4:
			ShowAllAccInfo();
			break;

		case 5:
			return 0;

		default:
			cout << "잘못된 번호 입력입니다." << endl;
		}
	}

	return 0;
}

void ShowMenu() {
	cout << "-----Menu------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount() {
	int id;
	char name[20];
	int money;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "이 름: ";
	cin >> name;
	cout << "입금액: ";
	cin >> money;

	list[mem].accountId = id;
	strcpy(list[mem].name, name);
	list[mem].money = money;

	mem++;
}

void DepositMoney() {
	int id;
	int plusMoney;
	cout << "[입   금]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "입금액: ";
	cin >> plusMoney;

	for (int i = 0; i < mem; i++)
	{
		if (list[i].accountId == id)
		{
			list[i].money += plusMoney;
			cout << "입금완료" << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl;
}

void WithdrawMoney() {
	int id;
	int minusMoney;
	cout << "[출   금]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "출금액: ";
	cin >> minusMoney;

	for (int i = 0; i < mem; i++)
	{
		if (list[i].accountId == id)
		{
			list[i].money -= minusMoney;
			cout << "출금완료" << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl;
}

void ShowAllAccInfo() {
	cout << "[계좌정보 전체 출력]" << endl;
	for (int i = 0; i < mem; i++)
	{
		cout << "계좌ID: " << list[i].accountId << endl;
		cout << "이 름: " << list[i].name << endl;
		cout << "잔 액: " << list[i].money << endl << endl;
	}
}