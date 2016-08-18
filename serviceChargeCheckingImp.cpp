/*
	serviceChargeCheckingImp.cpp

	Maria Loza
	CSCI 272 Section 5527
	Created: 7 March 2016
	Due Date: 13 March 2016

*/

#include "serviceChargeChecking.h"
#include <iostream>
#include <string>

using namespace std;

//accessors
int serviceChargeChecking::getTotalChecks() //gets the amount of checks used
{
	return totalChecks; //outputs the total amount of checks that have been used
} //end getTotalChecks

int serviceChargeChecking::getRemCheck() //gets the remaining number of checks
{
	return NUM_OF_CHECKS - serviceChargeChecking::getTotalChecks(); //outputs the total amount of checks client has
} //end getRemCheck

//constructor
//variables in the parameters can over write the defaults
serviceChargeChecking::serviceChargeChecking(string dName, long dAccountNumber, double dBalance, double dDepositAmt, double dWithdrawAmt, string dCheckRec, double dCheckAmt)
{
	bankAccount::setName(dName);
	bankAccount::setAccountNum(dAccountNumber);
	bankAccount::setBalance(dBalance);
	bankAccount::setDepositAmt(dDepositAmt);
	bankAccount::setWithdrawAmt(dWithdrawAmt);
	checkingAccount::setCheckRec(dCheckRec);
	checkingAccount::setCheck(dCheckAmt);
} //end serviceChargeChecking

//other functions
void serviceChargeChecking::printStatement() //prints the monthly statement
{
	cout << "------------------------------------------------------ \n"
		<< "\t Checking account with service charge \n\n"
		<< "Name: \t\t\t\t" << bankAccount::getName() << "\n"
		<< "Account Number: \t\t" << bankAccount::getAccountNum() << "\n"
		<< "Current Balance: \t\t" << bankAccount::getBalance() << "\n"
		<< "Total checks per month: \t" << NUM_OF_CHECKS << "\n"
		<< "Total checks left: \t\t" << serviceChargeChecking::getRemCheck() << "\n"
		<< "No interest \n"
		<< "No minimum balance \n"
		<< "------------------------------------------------------ \n\n";
} //end printStatement



void serviceChargeChecking::writeCheck() //prompts for recepient & total. creates new balance.
{
	//this will determine if the user has checks left to create one else it will deny them to write a check
	if (totalChecks <= NUM_OF_CHECKS)
	{
		cout << "Name of the recepient: ";
		cin >> newName;
		checkingAccount::setCheckRec(newName);
		cout << "Check total: ";
		cin >> newCheckAmt;
		checkingAccount::setCheck(newCheckAmt);
		cout << "Creating check... \n";
		if (bankAccount::getBalance() > checkingAccount::getCheck()) //makes sure that the balance doesn't fall in the (-)s
		{
			bankAccount::setBalance(bankAccount::getBalance() - checkingAccount::getCheck());
			cout << "Success! \n"
				<< "Recepient: \t" << checkingAccount::getCheckRec() << "\n"
				<< "Check total: \t" << checkingAccount::getCheck() << "\n";
		} //end if
		else
			cout << "Check denied \n\n"; //if (-) will deny it
		cout << "Balance: \t" << bankAccount::getBalance() << "\n\n";
		totalChecks++; //increments to keep track of the amount of checks used
	} //end if
	else
		cout << "You no longer have checks \n\n";
	
} //end writeCheck

