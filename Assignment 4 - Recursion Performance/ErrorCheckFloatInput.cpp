#include "Header.h"

/***********************************************************
* ErrorCheckFloatInput
* ---------------------------------------------------------
* This function receives an input, min and max then
* returns true if the input is not a number or is not
* between the min and max.
*
* returns bool
***********************************************************/

bool ErrorCheckFloatInput(
	float& input,			// IN - The input to be checked
	float min,				// IN - The minimum value of the input
	float max)				// IN - The maximum value of the input
{
	cout << fixed << setprecision(0);
	if (!(cin >> input))
	{
		cout << "\n**** Please input a number between " << min << " and " << max << " ****\n\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return true;
	}
	else if (input < min || input > max)
	{
		cout << "\n**** The number " << setw(5) << input << " is an invalid entry  ****\n";
		cout << "**** Please input a number between " << min << " and " << max << " ****\n\n";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return true;
	}
	else
	{
		cout << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return false;
	}
}