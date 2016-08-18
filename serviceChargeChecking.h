#ifndef SERVICECHARGECHECKING_H
#define SERVICECHARGECHECKING_H

/*
	serviceChargeChecking.h

	Maria Loza
	CSCI 272 Section 5527
	Created: 7 March 2016
	Due Date: 13 March 2016

*/

#include "checkingAccount.h"
#include <string>

using namespace std;

//inherits all of checkingAccount and bankAccount
//no interest
//limited check writing per month
//no minimum balance


class serviceChargeChecking : public checkingAccount
{
public:
	//accessors
	//remember: accessors from checkingAccount and bankAccount are accessed
	int getTotalChecks(); //gets the amount of checks used
	int getRemCheck(); //gets the remaining number of checks

	//mutators
	//remember: mutators from checkingAccount and bankAccount are accessed
	
	//constructor with default parameters
	//upon instatiating, these parameters will be created 
	serviceChargeChecking(string dName = "", long dAccountNumber = 0, double dBalance = 500.50, double dDepositAmt = 0, double dWithdrawAmt = 0, string dCheckRec = "", double dCheckAmt = 0);

	//other functions
	void printStatement(); //prints the monthly statement for this specific class
	void writeCheck(); //prompts for recepient & total. creates new balance. for this specific class

private:
	const int NUM_OF_CHECKS = 10; //only 10 checks can be written in a month
	string newName; //ex: Maria
	double newCheckAmt; //ex: 50.00 or 50
	int totalChecks = 0; //amount of checks the user has used and will be increment after each usage
};


#endif // !SERVICECHARGECHECKING_H
