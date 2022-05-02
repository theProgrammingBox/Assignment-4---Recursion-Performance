#include "Header.h"

/***********************************************************
* IterativeFactorial
* ---------------------------------------------------------
* This function receives a number to be factorialized
* and returns the iterative factorial of the number.
*
* returns long long
***********************************************************/

long long IterativeFactorial(
	long long n)				// IN - The number to be factorialized
{
	long long factorial = 1;
	for (int i = n; i > 1; i--)
	{
		factorial *= i;
	}
	return factorial;
}