#include "main.h"

/**
 * print_numbers - prints number from 0 to 9, followed by a new line
 * Return: Always 0
 */

void print_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		_putchar(k);
	}

	_putchar('\n');

	return (0);
}
