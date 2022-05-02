#include "Header.h"

/***********************************************************
* IterativeFibonacci
* ---------------------------------------------------------
* This function receives a number to be factorialized
* and returns the iterative fibonacci of the number.
*
* returns long long
***********************************************************/

long long IterativeFibonacci(
	long long n)				// IN - The number to be factorialized
{
	long long fibonacci = 0;
	long long fibonacci1 = 1;
	long long fibonacci2 = 0;
	for (int i = 1; i < n; i++)
	{
		fibonacci = fibonacci1 + fibonacci2;
		fibonacci2 = fibonacci1;
		fibonacci1 = fibonacci;
	}
	return fibonacci;
}