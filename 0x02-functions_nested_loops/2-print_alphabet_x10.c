#include "main.h"

/**
 * print_alphabet_x10 - a function that prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int n, repeat;

	repeat = 0;

	while (repeat < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}

		repeat++;
		_putchar('\n');
	}
}
