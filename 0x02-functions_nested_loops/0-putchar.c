#include <main.h>

/*
 * main - Entry point
 *
 * Return: Always (0).
 */

int main(void)
{
	char cat = "_putchar";

	while (cat)
	{
		_putchar(cat);
		cat++;
	}

	_putchar('\n');

	return (0);
}
