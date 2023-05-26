#include "main.h"

/**
 * print_line - draws a srtaight line in the terminal
 * @n: size of the line
 * @k: equating to n
 */

void print_line(int n)
{
	int k;

	for (k > 0; k <= n; k++)
	{
		if (n > 0)
		{
			_putchar("_");
			_putchar('\n');
		}

		else
		{
			_putchar('\n');
		}
	}
}

