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
	//void printAccounts(); 
	std::string createAccount(std::string f, std::string l, std::string p);
	bool removeAccount(std::string account);
	bool withdraw(int amount, std::string account, std::string p);
	bool deposit(int amount, std::string account, std::string p);
	int getAccountBalance(std::string account, std::string p);
};
