#include "main.h"

/**
 * _islower - checks if character 'c' is lowercase
 * @c: is the character to be checked
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{

	if ((c >= 'a') && (c <= 'z'))

		return (1);

	else

		return (0);

}
