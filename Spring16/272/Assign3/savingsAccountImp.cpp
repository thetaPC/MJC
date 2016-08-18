/*
	savingsAccountImp.cpp

	Maria Loza
	CSCI 272 Section 5527
	Created: 9 March 2016
	Due Date: 13 March 2016

*/

#include "savingsAccount.h"
#include <iostream>
#include <string>

using namespace std;

//constructor with default parameters
//upon instatiating, these parameters will be created 
savingsAccount::savingsAccount(string dName, long dAccountNumber, double dBalance, double dDepositAmt, double dWithdrawAmt)
{
	bankAccount::setName(dName);
	bankAccount::setAccountNum(dAccountNumber);
	bankAccount::setBalance(dBalance);
	bankAccount::setDepositAmt(dDepositAmt);
	bankAccount::setWithdrawAmt(dWithdrawAmt);
} //end savingsAccount


//other functions
void savingsAccount::printStatement() //prints the monthly statement for this specific class
{
	cout << "------------------------------------------- \n"
		<< "\t Savings account \n\n"
		<< "Name: \t\t\t\t" << bankAccount::getName() << "\n"
		<< "Account Number: \t\t" << bankAccount::getAccountNum() << "\n"
		<< "Current Balance: \t\t" << bankAccount::getBalance() << "\n"
		<< "Interest: \t\t\t" << INTEREST << "\n"
		<< "Minimum balance: \t\tno \n"
		<< "------------------------------------------- \n\n";
} //end printStatement
