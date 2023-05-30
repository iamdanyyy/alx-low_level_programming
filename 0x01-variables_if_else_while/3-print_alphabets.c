#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then in uppercase, then a new line
 * Return: Always 0
 */

int main(void)
{

	int k;
	int j;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);

}
