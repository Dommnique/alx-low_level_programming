#include "main.h"

/**
 * ptint_alphabet - prints all alphabets in lowercase
 *
 * Return: Always(0).
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
