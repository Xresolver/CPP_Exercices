//This program print digits of a number which is got from user

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int number = 0;
	int buffer = 0;   		//when we operate, we don't want to lose number variable.
	int multipleOfTen = 1; 	//for calculate digits.
	int digit;				//which we will print

	cout << "Enter a number: ";
	cin >> number;

	buffer = number;

	if(buffer == 0)
		cout << "0" << endl;

	while(buffer != 0)
	{
		multipleOfTen *= 10;
		buffer /= 10;
	}

	while(multipleOfTen != 1)
	{
		multipleOfTen /= 10;
		digit = number/multipleOfTen;
		cout << digit << " ";
		number = number - (multipleOfTen * digit);
	}

	return 0;
}
