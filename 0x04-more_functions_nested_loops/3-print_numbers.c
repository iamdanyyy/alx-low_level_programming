#nclude "main.h"

/**
 * print_numbers - prints number from 0 to 9, followed by a new line
 * Return: Always 0
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

	return (0);
}
