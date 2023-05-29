#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @a: array to be printed
 * @n: integer to be passed through array
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d ", a[j]);

		do
		{
		printf(", ");
		}

		while (j < n - 1);
	}

	_putchar('\n');
}
