// This program calculate miles per gallons for either current trip and total

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	/* for current trip */
	int milesTrip = 0;
	int gallonsTrip = 0;

	/* for all trips */
	int milesTotal = 0;
	int gallonsTotal = 0;

	int flag;

	while(flag != -1)
	{
		cout << "\n Enter miles driven (-1 to quit): ";
		cin >> milesTrip;

		flag = milesTrip;

		/* if flag is -1 program could not be continued */
		if(flag != -1)
		{
			cout << " Enter gallons used: ";
			cin >> gallonsTrip;

			/* calculate miles per gallons for this trip */
			cout << " MPG this trip: " << ( static_cast <double>(milesTrip)/gallonsTrip );

			milesTotal   += milesTrip;
			gallonsTotal += gallonsTrip;

			/* calculate miles per gallons for total */
			cout << "\n Total MPG: " << ( static_cast <double>(milesTotal)/gallonsTotal ) << endl;
		}

	}

	return 0;

}
