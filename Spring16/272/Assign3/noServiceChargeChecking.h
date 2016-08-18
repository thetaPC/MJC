#ifndef NOSERVICECHARGECHECKING_H
#define NOSERVICECHARGECHECKING_H
/*
	noServiceChargeChecking.h

	Maria Loza
	CSCI 272 Section 5527
	Created: 8 March 2016
	Due Date: 13 March 2016

*/

#include "checkingAccount.h"
#include <string>

//inherits from bankAccount and checkingAccount
//pays interest
//unlimited checks
//requires minimum balance
//no monthly service charge

class noServiceChargeChecking : public checkingAccount
{
public:
	//accessors
	//remember: accessors from checkingAccount and bankAccount are accessed

	//mutators
	//remember: mutators from checkingAccount and bankAccount are accessed

	//constructor with default parameters
	//upon instatiating, these parameters will be created 
	noServiceChargeChecking(string dName = "", long dAccountNumber = 0, double dBalance = 650.50, double dDepositAmt = 0, double dWithdrawAmt = 0, string dCheckRec = "", double dCheckAmt = 0);

	//other functions
	void printStatement(); //prints the monthly statement
	void writeCheck(); //prompts for recepient & total. creates new balance. for this specific clas
	void calcWithBal(); //calcs new balance after withdrawal for this specific clas
	void withdrawing(); //does the process of withdrawing for this specific clas

private:
	const double MINIMUM_BALANCE = 350.00;
	const double INTEREST = 0.01;
	string newName; //ex: Maria
	double newCheckAmt; //ex: 60.00 or 60
	double withdraw; //ex: 70 or 70.00

}; //end class


#endif // !NOSERVICECHARGECHECKING_H
