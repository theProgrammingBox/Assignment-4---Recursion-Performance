#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>
#include <sstream>
#include <limits>
#include <ios>

using namespace std;
using namespace std::chrono;

enum Option
{
	EXIT, FACTORIAL, FIBONACCI, FACTORIAL_PERFORMANCE, FIBONACCI_PERFORMANCE
};

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
	string  number);  	// IN - Lab or Assignment number

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
	float max);				// IN - The maximum value of the input

/***********************************************************
* Factorial
* ---------------------------------------------------------
* This function receives a number to be factorialized
* and returns the factorial of the number.
*
* returns long long
***********************************************************/

long long Factorial(
	long long n);		// IN - The number to be factorialized

/***********************************************************
* Fibonacci
* ---------------------------------------------------------
* This function receives a number to be factorialized
* and returns the fibonacci of the number.
*
* returns long long
***********************************************************/

long long Fibonacci(
	long long n);		// IN - The number to be factorialized

/***********************************************************
* IterativeFactorial
* ---------------------------------------------------------
* This function receives a number to be factorialized
* and returns the iterative factorial of the number.
*
* returns long long
***********************************************************/

long long IterativeFactorial(
	long long n);				// IN - The number to be factorialized

/***********************************************************
* IterativeFibonacci
* ---------------------------------------------------------
* This function receives a number to be factorialized
* and returns the iterative fibonacci of the number.
*
* returns long long
***********************************************************/

long long IterativeFibonacci(
	long long n);				// IN - The number to be factorialized