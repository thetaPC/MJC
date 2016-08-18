#ifndef HIGHINTERESTCHECKING_H
#define HIGHINTERESTCHECKING_H

/*
	highInterestChecking.h

	Maria Loza
	CSCI 272 Section 5527
	Created: 8 March 2016
	Due Date: 13 March 2016

*/

#include "noServiceChargeChecking.h"
#include <string>

using namespace std;

//inherets bankAccount and checkingAccount and noServiceChargeChecking
//pays higher interest than noServiceChargeChecking
//higher minimum balance
//no monthly service charge

class highInterestChecking : public noServiceChargeChecking
{
public:
	//accessors
	//remember: accessors from bankAccount and checkingAccount and noServiceChargeChecking will be accessed

	//mutators
	//remember: mutators from bankAccount, checkingAccount, and noServiceChargeChecking will be accessed

	//constructor with default parameters
	//upon instatiating, these parameters will be created 
	highInterestChecking(string dName = "", long dAccountNumber = 0, double dBalance = 850.00, double dDepositAmt = 0, double dWithdrawAmt = 0, string dCheckRec = "", double dCheckAmt = 0);

	//other functions
	//remember: other functions from bankAccount, checkingAccount, and noServiceChargeChecking will be accessed
	void printStatement(); //prints the monthly statement for this class specifically
	void writeCheck(); //prompts for recepient & total. creates new balance. for this specific class
	void calcWithBal(); //calcs new balance after withdrawal for this specific class
	void withdrawing(); //does the process of withdrawing for this specific class

private:
	const double MINIMUM_BALANCE = 550.00;
	const double INTEREST = 0.10;
	string newName; //ex: Maria
	double newCheckAmt; //ex: 20 or 20.00
	double withdraw; //ex: 20.00 or 20

};


#endif // !HIGHINTERESTCHECKING_H
