#include "Header.h"

/***********************************************************
* OSPrintHeader
*-----------------------------------------------------------
* This function receives an name, type and number then
* returns the string of the class heading.
*
* returns string
***********************************************************/

string OSPrintHeader(
	string  name,  		// IN - Lab or Assignment name
	char    type,  		// IN - Determines if Lab or Assignment
	string  number)  	// IN - Lab or Assignment number
{
	ostringstream output;

	output << left;
	output << "**************************************************\n";
	output << "* PROGRAMMED BY : Justin Gea\n";
	output << "* " << setw(14) << "STUDENT ID" << ": 1221198\n";
	output << "* " << setw(14) << "CLASS" << ": CS1B - MW: 7:30p - 9:50p\n";
	output << "* ";
	if (type == 'a')
	{
		output << "ASSIGNMENT #" << setw(2);
	}
	else
	{
		output << "LAB #" << setw(9);
	}
	output << number << ": " << name << endl;
	output << "**************************************************\n\n\n";
	output << right;

	return output.str();
}