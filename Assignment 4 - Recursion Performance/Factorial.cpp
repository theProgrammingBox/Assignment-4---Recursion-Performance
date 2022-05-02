#include "Header.h"

/***********************************************************
* Factorial
* ---------------------------------------------------------
* This function receives a number to be factorialized
* and returns the factorial of the number.
*
* returns long long
***********************************************************/

long long Factorial(
	long long n)		// IN - The number to be factorialized
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Factorial(n - 1);
	}
}