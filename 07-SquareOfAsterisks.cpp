// This program draw a square according to integer value which program read, between 1 and 20

#include <iostream>

using namespace std;

/* This function draw square based on parameter is given */
void drawSquare(int size)
{
	for(int i = 1; i <= size; i++)
	{
		for(int j = 1; j <= size; j++)
		{
			/* only sides are asterisks */
			if(i==1 || j==1 || i==size || j==size)
				cout << "* ";
			else
				cout << "  ";
		}

		cout << endl;
	}

}

void validate( int *size )
{
	while(*size < 1 || *size > 50)
	{
		cout << *size << " isn't between 1 and 50.\n"
			 << "Please enter an integer value between 1 and 50: ";
		cin >> *size;
		cout << "\n";
	}

}

int main(int argc, char **argv)
{

	int sideSize;

	cout << "Please enter an integer value between 1 and 50: ";
	cin >> sideSize;
	cout << "\n";

	validate(&sideSize);
	drawSquare(sideSize);

	return 0;
}
