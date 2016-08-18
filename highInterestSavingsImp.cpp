/*
	highInterestSavingsImp.cpp

	Maria Loza
	CSCI 272 Section 5527
	Created: 9 March 2016
	Due Date: 13 March 2016

*/

#include "highInterestSavings.h"
#include <iostream>
#include <string>

using namespace std;

//constructor with default parameters
//upon instatiating, these parameters will be created 
highInterestSavings::highInterestSavings(string dName, long dAccountNumber, double dBalance, double dDepositAmt, double dWithdrawAmt)
{
	bankAccount::setName(dName);
	bankAccount::setAccountNum(dAccountNumber);
	bankAccount::setBalance(dBalance);
	bankAccount::setDepositAmt(dDepositAmt);
	bankAccount::setWithdrawAmt(dWithdrawAmt);
}


//other functions
void highInterestSavings::printStatement() //prints the monthly statement for this specific class
{
	cout << "---------------------------------------------------- \n"
		<< "\t Savings account with high interest \n\n"
		<< "Name: \t\t\t\t" << bankAccount::getName() << "\n"
		<< "Account Number: \t\t" << bankAccount::getAccountNum() << "\n"
		<< "Current Balance: \t\t" << bankAccount::getBalance() << "\n"
		<< "Interest: \t\t\t" << INTEREST << "\n"
		<< "Minimum balance: \t\t" << MINIMUM_BALANCE << "\n"
		<< "---------------------------------------------------- \n\n";
}

void highInterestSavings::calcWithBal() //calcs new balance after withdrawal for this specific class
{
	if (bankAccount::getBalance() > bankAccount::getWithdraw()) //makes sure that the balance doesn't fall in the (-)s
	{
		bankAccount::setBalance(bankAccount::getBalance() - bankAccount::getWithdraw());
		if (bankAccount::getBalance() < MINIMUM_BALANCE) //makes sure that the balance doesn't full under mini balance
		{
			bankAccount::setBalance(bankAccount::getBalance() + bankAccount::getWithdraw());
			cout << "Withrawal denied: passing minimal balance of: " << MINIMUM_BALANCE << "\n\n";
		} //end if
	} //end if
	else
		cout << "Withdrawal denied \n\n";

}

void highInterestSavings::withdrawing() //does the process of withdrawing for this specific class
{
	cout << "How much would you like to withdraw?: ";
	cin >> withdraw;
	bankAccount::setWithdrawAmt(withdraw);
	cout << "Withdrawing... \n";
	highInterestSavings::calcWithBal();
	cout << "Balance: \t" << bankAccount::getBalance() << "\n\n";
}