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

std::string Account::generateAccountNumber(){
    std::string an_str = "";
    for(int i{0}; i < 8; i++ ){
        int temp = rand() % 10;
        an_str += std::to_string(temp);
    }
    return an_str;
}

Account::Account() {
	first_name = "anonymous";
	last_name = "anonymous";
	pin = "0000";
	account_number = generateAccountNumber();
	account_balance = 0;
}

Account::Account(std::string fname, std::string lname, std::string p) {
	first_name = fname;
	last_name = lname;
	if(p.length() == 4) {
		pin = p;
	}
	else {
		pin = "0000";
	}
	account_number = generateAccountNumber();	
	account_balance = 0;
}

void Account::setFirstName(std::string n) {
	first_name = n;
}

void Account::setLastName(std::string n) {
	last_name = n;
}

bool Account::setPin(std::string n) {
	if(n.length() == 4){
		pin = n;
		return true;
	}
	else{
		return false;
	}
}

std::string Account::getFirstName() {
	return first_name;
}

std::string Account::getLastName() {
	return last_name;
}

std::string Account::getAccountNumber() {
	return account_number;
}

std::string Account::getPin() {
	return pin;
}

int Account::getBalance() {
	return account_balance;
}

bool Account::transaction(int a) {
	if(account_balance + a > 0){
		account_balance += a;
		return true;
	}
	else {
		return false;
	}
} 
