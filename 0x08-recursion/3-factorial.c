#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: Integer as parameter
 * Return: Factorial
 */

int factorial(int n)
{
	int sum = 0;

	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		sum = sum * factorial(n - 1);

		return sum;
	}
}
