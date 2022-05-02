#include "Header.h"

/***********************************************************
* Recursion Performance
* ---------------------------------------------------------
* This program first displays a menu of options to the user.
* The user can choose to calculate the factorial of a number
* or the Fibonacci series of a number. The user can also choose
* to compare the performance of the two implementations.
* ---------------------------------------------------------
* INPUTS:
*  input - The user's input
*
* OUTPUTS:
* duration1 - The duration of the first trial
* duration2 - The duration of the second trial
***********************************************************/

int main()
{
	float input;								// IN & OUT   - User input
	bool running;								// CALC       - Determines if program is running
	high_resolution_clock::time_point start;	// CALC       - Start time of the trial
	high_resolution_clock::time_point stop;		// CALC       - Stop time of the trial
	microseconds duration1;						// CALC & OUT - Duration of first trial
	microseconds duration2;						// CALC & OUT - Duration of second trial

	cout << OSPrintHeader("Recursion Performance", 'a', "4");

	running = true;

	do
	{
		do
		{
			cout << "MENU OPTIONS\n\n";
			cout << "1 - Calculate and Display Factorial of a Number\n";
			cout << "2 - Calculate and Display Fibonacci Series of a Number\n";
			cout << "3 - Compare Performance for Factorial Implementations\n";
			cout << "4 - Compare Performance for Fibonacci Series Implementations\n";
			cout << "0 - EXIT\n\n";
			cout << "Enter an option (0 to exit): ";
		} while (ErrorCheckFloatInput(input, 0, 4));

		switch ((int)input)
		{
		case EXIT:
			running = false;
			break;

		case FACTORIAL:
			do
			{
				cout << "Enter a number to calculate the factorial: ";
			} while (ErrorCheckFloatInput(input, 0, 100));

			cout << "Recursive Factorial of " << input << ": ";
			cout << Factorial(input) << "\n\n";
			break;

		case FIBONACCI:
			do
			{
				cout << "Enter a number to calculate the Fibonacci series: ";
			} while (ErrorCheckFloatInput(input, 0, 100));

			cout << "Recursive Fibonacci Series of " << input << ": ";
			cout << Fibonacci(input) << "\n\n";
			break;

		case FACTORIAL_PERFORMANCE:
			do
			{
				cout << "Enter a number to calculate the factorial: ";
			} while (ErrorCheckFloatInput(input, 0, 100));

			start = high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				Factorial(input);
			}
			stop = high_resolution_clock::now();
			duration1 = duration_cast<microseconds>(stop - start);
			start = high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				IterativeFactorial(input);
			}
			stop = high_resolution_clock::now();
			duration2 = duration_cast<microseconds>(stop - start);
			cout << "The recursive factorial took " << duration1.count() << " microseconds to execute\n";
			cout << "The iterative factorial took " << duration2.count() << " microseconds to execute\n\n";
			break;

		case FIBONACCI_PERFORMANCE:
			do
			{
				cout << "Enter a number to calculate the Fibonacci series: ";
			} while (ErrorCheckFloatInput(input, 0, 100));

			start = high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				Fibonacci(input);
			}
			stop = high_resolution_clock::now();
			duration1 = duration_cast<microseconds>(stop - start);
			start = high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				IterativeFibonacci(input);
			}
			stop = high_resolution_clock::now();
			duration2 = duration_cast<microseconds>(stop - start);
			cout << "The recursive Fibonacci series took " << duration1.count() << " microseconds to execute\n";
			cout << "The iterative Fibonacci series took " << duration2.count() << " microseconds to execute\n\n";
			break;
		}
	} while (running);

	return 0;
}