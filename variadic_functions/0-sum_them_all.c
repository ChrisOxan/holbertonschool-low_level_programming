#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int s;
	unsigned int i;

	if (n == 0)
		return (0);

	s = 0;
	va_start(num, n);
	for (i = 0; i < n; i++)
		s += va_arg(num, int);
	va_end(num);
	return (s);
}
