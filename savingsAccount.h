#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

/*
	savingsAccount.h

	Maria Loza
	CSCI 272 Section 5527
	Created: 9 March 2016
	Due Date: 13 March 2016

*/

#include "bankAccount.h"
#include <string>

using namespace std;


//inherits from bankAccount
//pays interest
class savingsAccount : public bankAccount
{
public:
	//accessors
	//remember: accessors from bankAccount will be accessed

	//mutators
	//remember: mutators from bankAccount will be accessed

	//constructor with default parameters
	//upon instatiating, these parameters will be created 
	savingsAccount(string dName = "", long dAccountNumber = 0, double dBalance = 530.50, double dDepositAmt = 0, double dWithdrawAmt = 0);


	//other functions
	//remember: other functions from bankAccount will be accessed
	virtual void printStatement(); //prints the monthly statement for this specific class

private:
	const double INTEREST = 0.02;
	

};


#endif // !SAVINGSACCOUNT_H
