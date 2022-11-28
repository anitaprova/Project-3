/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 3
Created Account and Bank class with its respective functions.
*/

#include <iostream>
#include "Account.hpp"
#include "Bank.hpp"

int main() {
	//TASK A
	std::cout << "~~~~~~TASK A~~~~~~~" << std::endl;
	Account a1 = {"Anna", "McDog", "2134"};
	std::cout << a1.getBalance("1234") << std::endl;
	std::cout << a1.transaction(-10000) << std::endl;
	std::cout << a1.transaction(-500) << std::endl;
	
	Account a2;
	a2.setFirstName("Jermeny");
	a2.setLastName("Wolfrich");
	a2.setPin("1111");
	std::cout << a2.getFirstName() << std::endl;
	std::cout << a2.getLastName() << std::endl;
	std::cout << a2.getAccountNumber() << std::endl;
	std::cout << a2.getPin() << std::endl;
	std::cout << a2.getBalance("1111") << std::endl;
	std::cout << a2.transaction(770) << std::endl;
	std::cout << a2.getBalance("1111") << std::endl;

	//TASK B
	/*std::cout << "~~~~~~~~~~~~TASK B~~~~~~~~~~~~~~" << std::endl;	
	Bank b;
	std::cout << b.createAccount("Martin", "Charging", "1234") << std::endl;
	*/
	
	return 0;
}
