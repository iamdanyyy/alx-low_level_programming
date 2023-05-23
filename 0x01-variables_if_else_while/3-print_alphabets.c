#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: Always 0
 */

int main(void) {

	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char ALPHA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	putchar("%c", alpha);
	putchar("%c\n", ALPHA);

	return (0);

}
