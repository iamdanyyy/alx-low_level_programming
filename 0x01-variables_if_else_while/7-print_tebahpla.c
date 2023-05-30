#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int k;

	for (k <= 'z'; k >= 'a'; k--)
	{
		putchar(k);
	}

	putchar('\n');

	return (0);
