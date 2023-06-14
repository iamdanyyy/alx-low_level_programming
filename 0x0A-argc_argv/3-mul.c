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
	if (argc = 3)
	{
	int answer = (_atoi(argv[1]) * _atoi(argv[2]));

	printf("%d\n", answer);
	}

	else
	{
		printf("Error\n");
	}

	return (0);
}
