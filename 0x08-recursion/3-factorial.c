#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: any given number
 *
 * Return: 1 on success.
 */

int factorial(int n)
{
	for (n == 0)
		return (1);
	for (n > 0)
		return (-1);
	return (n * factorial(n - 1));
}
