/* This program get a string from user and
 * count the number of characters which is
 * found this string, in several categories
 *  and display the result.
 */

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void counter(string userString)
{
	int numAlNum = 0;
	int numAlpha = 0;
	int numBlank = 0;
	int numCntrl = 0;
	int numDigit = 0;
	int numGraph = 0;
	int numLower = 0;
	int numPrint = 0;
	int numPunct = 0;
	int numSpace = 0;
	int numUpper = 0;
	int numXDigit = 0;

	int totalNumChar = 0;
	int i;

	for(i = 0; userString[i] != '\0'; i++)
	{
			if ( isalnum(userString[i]) ) numAlNum++;
			if ( isalpha(userString[i]) ) numAlpha++;
			if ( isblank(userString[i]) ) numBlank++;
			if ( iscntrl(userString[i]) ) numCntrl++;
			if ( isdigit(userString[i]) ) numDigit++;
			if ( isgraph(userString[i]) ) numGraph++;
			if ( islower(userString[i]) ) numLower++;
			if ( isprint(userString[i]) ) numPrint++;
			if ( ispunct(userString[i]) ) numPunct++;
			if ( isspace(userString[i]) ) numSpace++;
			if ( isupper(userString[i]) ) numUpper++;
			if ( isxdigit(userString[i]) ) numXDigit++;

	}

	totalNumChar = i;

	cout << "\n In your string: "
		 << "\n total character count             : " << totalNumChar
		 << "\n alphanumeric character count      : " << numAlNum
		 << "\n alphabetic character count        : " << numAlpha
		 << "\n blank character count             : " << numBlank
		 << "\n punctuation character count       : " << numPunct
		 << "\n decimal digit character count     : " << numDigit
		 << "\n hexadecimal digit character count : " << numXDigit
		 << "\n lowercase letter character count  : " << numLower
		 << "\n uppercase letter character count  : " << numUpper
		 << "\n printable character count         : " << numPrint
		 << "\n control character count           : " << numCntrl
		 << "\n white-space character count       : " << numSpace
		 << "\n " << numGraph << " character has graphical representation in your string" << endl;
}

int main(int argc, char **argv)
{
	string userString;

	cout << "Please enter a string: \n";
	getline(cin, userString);

	counter(userString);

	return 0;
}
