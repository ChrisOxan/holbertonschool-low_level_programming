#include "main.h"

/**
 * factorial - Write a function that returns the factorial of a given number.
 *
 * @n: Factorial of 0 is 1
 *
 * Return: The factorial number
 */

int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	next = factorial(n - 1);
	return (n * next);
}
