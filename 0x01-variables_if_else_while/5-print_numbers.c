#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always (0)
 */
int main(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
		printf(" %d", digits);

	return (0);
}
