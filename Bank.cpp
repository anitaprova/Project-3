/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 3
Created Account and Bank class with its respective functions.
*/

#include <iostream>
#include <string>
#include "Account.hpp"
#include "Bank.hpp"

Bank::Bank(){
	total = 0;
}

std::string Bank::createAccount(std::string f, std::string l, std::string p) {
	if (total < 200) {
		Account a = {f, l, p};
		total++;
		return a.getAccountNumber();
	}
	else {
		return "-1";
	}
}

bool Bank::removeAccount(std::string account) {
	int index;
	for (int i = 0; i < 200; i++) {
		if(accounts[i].getAccountNumber() == account) {
			index = i; 	
		}
	}

	if(index >= 0) {
		Account temp[200];
		for(int i = 0; i < index; i++) {
			temp[i] = accounts[i];
		}

		for(int i = index + 1; i < 200; i++){
			temp[i] = accounts[i];
		}

		for(int i = 0; i < 200; i++) {
			accounts[i] = temp[i];
		}
		total--;
		return true;

	}
	else {
		return false;
	}
}

bool Bank::withdraw(int amount, std::string account, std::string p) {
	for (int i = 0; i < 200; i++) {
                if(accounts[i].getAccountNumber() == account) {
			if (p == accounts[i].getPin() && accounts[i].transaction(amount * -1) == true) {
				accounts[i].transaction(amount * -1);
				return true;
			}
		}
	}
	return false;
}

bool Bank::deposit(int amount, std::string account, std::string p) {
	for (int i = 0; i < 200; i++) {
                if(accounts[i].getAccountNumber() == account) {
			if (p == accounts[i].getPin() && accounts[i].transaction(amount) == true) {
                                accounts[i].transaction(amount);
                                return true;
                        }
                }
        }
	return false;
}

int Bank::getAccountBalance(std::string account, std::string p) {
	for (int i = 0; i < 200; i++) {
                if(accounts[i].getAccountNumber() == account && p == accounts[i].getPin()) {
			return accounts[i].getBalance();
		}
	}
	return -1;
}
