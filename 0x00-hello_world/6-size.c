#include <stdio.h>

/**
 * main - prints sizes of various data types
 * return: 0
 */

int main(void)
{
	int Integer;
	char Character;
	float Float;
	long Long;
	long long Vlong;

	printf("Size of a char: %lu byte(s)\n", sizeof(Character));
	printf("Size of an int: %lu bytes(s)\n", sizeof(Integer)):
	printf("Size of a long int: %lu byte(s)\n", sizeof(Long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(Vlong));
	printf("Size of a float: %lu byte(s)\n", sizeof(Float));

	return(0);

}
