#ifndef CERTIFICATEOFDEPOSIT_H
#define CERTIFICATEOFDEPOSIT_H

/*
	certificateOfDeposit.h

	Maria Loza
	CSCI 272 Section 5527
	Created: 10 March 2016
	Due Date: 13 March 2016

*/

#include "bankAccount.h"
#include <string>

using namespace std;

class certificateOfDeposit : public bankAccount
{
public:
	//accessors
	//remember: accessors from bankAccount will be accessed
	
	//mutators
	//remember: mutators from bankAccount will be accessed

	//constructor with default parameters
	//upon instatiating, these parameters will be created 
	certificateOfDeposit(string dName = "", long dAccountNumber = 0, double dBalance = 530.50, double dDepositAmt = 0, double dWithdrawAmt = 0);

	//other functions
	//remember: other fumctions from bankAccount will be accessed
	void printStatement(); //prints the monthly statement for this specific class


private:
	const double INTEREST = 0.021; //interest of CD is 2.1%
	const int NUMOFMATMONTH = 24; //total number of maturity months are 24
	int currentMonth = 3; //current month of CD is the 3rd

};



#endif // !CERTIFICATEOFDEPOSIT_H
