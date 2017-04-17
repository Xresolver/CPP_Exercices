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

void validateAndRun()
{
	int sideSize;

	cout << "Please enter an integer value between 1 and 50: ";
	cin >> sideSize;
	cout << "\n";

	while(sideSize < 1 || sideSize > 50)
	{
		cout << sideSize << " isn't between 1 and 50.\n"
			 << "Please enter an integer value between 1 and 50: ";
		cin >> sideSize;
		cout << "\n";
	}

	drawSquare(sideSize);

}

int main(int argc, char **argv)
{

	validateAndRun();
	return 0;
}
