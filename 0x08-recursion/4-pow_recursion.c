#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first integer as parameter
 * @y: second integer as parameter
 * Return: x raised to y, -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	int power;
	if (y > 0)
	{
		power = pow(x, y);
		return (power);
	}

	else if (y < 0)
	{
		return (-1);
	}

	else
	{
		return (1);
	}
}
