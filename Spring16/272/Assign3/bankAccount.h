#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

/*
	bankAccount.h
	
	Maria Loza
	CSCI 272 Section 5527
	Created: 7 March 2016
	Due Date: 13 March 2016

*/

#include <string>
using namespace std;

class bankAccount
{
public:
	//accessors
	string getName(); //grabs first name, spaces will end the program
	long getAccountNum(); //grabs account #
	double getBalance(); //grabs balance
	double getWithdraw(); //grabs withdrawal amount

	//mutators
	void setName(string newName); //sets up the name
	void setAccountNum(long newAccountNum); //sets up the account #
	void setBalance(double newBalance); //sets up the balance
	void setDepositAmt(double newDepositAmt); //captures the deposit amt
	void setWithdrawAmt(double newWithdrawAmt); //captures the w/drawal amt

	//other functions
	virtual void printStatement() = 0; //prints the monthly statement aka declared in later classes since each class's statements are different
	void calcDepBal(); //calcs new balance after depositing
	virtual void calcWithBal(); //calcs new balance after withdrawal but will be overwritten by derived classes for its specific purpose
	virtual void withdrawing(); //does the process of withdrawing, all the w/drawing will be done here by derived classes for its specific purpose
	void depositing(); //does the process of depositing, all the depositing will be done here

private:
	string name; //ex: Maria
	long accountNum; //ex: 100194 <-bad account num
	double balance; //ex: 500.00
	double deposit; //ex: 20 or 20.00
	double withdraw; //ex: 20 or 20.00


};



#endif // !BANKACCOUNT_H
