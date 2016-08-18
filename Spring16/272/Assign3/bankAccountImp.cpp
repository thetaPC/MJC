/*
	bankAccountImp.cpp

	Maria Loza
	CSCI 272 Section 5527
	Created: 7 March 2016
	Due Date: 13 March 2016

*/

#include "bankAccount.h"
#include <iostream>
#include <string>

using namespace std;

//accessors
string bankAccount::getName() //grabs first name
{
	return name; //this will grab the name and output it
} //end getName

long bankAccount::getAccountNum() //grabs account #
{
	return accountNum; //this grabs the account # and outputs it
} //end accountNum

double bankAccount::getBalance() //grabs balance
{
	return balance; //this grabs the balance amount and outputs it
} //end getBalance

double bankAccount::getWithdraw() //grabs withdrawal amount
{
	return withdraw; //this grabs the amount the user decides to withdraw
} //end getWithdraw

//mutators
void bankAccount::setName(string newName) //sets up the name
{
	name = newName; //the string in the setName will be assigned to the variable: name
} //end setName

void bankAccount::setAccountNum(long newAccountNum) //sets up the account #
{
	accountNum = newAccountNum; //the long in setAccountNum will be assigned to the variable: accountNum
} //end setAccountNum

void bankAccount::setBalance(double newBalance) //sets up the balance
{
	balance = newBalance; //the double variable in setBalance will be assigned to the variable: balance
} //end setBalance

void bankAccount::setDepositAmt(double newDepositAmt) //captures the deposit amt
{
	deposit = newDepositAmt; //the double variable in the setDepositAmt will be assigned to the variable: deposit
} //setDepositAmt

void bankAccount::setWithdrawAmt(double newWithdrawAmt) //captures the w/drawal amt
{
	withdraw = newWithdrawAmt; //the double variable in the setWithdrawAmt will be assigned to the variable: withdraw
} //end endWithdrawAmt

//other functions
void bankAccount::calcDepBal() //calcs new balance after depositing
{
	bankAccount::setBalance(balance + deposit); //calcs the new balance by adding the deposit to the current balance
} //end calcDepBal

void bankAccount::calcWithBal() //calcs new balance after withdrawal
{
	if (balance > withdraw)
		bankAccount::setBalance(balance - withdraw); //calcs the new balance by subtracting the withrawal amt to the current balance
													//only if the current balance is higher than the withdrawal amt since it the balance can't be a negative number
	else
		cout << "Withdrawal denied \n\n"; //if the withdrawal amt is higher than the current balance then it will not withdraw
	
} //end calcWithBal

void bankAccount::withdrawing() //does the process of withdrawing
{
	cout << "How much would you like to withdraw?: ";
	cin >> withdraw;
	bankAccount::setWithdrawAmt(withdraw);
	cout << "Withdrawing... \n";
	bankAccount::calcWithBal();
	cout << "Balance: \t" << bankAccount::getBalance() << "\n\n";
} //end withdrawing

void bankAccount::depositing() //does the process of depositing
{
	cout << "How much would you like to deposit?: ";
	cin >> deposit;
	bankAccount::setDepositAmt(deposit);
	bankAccount::calcDepBal();
	cout << "Depositing... \n"
		<< "Balance: \t" << bankAccount::getBalance() << "\n\n";
} //end depositing
