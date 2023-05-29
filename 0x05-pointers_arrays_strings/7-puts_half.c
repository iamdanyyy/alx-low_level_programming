#include "main.h"
#include <string.h>



void puts_half(char *str)
{
	int length = strlen(str);
	int half;

	if (length % 2 == 0)
	{
		half = (length / 2);
	}

	else
	{
		half = (((length - 1) / 2) + 1);
	}

	int j;

	for (j = half; j < length; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
