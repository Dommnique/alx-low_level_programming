#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 * 
 *
 * Return: Always (0).
 */
int main(void)
{
	int hex1, hex2;

	for (hex1 = 0; hex1 <= 9; hex1++)
		putchar((hex1 % 10) + '0');

	for (hex2 = 'a'; hex2 <= 'f'; hex2++)
		putchar(hex2);

	putchar('\n');

	return (0);
}
