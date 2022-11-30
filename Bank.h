//Bank.h
#pragma once
#include <vector>
#include <iostream>
#include "BankAccount.h"
using namespace std;

class Bank
{
private:
	vector<BankAccount> l;
public:
	Bank(int n){
		for (int i = 0; i < n; i++) {
			BankAccount *tmp = new BankAccount();
			l.push_back(*tmp);
		}
	}
	void addAcc() {
		BankAccount* tmp = new BankAccount();
		l.push_back(*tmp);
	}
	void delAcc(int id) {
		for (int i = 0; i < l.size(); i++) {
			if (l[i].getId() == id) {
				l.erase(l.begin() + i);
			}
		}
	}
	void sortList() {
		for (int i = 0; i < l.size(); i++) {
			for (int j = i; j < l.size(); j++) {
				if (l[i].getBalance() < l[j].getBalance()) {
					BankAccount tmp = l[i];
					l[i] = l[j];
					l[j] = tmp;
				}
			}
		}
	}
	void print() {
		for (int i = 0; i < l.size(); i++) {
			l[i].showAccount();
		}
	}
};

