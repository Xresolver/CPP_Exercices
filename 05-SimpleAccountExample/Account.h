/* Account class definition */
class Account
{
	public:

		/* constructor initialize account balance */
		explicit Account( int );

		/* add an amount to the current balance */
		void credit( int );

		/* withdraw money from the Account */
		void debit( int );

		/* return the current balance */
		int getBalance( ) const;

	private:

		/* balance for this account */
		int accountBalance;
};
