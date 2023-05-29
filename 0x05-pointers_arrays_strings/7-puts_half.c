#include "main.h"
#include <string.h>

/**
 * puts_half - prints last half of a string
 * @str: string as parameter
 */

void puts_half(char *str)
{
	int length = strlen(str);

	if (length % 2 = 0)
	{
		int half = (length / 2);
	}

	else
	{
		int half = (((length - 1) / 2) + 1);
	}

	int j;
	int k

	for (j = half; j < length; j++)
	{
		_putchar(str[j]);
	}
}
