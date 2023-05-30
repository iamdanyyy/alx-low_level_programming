#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e then a new line
 * Return: Always 0
 */

int main(void)
{

	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k == 'e')
		{
			continue;
		}

		if (k == 'q')
		{
			continue;
		}

		putchar(k);
	}

	putchar('\n');

	return (0);

}
