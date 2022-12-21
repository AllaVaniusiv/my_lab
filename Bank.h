//Bank.h
#pragma once
#include <vector>
#include <iostream>
#include "BankAccount.h"
using namespace std;

class Bank
{
private:
	vector<BankAccount> accounts;
public:
	Bank(int n){
		for (int i = 0; i < n; i++) {
			BankAccount *tmp = new BankAccount();
			accounts.push_back(*tmp);
		}
	}
	void add_acc() {
		BankAccount* tmp = new BankAccount();
		accounts.push_back(*tmp);
	}
	void del_acc(int id) {
		for (int i = 0; i < accounts.size(); i++) {
			if (accounts[i].get_id() == id) {
				accounts.erase(accounts.begin() + i);
			}
		}
	}
	void descending_sort () {
		for (int i = 0; i < accounts.size(); i++) {
			for (int j = i; j < accounts.size(); j++) {
				if (accounts[i].get_balance() < accounts[j].get_balance()) {
					BankAccount tmp = accounts[i];
					swap(accounts[i], accounts[j]);
				}
			}
		}
	}
	void print() {
		for (int i = 0; i < accounts.size(); i++) {
			accounts[i].show_account();
		}
	}
};

