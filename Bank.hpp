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

class Bank {
private:
	Account accounts[200];
	int total;
public:
	Bank();
	std::string createAccount(std::string f, std::string l, int p);
	bool removeAccount(int account);
	bool withdraw(int amount, int account, int p);
	bool deposit(int amount, int account, int p);
	int getAccountBalance(int account, int p);
};
