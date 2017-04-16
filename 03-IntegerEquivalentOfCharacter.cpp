//This program shows an integer equivalent which is on ASCII table, of a character that read from user.

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	char inputChar;

	cout << "Enter a character: ";
	cin >> inputChar;

	cout << "Integer equivalent of character \"" << inputChar << "\" on ASCII Table is: "
		 << static_cast < int > (inputChar) << endl;

	return 0;
}
