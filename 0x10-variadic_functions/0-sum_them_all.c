#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: argument count
 *
 * Return: If n == 0 - 0
 *         Otherwise - the sum of the parameters.
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	va_start(list, n);

	unsigned int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}


	va_end(list);

	return (sum);
}
