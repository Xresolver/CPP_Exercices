#include <iostream>
#include "Account.h"

using namespace std;

int main(int argc, char **argv)
{
	/* create two Account object */
	Account account1( -10 );
	Account account2( 30 );

	cout << "Balance of account1 is: " << account1.getBalance()
		 << "\nBalance of account2 is: " << account2.getBalance()
		 << "\n" << endl;

	/* test of credit function */
	account1.credit( 50 );
	account2.credit( -20 );

	cout << "Balance of account1 is: " << account1.getBalance()
		 << "\nBalance of account2 is: " << account2.getBalance()
		 << "\n" << endl;

	/* test of debit function with greater amount  */
	account1.debit( 60 );
	account2.debit( 10 );

	cout << "Balance of account1 is: " << account1.getBalance()
		 << "\nBalance of account2 is: " << account2.getBalance()
		 << "\n" << endl;

	/* test of debit function with negative amount */
	account1.debit( 20 );
	account2.debit( -10 );

	cout << "Balance of account1 is: " << account1.getBalance()
		 << "\nBalance of account2 is: " << account2.getBalance()
		 << "\n" << endl;

	return 0;
}
