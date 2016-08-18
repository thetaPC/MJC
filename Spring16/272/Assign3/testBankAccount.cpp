/*
	main.cpp

	Maria Loza
	CSCI 272 Section 5527
	Created: 7 March 2016
	Due Date: 13 March 2016

*/

/*
	Problem:
	The problem describes the need for proper bank procedures in order
	for its clients to use their appropriate accounts. The accounts
	have different options that must be regarded during the procedure
	the client decides to do, which could be deposits, withdrawals,
	or to see the bank statement.

	Solution:
	Use multiple headers to state the 8 classes. Some of these classes
	will have (pure) virtual functions such as bankAccount, checkingAccount,
	and noServiceChargeChecking. There might be others but those are the ones
	that I believe will have. I am still not 100% sure on how I will complete
	this assignment since I'm not sure how the interest works in banks
	very well. I thought I had it but the book makes me think I'm wrong.

*/

#include "serviceChargeChecking.h"
#include "noServiceChargeChecking.h"
#include "highInterestChecking.h"
#include "savingsAccount.h"
#include "highInterestSavings.h"
#include "certificateOfDeposit.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//variables
	string yourName;
	long accNum;
	int type;
	int trans;

	serviceChargeChecking account;
	noServiceChargeChecking account2;
	highInterestChecking account3;
	savingsAccount account4;
	highInterestSavings account5;
	certificateOfDeposit account6;
	

	cout << "Enter your name: ";
	cin >> yourName;
	
	cout << "Enter your account number: ";
	cin >> accNum;
	
	cout << "\n";


	cout << "Types of accounts \n"
		<< "1 - Checking account with service charge \n"
		<< "2 - Checking account with no service charge \n"
		<< "3 - Checking account with no service charge and high interest \n"
		<< "4 - Savings account \n" 
		<< "5 - Savings account with high interest \n"
		<< "6 - Certificate of Deposit \n"
		<< "7 - Exit \n"
		<< "Enter your type: ";
	cin >> type;
	cout << "\n";

	while (type != 7) //will loop the type of accounts to allow clients to jump between accounts
	{
		switch (type)
		{
		case 1:
			account.setName(yourName);
			account.setAccountNum(accNum);
			cout << "Transactions \n"
				<< "1 - Make a withdrawal \n"
				<< "2 - Make a deposit \n"
				<< "3 - Print statement \n"
				<< "4 - Write a check \n"
				<< "5 - Exit \n"
				<< "Select transaction: ";
			cin >> trans;
			cout << "\n";
			while (trans != 5) //will loop the transactions to allow clients to jump between trans
			{
				switch (trans)
				{
				case 1:
					account.withdrawing();
					break;
				case 2:
					account.depositing();
					break;
				case 3:
					account.printStatement();
					break;
				case 4:
					account.writeCheck();
					break;
				default:
					break;
				} //end switch trans
				cout << "Transactions \n"
					<< "1 - Make a withdrawal \n"
					<< "2 - Make a deposit \n"
					<< "3 - Print statement \n"
					<< "4 - Write a check \n"
					<< "5 - Exit \n"
					<< "Select transaction: ";
				cin >> trans;
				cout << "\n";
			} //end while trans
			break;
		case 2:
			account2.setName(yourName);
			account2.setAccountNum(accNum);
			cout << "Transactions \n"
				<< "1 - Make a withdrawal \n"
				<< "2 - Make a deposit \n"
				<< "3 - Print statement \n"
				<< "4 - Write a check \n"
				<< "5 - Exit \n"
				<< "Select transaction: ";
			cin >> trans;
			cout << "\n";
			while (trans != 5) //will loop the transactions to allow clients to jump between trans
			{
				switch (trans)
				{
				case 1:
					account2.withdrawing();
					break;
				case 2:
					account2.depositing();
					break;
				case 3:
					account2.printStatement();
					break;
				case 4:
					account2.writeCheck();
					break;
				default:
					break;
				} //end switch trans
				cout << "Transactions \n"
					<< "1 - Make a withdrawal \n"
					<< "2 - Make a deposit \n"
					<< "3 - Print statement \n"
					<< "4 - Write a check \n"
					<< "5 - Exit \n"
					<< "Select transaction: ";
				cin >> trans;
				cout << "\n";
			} //end while trans
			break;
		case 3:
			account3.setName(yourName);
			account3.setAccountNum(accNum);
			cout << "Transactions \n"
				<< "1 - Make a withdrawal \n"
				<< "2 - Make a deposit \n"
				<< "3 - Print statement \n"
				<< "4 - Write a check \n"
				<< "5 - Exit \n"
				<< "Select transaction: ";
			cin >> trans;
			cout << "\n";
			while (trans != 5) //will loop the transactions to allow clients to jump between trans
			{
				switch (trans)
				{
				case 1:
					account3.withdrawing();
					break;
				case 2:
					account3.depositing();
					break;
				case 3:
					account3.printStatement();
					break;
				case 4:
					account3.writeCheck();
					break;
				default:
					break;
				} //end switch trans
				cout << "Transactions \n"
					<< "1 - Make a withdrawal \n"
					<< "2 - Make a deposit \n"
					<< "3 - Print statement \n"
					<< "4 - Write a check \n"
					<< "5 - Exit \n"
					<< "Select transaction: ";
				cin >> trans;
				cout << "\n";
			} //end while trans
			break;
		case 4:
			account4.setName(yourName);
			account4.setAccountNum(accNum);
			cout << "Transactions \n"
				<< "1 - Make a withdrawal \n"
				<< "2 - Make a deposit \n"
				<< "3 - Print statement \n"
				<< "5 - Exit \n"
				<< "Select transaction: ";
			cin >> trans;
			cout << "\n";
			while (trans != 5) //will loop the transactions to allow clients to jump between trans
			{
				switch (trans)
				{
				case 1:
					account4.withdrawing();
					break;
				case 2:
					account4.depositing();
					break;
				case 3:
					account4.printStatement();
					break;
				default:
					break;
				} //end switch trans
				cout << "Transactions \n"
					<< "1 - Make a withdrawal \n"
					<< "2 - Make a deposit \n"
					<< "3 - Print statement \n"
					<< "5 - Exit \n"
					<< "Select transaction: ";
				cin >> trans;
				cout << "\n";
			} //end while trans
			break;
		case 5:
			account5.setName(yourName);
			account5.setAccountNum(accNum);
			cout << "Transactions \n"
				<< "1 - Make a withdrawal \n"
				<< "2 - Make a deposit \n"
				<< "3 - Print statement \n"
				<< "5 - Exit \n"
				<< "Select transaction: ";
			cin >> trans;
			cout << "\n";
			while (trans != 5) //will loop the transactions to allow clients to jump between trans
			{
				switch (trans)
				{
				case 1:
					account5.withdrawing();
					break;
				case 2:
					account5.depositing();
					break;
				case 3:
					account5.printStatement();
					break;
				default:
					break;
				} //end switch trans
				cout << "Transactions \n"
					<< "1 - Make a withdrawal \n"
					<< "2 - Make a deposit \n"
					<< "3 - Print statement \n"
					<< "5 - Exit \n"
					<< "Select transaction: ";
				cin >> trans;
				cout << "\n";
			} //end while trans
			break;
		case 6:
			account6.setName(yourName);
			account6.setAccountNum(accNum);
			cout << "Transactions \n"
				<< "1 - Make a withdrawal \n"
				<< "2 - Make a deposit \n"
				<< "3 - Print statement \n"
				<< "5 - Exit \n"
				<< "Select transaction: ";
			cin >> trans;
			cout << "\n";
			while (trans != 5) //will loop the transactions to allow clients to jump between trans
			{
				switch (trans)
				{
				case 1:
					account6.withdrawing();
					break;
				case 2:
					account6.depositing();
					break;
				case 3:
					account6.printStatement();
					break;
					break;
				default:
					break;
				} //end switch trans
				cout << "Transactions \n"
					<< "1 - Make a withdrawal \n"
					<< "2 - Make a deposit \n"
					<< "3 - Print statement \n"
					<< "5 - Exit \n"
					<< "Select transaction: ";
				cin >> trans;
				cout << "\n";
			} //end while trans
			break;
		default:
			break;
		} //end switch type
		cout << "Types of accounts \n"
			<< "1 - Checking account with service charge \n"
			<< "2 - Checking account with no service charge \n"
			<< "3 - Checking account with no service charge and high interest \n"
			<< "4 - Savings account \n"
			<< "5 - Savings account with high interest \n"
			<< "6 - Certificate of Deposit \n"
			<< "7 - Exit \n"
			<< "Enter your type: ";
		cin >> type;
		cout << "\n";
	} //end while type


	return 0;
} //end main


/*
	My notes:
	Dear Lord, I finally finished!! Wait, let me just do another test run...
	It runs nicely. But I had to trash the first version b/c I forgot how inheritance 
	worked. But I'm glad I did b/c the second version was way more easy and it
	was more fun. I learned a lot. Classes are awesome. It can be complicating
	if I don't write some comments reminding me what each functions do. I think
	I might have gone a bit crazy on this assignment. I really think I did more
	than necessary for the assignment. But I guess I'll find out when it comes 
	grading day. But I am pretty proud with what I have.

	Useful links:
	http://www.geeksforgeeks.org/g-fact-36/
	https://msdn.microsoft.com/en-us/library/0y01k918.aspx
*/
