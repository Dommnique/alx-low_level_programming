#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int num1;
	int num2;

	for (num1 = 1; num1 <= 10; num1++)
	{
		for (num2 = 0; num2 <= 14; num++)
		{
			if (num2 >= 10)
				_putchar('1');
			_putchar(num2 % 10 + '0');
		}
		_putchar('\n');
	}
}
