#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
	int answer = (argv[1] * argv[2]);

	return (answer);
	}

	else
	{
		return ("Error");
	}

	return (0);
}
