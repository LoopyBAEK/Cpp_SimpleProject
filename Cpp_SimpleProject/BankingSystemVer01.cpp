#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

void ShowMenu();		// �޴� ���
void MakeAccount();		// ���°����� ���� �Լ�
void DepositMoney();	// ��   ��
void WithdrawMoney();	// ��   ��
void ShowAllAccInfo();	// �������� ��ü ���

typedef struct Account {
	// ����ID
	int accountId;
	// �̸�
	char name[20];
	// �ܾ�
	int money;
} Account;

// ���� ���� ������ �迭
Account list[100];

// �� �� ������ ����
int mem = 0;

int main()
{
	// ������ ��ȣ
	int num = 0;

	while (1)
	{
		ShowMenu();
		cout << "���� :";
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
			cout << "�߸��� ��ȣ �Է��Դϴ�." << endl;
		}
	}

	return 0;
}

void ShowMenu() {
	cout << "-----Menu------" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void MakeAccount() {
	int id;
	char name[20];
	int money;

	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�� ��: ";
	cin >> name;
	cout << "�Աݾ�: ";
	cin >> money;

	list[mem].accountId = id;
	strcpy(list[mem].name, name);
	list[mem].money = money;

	mem++;
}

void DepositMoney() {
	int id;
	int plusMoney;
	cout << "[��   ��]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�Աݾ�: ";
	cin >> plusMoney;

	for (int i = 0; i < mem; i++)
	{
		if (list[i].accountId == id)
		{
			list[i].money += plusMoney;
			cout << "�ԱݿϷ�" << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl;
}

void WithdrawMoney() {
	int id;
	int minusMoney;
	cout << "[��   ��]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "��ݾ�: ";
	cin >> minusMoney;

	for (int i = 0; i < mem; i++)
	{
		if (list[i].accountId == id)
		{
			list[i].money -= minusMoney;
			cout << "��ݿϷ�" << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl;
}

void ShowAllAccInfo() {
	cout << "[�������� ��ü ���]" << endl;
	for (int i = 0; i < mem; i++)
	{
		cout << "����ID: " << list[i].accountId << endl;
		cout << "�� ��: " << list[i].name << endl;
		cout << "�� ��: " << list[i].money << endl << endl;
	}
}