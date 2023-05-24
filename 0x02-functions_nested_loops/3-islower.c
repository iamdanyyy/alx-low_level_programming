#include "main.h"

/**
 * _islower - checks for lowercase character
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	int k;

	if ((k >= 'a') && (k <= 'z'))
	{
		return (1);
	}

	else 
	{
		return (0);
	}

}
