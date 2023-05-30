#include <stdio.h>

/**
 * main - prints single digit numbers of base ten from zero, then a new line
 * Return: Always 0
 */

int main(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
	}

	putchar('\n');

	return (0);
}
