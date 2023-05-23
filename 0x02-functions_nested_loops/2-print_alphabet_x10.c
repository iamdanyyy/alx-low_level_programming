#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet in lowercase then a new line
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int k;
	int j;

	for (k = 0; k < 10; k++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
