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
	if(pin.length() == 4) {
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

int Account::getBalance(std::string p) {
	if(pin == p) {
		return account_balance;
	}
	else{
		return -1;
	}
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

/*
int main() {
	Account a1 = {"Anna", "McDog", "2134"};
	std::cout << a1.getBalance("1234") << std::endl;
	std::cout << a1.transaction(-10000, "1234") << std::endl;
	std::cout << a1.transaction(-500, "2134") << std::endl;
	
	Account a2;
	a2.setFirstName("Jermeny");
	a2.setLastName("Wolfrich");
	a2.setPin("1111");
	std::cout << a2.getFirstName() << std::endl;
	std::cout << a2.getLastName() << std::endl;
	std::cout << a2.getAccountNumber() << std::endl;
	std::cout << a2.getPin() << std::endl;
	std::cout << a2.getBalance("1111") << std::endl;
	std::cout << a2.transaction(70, "1111") << std::endl;
	std::cout << a2.getBalance("1111") << std::endl;
	
	return 0;
}*/
