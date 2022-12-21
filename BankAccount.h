//BankAccount.h
#pragma once
#include <string>
#include <iostream>

using namespace std;

class BankAccount
{
private:
	float balance;
	int id;
	string owner_name;
public:
	BankAccount() {
		cout << "\nOwner name:";
		cin >> owner_name;
		cout << "ID:";
		cin >> id;
		cout << "Balance:";
		cin >> balance;

	}
	BankAccount(float balance, int id, string owner_name) {
		set_balance(balance);
		set_id(id);
		set_owner_name(owner_name);
	}
	void set_balance(float balance) { this->balance = balance; }
	void set_id(int id) { this->id = id; }
	void set_owner_name(string owner_name) { this->owner_name = owner_name; }
	float get_balance() { return balance; }
	int get_id() { return id; }
	string get_name() { return owner_name; }

	void add_money(float m) { balance += m; }
	void take_money(float m) { balance -= m; }

	void show_account();
};
void BankAccount::show_account() {
	cout << "\nID:" << id << "\tOwner name:" << owner_name << "\tBalance:" << balance;
}

