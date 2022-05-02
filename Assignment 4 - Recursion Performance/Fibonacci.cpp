#include "Header.h"

/***********************************************************
* Fibonacci
* ---------------------------------------------------------
* This function receives a number to be factorialized
* and returns the fibonacci of the number.
*
* returns long long
***********************************************************/

long long Fibonacci(
	long long n)		// IN - The number to be factorialized
{
	if (n <= 1)
	{
		return n;
	}
	else
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}