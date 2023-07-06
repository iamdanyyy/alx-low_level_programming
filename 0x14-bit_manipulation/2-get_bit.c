#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer as decimal
 * @index: bit position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = (n >> index) & 1;

	return (bit);
}
