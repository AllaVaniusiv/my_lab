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
		setBalance(balance);
		setId(id);
		setOwnerName(owner_name);
	}
	void setBalance(float balance) { this->balance = balance; }
	void setId(int id) { this->id = id; }
	void setOwnerName(string owner_name) { this->owner_name = owner_name; }
	float getBalance() { return balance; }
	int getId() { return id; }
	string getName() { return owner_name; }

	void addMoney(float m) { balance += m; }
	void takeMoney(float m) { balance -= m; }

	void showAccount();
};

