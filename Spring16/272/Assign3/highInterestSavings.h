#ifndef HIGHINTERESTSAVINGS_H
#define HIGHINTERESTSAVINGS_H

/*
	highInterestSavings.h

	Maria Loza
	CSCI 272 Section 5527
	Created: 9 March 2016
	Due Date: 13 March 2016

*/

#include "savingsAccount.h"
#include <string>

using namespace std;

//inherits from bankAccount and savingsAccount
//higher interest 
//minimum balance
class highInterestSavings : public savingsAccount
{
public:
	//accessors
	//remember: accessors from bankAccount and savingsAccount will be accessed

	//mutators
	//remember: mutators from bankAccount and savingsAccount will be accessed

	//constructor with default parameters
	//upon instatiating, these parameters will be created 
	highInterestSavings(string dName = "", long dAccountNumber = 0, double dBalance = 630.50, double dDepositAmt = 0, double dWithdrawAmt = 0);

	//other functions
	//remember: other functions from bankAccount and savingsAccount will be accessed
	void printStatement(); //prints the monthly statement for this specific class
	void calcWithBal(); //calcs new balance after withdrawal for this specific class
	void withdrawing(); //does the process of withdrawing for this specific class

private:
	const double MINIMUM_BALANCE = 300.00;
	const double INTEREST = 0.20;
	double withdraw; //ex: 20 or 20.00

};

#endif // !HIGHINTERESTSAVINGS_H
