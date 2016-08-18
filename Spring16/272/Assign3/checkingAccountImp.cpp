/*
	checkingAccountImp.cpp

	Maria Loza
	CSCI 272 Section 5527
	Created: 7 March 2016
	Due Date: 13 March 2016

*/

#include "checkingAccount.h"
#include <iostream>
#include <string>

using namespace std;

//accessors
//remember: accessors from bankAccount will be accessed
double checkingAccount::getCheck() //gets the check total
{
	return checkAmt; //outputs the total amount of what the check is
} //end getCheck

string checkingAccount::getCheckRec() //gets the name of the check's recepient
{
	return checkRec; //outputs the name of the person the client made the check to
} //end getCheckRec

//mutators
 //remember: mutators from bankAccount will be accessed
void checkingAccount::setCheck(double newCheckAmt) //sets up the check total
{
	checkAmt = newCheckAmt; //double variable in setCheck will be assigned to the variable: checkAmt
} //end setCheck

void checkingAccount::setCheckRec(string newCheckRec) //sets the name of the check's recipient
{
	checkRec = newCheckRec; //double variable in setCheckRec will be assigned to the variable: checkRec
} //end setCheckRec
