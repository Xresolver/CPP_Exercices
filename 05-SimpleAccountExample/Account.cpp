#include <iostream>
#include "Account.h"

using namespace std;

/* constructor initializes courseName with string supplied as argument */
Account::Account( int balance )
	: accountBalance( balance )
{
	if( balance < 0 )
	{
		cerr << "Initial balance was invalid. Balance cannot be negative." << endl;
		accountBalance = 0;
	}
}

/* function to credit an amount to this account */
void Account::credit( int amount )
{
	if( amount < 0 )
		cerr << "Credit amount cannot be negative." << endl;
	else
		accountBalance += amount;
}

/* function to debit an amount from this account */
void Account::debit( int amount )
{
	if( amount < 0 )
		cerr << "Debit amount cannot be negative." << endl;
	else if( amount < accountBalance )
		accountBalance -= amount;
	else
		cerr << "Debit amount exceeded account balance." << endl;
}

/* return the current balance of this account */
int Account::getBalance( ) const
{
	return accountBalance;
}
