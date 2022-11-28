/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 3
Created Account and Bank class with its respective functions.
*/

#pragma once
#include <iostream>
#include <string>

class Account {
public:
	Account();
	Account(std::string fname, std::string lname, std::string p);
	void setFirstName(std::string n);
	void setLastName(std::string n);
	bool setPin(std::string n);
	std::string getFirstName();
	std::string getLastName();
	std::string getAccountNumber();
	std::string getPin();
	int getBalance(std::string p);
	bool transaction(int a, std::string p);
private:
	std::string first_name;
	std::string last_name;
	std::string account_number;
	std::string pin;
	int account_balance;
	std::string generateAccountNumber();	
};
