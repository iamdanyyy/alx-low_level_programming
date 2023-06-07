#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Integer as parameter
 * Return: square root, -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		int root = 0;
		if (n != root)
		{
			root = n /: _sqrt_recursion(n - 1);

			return root;
