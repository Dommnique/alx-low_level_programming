#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: is the integer for the paramaters of my function
 *
 * Returns: 0.
 */

void print_line(int n)
{
	int a = 0;

	while (a <= n)
	{
		if (n > 0)
		{
			_putchar('\n');
		}

	_putchar ('_');
	a++;
	}
}
