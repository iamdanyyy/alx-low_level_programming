#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int, updates the value it points to to 98
 * @*n: integer as parameter
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	*n = &n;

	return (0);
}
