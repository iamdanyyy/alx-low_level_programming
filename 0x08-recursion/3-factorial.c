#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: Integer as parameter
 * Return: Factorial
 */

int factorial(int n)
{
	int sum = 0;

	if (n > 0)
	{
		sum = n * factorial(sum - 1);

		return (sum);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (-1);
	}
}
