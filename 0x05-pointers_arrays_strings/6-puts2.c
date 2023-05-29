#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other char of str from first char, then new line
 * @str: string as parameter
 */


void puts2(char *str)
{
	int j;
	int k = strlen(str);

	for (j = 0; j <= k; j += 2)
	{
		_putchar(str[j]);
	}
}
