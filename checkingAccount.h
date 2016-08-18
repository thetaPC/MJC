#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

/*
	checkingAccount.h

	Maria Loza
	CSCI 272 Section 5527
	Created: 7 March 2016
	Due Date: 13 March 2016

*/

#include "bankAccount.h"
#include <string>

using namespace std;

//inherits all from bankAccount
//pure virtual for writeCheck() since checking accounts allows clients to write checks

class checkingAccount : public bankAccount
{
public:
	//accessors
	//remember: accessors from bankAccount will be accessed
	double getCheck(); //gets the check total amt
	string getCheckRec(); //gets the name of the check's recepient who the client wants to make the check to

	//mutators
	//remember: mutators from bankAccount will be accessed
	void setCheck(double newCheckAmt); //sets up the check total
	void setCheckRec(string newCheckRec); //sets the name of the check's recipient

	//other functions
	virtual void writeCheck() = 0; //prompts for recepient & total. creates new balance. declared in later classes since each class is different


private:
	double checkAmt; //ex: 23.00 or 23
	string checkRec; //ex: Rachel
};


#endif // !CHECKINGACCOUNT_H
