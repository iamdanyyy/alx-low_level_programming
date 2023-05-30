#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: Always 0
 */

int main(void)
{

	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
	}

	putchar('\n');

	return (0);

}
