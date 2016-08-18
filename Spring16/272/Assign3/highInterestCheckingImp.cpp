/*
	highInterestCheckingImp.cpp

	Maria Loza
	CSCI 272 Section 5527
	Created: 8 March 2016
	Due Date: 13 March 2016

*/

#include "highInterestChecking.h"
#include <iostream>
#include <string>

using namespace std;


//constructor with default parameters
//upon instatiating, these parameters will be created 
highInterestChecking::highInterestChecking(string dName, long dAccountNumber, double dBalance, double dDepositAmt, double dWithdrawAmt, string dCheckRec, double dCheckAmt)
{
	bankAccount::setName(dName);
	bankAccount::setAccountNum(dAccountNumber);
	bankAccount::setBalance(dBalance);
	bankAccount::setDepositAmt(dDepositAmt);
	bankAccount::setWithdrawAmt(dWithdrawAmt);
	checkingAccount::setCheckRec(dCheckRec);
	checkingAccount::setCheck(dCheckAmt);
} //end highInterestChecking

//other functions
void highInterestChecking::printStatement() //prints the monthly statement for this specific class
{
	cout << "------------------------------------------------------------------------------- \n"
		<< "\t Checking account with no service charge and high interest \n\n"
		<< "Name: \t\t\t\t" << bankAccount::getName() << "\n"
		<< "Account Number: \t\t" << bankAccount::getAccountNum() << "\n"
		<< "Current Balance: \t\t" << bankAccount::getBalance() << "\n"
		<< "Total checks per month: \tunlimited \n"
		<< "Interest: \t\t\t" << INTEREST << "\n"
		<< "Minimum balance: \t\t" << MINIMUM_BALANCE << "\n"
		<< "Monthly charge: \t\tno \n"
		<< "------------------------------------------------------------------------------- \n\n";
} //end printStatement



void highInterestChecking::writeCheck() //prompts for recepient & total. creates new balance. for this specific class
{
	cout << "Name of the recepient: ";
	cin >> newName;
	checkingAccount::setCheckRec(newName);
	cout << "Check total: ";
	cin >> newCheckAmt;
	checkingAccount::setCheck(newCheckAmt);
	cout << "Creating check... \n";
	if (bankAccount::getBalance() > checkingAccount::getCheck())
	{
		bankAccount::setBalance(bankAccount::getBalance() - checkingAccount::getCheck()); //makes sure that the balance doesn't fall in the (-)s
		if (bankAccount::getBalance() < MINIMUM_BALANCE) //makes sure that the balance doesn't full under mini balance
		{
			bankAccount::setBalance(bankAccount::getBalance() + checkingAccount::getCheck()); 
			cout << "Check denied: passing minimal balance \n\n";
		} //end if
		else
		{
			cout << "Success! \n"
				<< "Recepient: \t" << checkingAccount::getCheckRec() << "\n"
				<< "Check total: \t" << checkingAccount::getCheck() << "\n";
		} //end else
	} //end if
	else
		cout << "Check denied \n\n";
	cout << "Balance: \t" << bankAccount::getBalance() << "\n\n";

} //end writeCheck()

void highInterestChecking::calcWithBal() //calcs new balance after withdrawal for this specific class
{
	if (bankAccount::getBalance() > bankAccount::getWithdraw()) //makes sure that the balance doesn't fall in the (-)s
	{
		bankAccount::setBalance(bankAccount::getBalance() - bankAccount::getWithdraw());
		if (bankAccount::getBalance() < MINIMUM_BALANCE)//makes sure that the balance doesn't full under mini balance
		{
			bankAccount::setBalance(bankAccount::getBalance() + bankAccount::getWithdraw());
			cout << "Withrawal denied: passing minimal balance of: " << MINIMUM_BALANCE << "\n\n";
		} //end if
	} //end if
	else
		cout << "Withdrawal denied \n\n";

}

void highInterestChecking::withdrawing() //does the process of withdrawing for this specific class
{
	cout << "How much would you like to withdraw?: ";
	cin >> withdraw;
	bankAccount::setWithdrawAmt(withdraw);
	cout << "Withdrawing... \n";
	highInterestChecking::calcWithBal();
	cout << "Balance: \t" << bankAccount::getBalance() << "\n\n";
}
