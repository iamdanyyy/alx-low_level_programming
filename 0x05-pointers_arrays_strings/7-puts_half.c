#include "main.h"
#include <string.h>

/**
 * puts_half - prints last half of a string
 * @str: string parameter
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int half;
	int j;

	if (length % 2 == 0)
	{
		half = (length / 2);
	}

	else
	{
		half = (((length - 1) / 2) + 1);
	}

	for (j = half; j < length; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
