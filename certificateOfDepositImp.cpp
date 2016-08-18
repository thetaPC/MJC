/*
	certificateOfDepositImp.cpp

	Maria Loza
	CSCI 272 Section 5527
	Created: 10 March 2016
	Due Date: 13 March 2016

*/

#include "certificateOfDeposit.h"
#include <iostream>
#include <string>

using namespace std;

//constructor with default parameters
//upon instatiating, these parameters will be created 
certificateOfDeposit::certificateOfDeposit(string dName, long dAccountNumber, double dBalance, double dDepositAmt, double dWithdrawAmt)
{
	bankAccount::setName(dName);
	bankAccount::setAccountNum(dAccountNumber);
	bankAccount::setBalance(dBalance);
	bankAccount::setDepositAmt(dDepositAmt);
	bankAccount::setWithdrawAmt(dWithdrawAmt);
} //end certificateOfDeposit

//other functions
void certificateOfDeposit::printStatement() //prints the monthly statement for this specific class
{
	cout << "------------------------------------------- \n"
		<< "\t Certificate of Deposit \n\n"
		<< "Name: \t\t\t\t" << bankAccount::getName() << "\n"
		<< "Account Number: \t\t" << bankAccount::getAccountNum() << "\n"
		<< "Current Balance: \t\t" << bankAccount::getBalance() << "\n"
		<< "No minimum balance \n"
		<< "Interest: \t\t\t" << INTEREST << "\n"
		<< "Number of maturity months: \t" << NUMOFMATMONTH << "\n"
		<< "Current maturity month: \t" << currentMonth << "\n"
		<< "------------------------------------------- \n\n";
} //end printStatement