#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first integer as parameter
 * @y: second integer as parameter
 * Return: x raised to y, -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	int j;
	int k = 1;
	if (y > 0)
	{
		for  (j = 0; j < y; j++)
		{
			k = k * x;

			return (k);
		}
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (-1);
	}
}
