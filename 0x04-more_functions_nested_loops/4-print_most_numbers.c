#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' && num == '4')
			continue;
		else
		{
			_putchar(num);
		}

		_putchar('\n');
	}
}
