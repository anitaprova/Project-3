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

void Bank::printAccounts() {
	for(int i = 0; i < total; i++) {
		std::cout << i << ": " << accounts[i].getAccountNumber() << std::endl;
	}
}

std::string Bank::createAccount(std::string f, std::string l, std::string p) {
	if (total < 200) {
		Account a = {f, l, p};
		accounts[total] = a;
		total++;
		return a.getAccountNumber();
	}
	else {
		return "-1";
	}
}

bool Bank::removeAccount(std::string account) {
	int index = -1;
	for (int i = 0; i < total; i++) {
		if(accounts[i].getAccountNumber() == account) {
			index = i; 	
		}
	}

	if(index >= 0) {
		Account temp[200];
		for(int i = 0; i < index; i++) {
			temp[i] = accounts[i];
		}

		for(int i = index + 1; i < total; i++){
			temp[i - 1] = accounts[i];
		}

		for(int i = 0; i < total; i++) {
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
			if (p == accounts[i].getPin()) {
				if (accounts[i].transaction(amount * -1) == true) {
					return true;
				}
				else { return false; }
			}
		}
	}
	return false;
}

bool Bank::deposit(int amount, std::string account, std::string p) {
	for (int i = 0; i < 200; i++) {
        if(accounts[i].getAccountNumber() == account) {
			if (p == accounts[i].getPin()) {
            	if (accounts[i].transaction(amount) == true) {
                	return true;
				}
				else {
					return false;
				}
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
