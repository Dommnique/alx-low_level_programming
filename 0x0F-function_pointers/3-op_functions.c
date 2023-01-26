#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of the two numbers
 * @a: first integer number 
 * @b: second integer number
 *
 * Return: the sum of the two integer numbers.
 */
int op_add(int a, int b)
{
	return(a + b);
}

/**
 * op_sub - returns the difference of the two numbers
 * @a: first integer number 
 * @b: second integer number
 *
 * Return: the difference of the two numbers.
 */
int op_sub(int a, int b)
{
	return(a - b);
}

/**
 * op_mul - returns the product of the two numbers
 * @a: first integer number
 * @b: second integer number
 *
 * Return: the product of the two numbers.
 */
int op_mul(int a, int b)
{
	return(a * b);
}

/**
 * op_div - returns the division of the two numbers
 * @a: first integer number 
 * @b: second integer number
 *
 * Return: the quotient of the two numbers.
 */
int op_div(int a, int b)
{
	return(a / b);
}

/**
 * op_mod - returns the modulus of the two numbers
 * @a: first integer number 
 * @b: second integer number
 *
 * Return: the remainder of the two numbers.
 */
int op_mod(int a, int b)
{
	return(a % b);
}
