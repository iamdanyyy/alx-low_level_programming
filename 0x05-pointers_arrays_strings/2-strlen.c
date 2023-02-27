/**
 * _strlen - a function that returns the length of a string
 * @s: input
 * Return: length
 */
#include "main.h"
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
