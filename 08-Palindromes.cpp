// This program print whether an integer is an palindrome.

#include <iostream>

using namespace std;

bool isPalindrome(long number)
{
	long topDigitValue = 1;
	int  digitNumber = 1;

	/* Calculate number of digit and top digit value */
	while( (number/topDigitValue) >= 10 )
	{
		digitNumber++;
		topDigitValue *= 10;
	}

	/* compare first half of integer with second half */
	for(int i = 0; i < digitNumber/2; i++)
	{
		if( number/topDigitValue == number%10 )
		{
			/* eliminate first and last digit */
			number = number % topDigitValue;
			number = number/10;

			/* for new number change topDigitValue */
			topDigitValue /= 100;
		}
		else
			return false;
	}

	return true;
}

int main(int argc, char **argv)
{
	int number;
	cout << " Please enter an integer that you would check whether is palindrome: ";
	cin >> number;

	if(isPalindrome(number) == true)
		cout << "\n This number is a palindrome." << endl;

	else
		cout << "\n This number is not a palindrome." << endl;

	return 0;
}
