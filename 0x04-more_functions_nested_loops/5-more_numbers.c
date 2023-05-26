#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, then a new line
 */

void more_numbers(void)
{
	int j;
	int k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			_putchar(k);
		}

		_putchar('\n');
	}
}
